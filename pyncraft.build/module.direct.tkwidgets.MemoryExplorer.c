/* Generated code for Python module 'direct.tkwidgets.MemoryExplorer'
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

/* The "module_direct$tkwidgets$MemoryExplorer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$tkwidgets$MemoryExplorer;
PyDictObject *moduledict_direct$tkwidgets$MemoryExplorer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[255];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[255];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.tkwidgets.MemoryExplorer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 255; i++) {
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
void checkModuleConstants_direct$tkwidgets$MemoryExplorer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 255; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5c823924083854efbaab28c1516d988;
static PyCodeObject *codeobj_1d44b1f9033ff0876c7c62430d5d7f31;
static PyCodeObject *codeobj_df299fb0bb57a7d94274b37a46e73e5a;
static PyCodeObject *codeobj_e20dcfbb75a509caf191e4cee54f88cd;
static PyCodeObject *codeobj_c272adc8047e6a87b49ba11984ff37f7;
static PyCodeObject *codeobj_0da1ad3e7b629637710d7449a3807d1b;
static PyCodeObject *codeobj_6ff5fe6f85a420f78e68d2c8fabc140b;
static PyCodeObject *codeobj_a21c6bf955d7a22c518d4f0fa0b92c76;
static PyCodeObject *codeobj_be03b79f27d5f63f6fd79e019bc20996;
static PyCodeObject *codeobj_ed43be47da2942ddf055cb207357215b;
static PyCodeObject *codeobj_1e869a8800a5d647ace1948b935b7973;
static PyCodeObject *codeobj_c8237c476902ebbf4bb8e54076f710c8;
static PyCodeObject *codeobj_83a79ab674b9fd7ef0d1bcf71feedcdf;
static PyCodeObject *codeobj_6e013711ad7b23107970297e176b4293;
static PyCodeObject *codeobj_203ed2fb22c72894f4803b3967bc2387;
static PyCodeObject *codeobj_2ba8b7ff717483df17dc68711c79f056;
static PyCodeObject *codeobj_5f2cf60dc55b011b12ea07874a98463f;
static PyCodeObject *codeobj_c3a5a49712b085e3ff572ed44fb21177;
static PyCodeObject *codeobj_cc2edad7170a16e843827253fc70ad93;
static PyCodeObject *codeobj_7891f938d4deefce20e41ce846943888;
static PyCodeObject *codeobj_fd8431b4d0fa95e1fc60f493d49d3ec9;
static PyCodeObject *codeobj_112e069701310163981ca5524ab45b67;
static PyCodeObject *codeobj_5218b6c578cbb2100787fc88bc2a1bb3;
static PyCodeObject *codeobj_1a35b7436b04360ed5f0473c13c9e8c0;
static PyCodeObject *codeobj_8f6be5e02ed1ec62f0e44e40fe81d7da;
static PyCodeObject *codeobj_0931d8e37147864748a27a2ce945b851;
static PyCodeObject *codeobj_d80d6309f4dd02cfbf407eb522a136a5;
static PyCodeObject *codeobj_b57e112fa8fc3a66c97888f4486cc468;
static PyCodeObject *codeobj_5330a0e6c82941746c7350081b8d1de8;
static PyCodeObject *codeobj_c2643b0194e33ac0330b39022a7e3cfa;
static PyCodeObject *codeobj_110cf4275eb00b7d5e109891bd9dcb33;
static PyCodeObject *codeobj_7707c10ff7b7f7665d11b164fe945c45;
static PyCodeObject *codeobj_300b82690ca4c4d31c20ffa6fc4091f4;
static PyCodeObject *codeobj_1e19208acb7e94045d2557e7db35759d;
static PyCodeObject *codeobj_d249d0f216d2fca57d256a8063ae784f;
static PyCodeObject *codeobj_19aa8db09fff391c4bab4d240f75fa7b;
static PyCodeObject *codeobj_c84899db0d009cc3cc21fdbdc2117cf6;
static PyCodeObject *codeobj_dcca4224b63d86b847dcf67542e62d01;
static PyCodeObject *codeobj_f38d3bbd4c4a0e4f65436a269ad9e5c1;
static PyCodeObject *codeobj_70d4ce538cc8e0fde4f7b584d2519689;
static PyCodeObject *codeobj_2e6fc4cf54d3d176bd0eb5abc946e359;
static PyCodeObject *codeobj_6cec17d3f67d300742e2d046202d3d76;
static PyCodeObject *codeobj_27dd811dca3767cdcbdbf357ddb5e34a;
static PyCodeObject *codeobj_1b79ac02128be878faa45c55e4b45eb1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[224]); CHECK_OBJECT(module_filename_obj);
    codeobj_f5c823924083854efbaab28c1516d988 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[225], mod_consts[225], NULL, NULL, 0, 0, 0);
    codeobj_1d44b1f9033ff0876c7c62430d5d7f31 = MAKE_CODE_OBJECT(module_filename_obj, 12, 0, mod_consts[172], mod_consts[172], mod_consts[226], NULL, 0, 0, 0);
    codeobj_df299fb0bb57a7d94274b37a46e73e5a = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[227], NULL, 3, 0, 0);
    codeobj_e20dcfbb75a509caf191e4cee54f88cd = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[6], mod_consts[6], mod_consts[228], NULL, 3, 0, 0);
    codeobj_c272adc8047e6a87b49ba11984ff37f7 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[71], mod_consts[71], mod_consts[229], NULL, 6, 0, 0);
    codeobj_0da1ad3e7b629637710d7449a3807d1b = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[116], mod_consts[230], NULL, 2, 0, 0);
    codeobj_6ff5fe6f85a420f78e68d2c8fabc140b = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[231], NULL, 3, 0, 0);
    codeobj_a21c6bf955d7a22c518d4f0fa0b92c76 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], mod_consts[232], NULL, 2, 0, 0);
    codeobj_be03b79f27d5f63f6fd79e019bc20996 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[68], mod_consts[68], mod_consts[233], NULL, 2, 0, 0);
    codeobj_ed43be47da2942ddf055cb207357215b = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], mod_consts[231], NULL, 3, 0, 0);
    codeobj_1e869a8800a5d647ace1948b935b7973 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], mod_consts[234], NULL, 1, 0, 0);
    codeobj_c8237c476902ebbf4bb8e54076f710c8 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], mod_consts[235], NULL, 1, 0, 0);
    codeobj_83a79ab674b9fd7ef0d1bcf71feedcdf = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[230], NULL, 1, 0, 0);
    codeobj_6e013711ad7b23107970297e176b4293 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[236], NULL, 2, 0, 0);
    codeobj_203ed2fb22c72894f4803b3967bc2387 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], mod_consts[237], NULL, 2, 0, 0);
    codeobj_2ba8b7ff717483df17dc68711c79f056 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[128], mod_consts[128], mod_consts[238], NULL, 1, 0, 0);
    codeobj_5f2cf60dc55b011b12ea07874a98463f = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], mod_consts[239], NULL, 2, 0, 0);
    codeobj_c3a5a49712b085e3ff572ed44fb21177 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[240], mod_consts[241], 1, 0, 0);
    codeobj_cc2edad7170a16e843827253fc70ad93 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[85], mod_consts[242], mod_consts[243], 1, 0, 0);
    codeobj_7891f938d4deefce20e41ce846943888 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], mod_consts[244], NULL, 1, 0, 0);
    codeobj_fd8431b4d0fa95e1fc60f493d49d3ec9 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[234], NULL, 1, 0, 0);
    codeobj_112e069701310163981ca5524ab45b67 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[234], NULL, 1, 0, 0);
    codeobj_5218b6c578cbb2100787fc88bc2a1bb3 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[234], NULL, 1, 0, 0);
    codeobj_1a35b7436b04360ed5f0473c13c9e8c0 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[79], mod_consts[79], mod_consts[245], NULL, 3, 0, 0);
    codeobj_8f6be5e02ed1ec62f0e44e40fe81d7da = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], mod_consts[234], NULL, 1, 0, 0);
    codeobj_0931d8e37147864748a27a2ce945b851 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[75], mod_consts[234], NULL, 1, 0, 0);
    codeobj_d80d6309f4dd02cfbf407eb522a136a5 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[82], mod_consts[82], mod_consts[246], NULL, 3, 0, 0);
    codeobj_b57e112fa8fc3a66c97888f4486cc468 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[76], mod_consts[76], mod_consts[234], NULL, 1, 0, 0);
    codeobj_5330a0e6c82941746c7350081b8d1de8 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], mod_consts[234], NULL, 1, 0, 0);
    codeobj_c2643b0194e33ac0330b39022a7e3cfa = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[234], NULL, 1, 0, 0);
    codeobj_110cf4275eb00b7d5e109891bd9dcb33 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[70], mod_consts[70], mod_consts[234], NULL, 1, 0, 0);
    codeobj_7707c10ff7b7f7665d11b164fe945c45 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[234], NULL, 1, 0, 0);
    codeobj_300b82690ca4c4d31c20ffa6fc4091f4 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[156], mod_consts[156], mod_consts[247], NULL, 2, 0, 0);
    codeobj_1e19208acb7e94045d2557e7db35759d = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], mod_consts[234], NULL, 1, 0, 0);
    codeobj_d249d0f216d2fca57d256a8063ae784f = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[77], mod_consts[77], mod_consts[248], NULL, 2, 0, 0);
    codeobj_19aa8db09fff391c4bab4d240f75fa7b = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[249], NULL, 2, 0, 0);
    codeobj_c84899db0d009cc3cc21fdbdc2117cf6 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[250], NULL, 2, 0, 0);
    codeobj_dcca4224b63d86b847dcf67542e62d01 = MAKE_CODE_OBJECT(module_filename_obj, 198, 0, mod_consts[72], mod_consts[72], mod_consts[248], NULL, 2, 0, 0);
    codeobj_f38d3bbd4c4a0e4f65436a269ad9e5c1 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[73], mod_consts[73], mod_consts[249], NULL, 2, 0, 0);
    codeobj_70d4ce538cc8e0fde4f7b584d2519689 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[234], NULL, 1, 0, 0);
    codeobj_2e6fc4cf54d3d176bd0eb5abc946e359 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], mod_consts[251], NULL, 1, 0, 0);
    codeobj_6cec17d3f67d300742e2d046202d3d76 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[252], NULL, 3, 0, 0);
    codeobj_27dd811dca3767cdcbdbf357ddb5e34a = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], mod_consts[253], NULL, 1, 0, 0);
    codeobj_1b79ac02128be878faa45c55e4b45eb1 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], mod_consts[244], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__17_onSelfButtonLClick();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__22_makeList();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__23_buildList();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__24_analyze();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__25_refresh();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__26___init__();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__27_getParent();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__28_addChild();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__31_getName();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__35_analyze();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__3_createScale();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__40_ls(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl();


// The module function definitions.
static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_nodePath = python_pars[2];
    PyObject *par_kw = python_pars[3];
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_e20dcfbb75a509caf191e4cee54f88cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e20dcfbb75a509caf191e4cee54f88cd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e20dcfbb75a509caf191e4cee54f88cd)) {
        Py_XDECREF(cache_frame_e20dcfbb75a509caf191e4cee54f88cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e20dcfbb75a509caf191e4cee54f88cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e20dcfbb75a509caf191e4cee54f88cd = MAKE_FUNCTION_FRAME(tstate, codeobj_e20dcfbb75a509caf191e4cee54f88cd, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e20dcfbb75a509caf191e4cee54f88cd->m_type_description == NULL);
    frame_e20dcfbb75a509caf191e4cee54f88cd = cache_frame_e20dcfbb75a509caf191e4cee54f88cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e20dcfbb75a509caf191e4cee54f88cd);
    assert(Py_REFCNT(frame_e20dcfbb75a509caf191e4cee54f88cd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_nodePath);
        tmp_cmp_expr_left_1 = par_nodePath;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_nodePath;
            assert(old != NULL);
            par_nodePath = tmp_assign_source_1;
            Py_INCREF(par_nodePath);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = MAKE_LIST_EMPTY(0);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_2;
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
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_4 = par_parent;
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[6],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_nodePath);
        tmp_assattr_value_1 = par_nodePath;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[9], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[10], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[11], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[12], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[14], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 35;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[15]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 36;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[16]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 37;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[17]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 39;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[19]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame.f_lineno = 39;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[20], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e20dcfbb75a509caf191e4cee54f88cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e20dcfbb75a509caf191e4cee54f88cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e20dcfbb75a509caf191e4cee54f88cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e20dcfbb75a509caf191e4cee54f88cd,
        type_description_1,
        par_self,
        par_parent,
        par_nodePath,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_e20dcfbb75a509caf191e4cee54f88cd == cache_frame_e20dcfbb75a509caf191e4cee54f88cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e20dcfbb75a509caf191e4cee54f88cd);
        cache_frame_e20dcfbb75a509caf191e4cee54f88cd = NULL;
    }

    assertFrameObject(frame_e20dcfbb75a509caf191e4cee54f88cd);

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
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    par_nodePath = NULL;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
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

    Py_XDECREF(par_nodePath);
    par_nodePath = NULL;
    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5218b6c578cbb2100787fc88bc2a1bb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5218b6c578cbb2100787fc88bc2a1bb3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5218b6c578cbb2100787fc88bc2a1bb3)) {
        Py_XDECREF(cache_frame_5218b6c578cbb2100787fc88bc2a1bb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5218b6c578cbb2100787fc88bc2a1bb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5218b6c578cbb2100787fc88bc2a1bb3 = MAKE_FUNCTION_FRAME(tstate, codeobj_5218b6c578cbb2100787fc88bc2a1bb3, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5218b6c578cbb2100787fc88bc2a1bb3->m_type_description == NULL);
    frame_5218b6c578cbb2100787fc88bc2a1bb3 = cache_frame_5218b6c578cbb2100787fc88bc2a1bb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5218b6c578cbb2100787fc88bc2a1bb3);
    assert(Py_REFCNT(frame_5218b6c578cbb2100787fc88bc2a1bb3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5218b6c578cbb2100787fc88bc2a1bb3->m_frame.f_lineno = 42;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[22]);
        frame_5218b6c578cbb2100787fc88bc2a1bb3->m_frame.f_lineno = 42;
        tmp_assattr_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[23]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[25];
        tmp_kw_call_value_1_1 = mod_consts[25];
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = mod_consts[27];
        frame_5218b6c578cbb2100787fc88bc2a1bb3->m_frame.f_lineno = 49;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[28]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_5218b6c578cbb2100787fc88bc2a1bb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5218b6c578cbb2100787fc88bc2a1bb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5218b6c578cbb2100787fc88bc2a1bb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5218b6c578cbb2100787fc88bc2a1bb3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5218b6c578cbb2100787fc88bc2a1bb3 == cache_frame_5218b6c578cbb2100787fc88bc2a1bb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5218b6c578cbb2100787fc88bc2a1bb3);
        cache_frame_5218b6c578cbb2100787fc88bc2a1bb3 = NULL;
    }

    assertFrameObject(frame_5218b6c578cbb2100787fc88bc2a1bb3);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__3_createScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_112e069701310163981ca5524ab45b67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_112e069701310163981ca5524ab45b67 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_112e069701310163981ca5524ab45b67)) {
        Py_XDECREF(cache_frame_112e069701310163981ca5524ab45b67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_112e069701310163981ca5524ab45b67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_112e069701310163981ca5524ab45b67 = MAKE_FUNCTION_FRAME(tstate, codeobj_112e069701310163981ca5524ab45b67, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_112e069701310163981ca5524ab45b67->m_type_description == NULL);
    frame_112e069701310163981ca5524ab45b67 = cache_frame_112e069701310163981ca5524ab45b67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_112e069701310163981ca5524ab45b67);
    assert(Py_REFCNT(frame_112e069701310163981ca5524ab45b67) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_112e069701310163981ca5524ab45b67->m_frame.f_lineno = 52;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[30];
        tmp_kw_call_dict_value_1_1 = mod_consts[31];
        tmp_kw_call_dict_value_2_1 = mod_consts[32];
        tmp_kw_call_dict_value_3_1 = mod_consts[33];
        tmp_kw_call_dict_value_4_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_kw_call_dict_value_4_1 == NULL)) {
            tmp_kw_call_dict_value_4_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_kw_call_dict_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_kw_call_dict_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_112e069701310163981ca5524ab45b67->m_frame.f_lineno = 52;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_5_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[27];
        frame_112e069701310163981ca5524ab45b67->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[37]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_112e069701310163981ca5524ab45b67->m_frame.f_lineno = 61;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_112e069701310163981ca5524ab45b67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_112e069701310163981ca5524ab45b67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_112e069701310163981ca5524ab45b67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_112e069701310163981ca5524ab45b67,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_112e069701310163981ca5524ab45b67 == cache_frame_112e069701310163981ca5524ab45b67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_112e069701310163981ca5524ab45b67);
        cache_frame_112e069701310163981ca5524ab45b67 = NULL;
    }

    assertFrameObject(frame_112e069701310163981ca5524ab45b67);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fd8431b4d0fa95e1fc60f493d49d3ec9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9)) {
        Py_XDECREF(cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9 = MAKE_FUNCTION_FRAME(tstate, codeobj_fd8431b4d0fa95e1fc60f493d49d3ec9, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9->m_type_description == NULL);
    frame_fd8431b4d0fa95e1fc60f493d49d3ec9 = cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fd8431b4d0fa95e1fc60f493d49d3ec9);
    assert(Py_REFCNT(frame_fd8431b4d0fa95e1fc60f493d49d3ec9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fd8431b4d0fa95e1fc60f493d49d3ec9->m_frame.f_lineno = 64;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[43];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fd8431b4d0fa95e1fc60f493d49d3ec9->m_frame.f_lineno = 64;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[46]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[27];
        frame_fd8431b4d0fa95e1fc60f493d49d3ec9->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_fd8431b4d0fa95e1fc60f493d49d3ec9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd8431b4d0fa95e1fc60f493d49d3ec9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd8431b4d0fa95e1fc60f493d49d3ec9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd8431b4d0fa95e1fc60f493d49d3ec9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fd8431b4d0fa95e1fc60f493d49d3ec9 == cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9);
        cache_frame_fd8431b4d0fa95e1fc60f493d49d3ec9 = NULL;
    }

    assertFrameObject(frame_fd8431b4d0fa95e1fc60f493d49d3ec9);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_totalBytes = NULL;
    struct Nuitka_FrameObject *frame_7891f938d4deefce20e41ce846943888;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7891f938d4deefce20e41ce846943888 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7891f938d4deefce20e41ce846943888)) {
        Py_XDECREF(cache_frame_7891f938d4deefce20e41ce846943888);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7891f938d4deefce20e41ce846943888 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7891f938d4deefce20e41ce846943888 = MAKE_FUNCTION_FRAME(tstate, codeobj_7891f938d4deefce20e41ce846943888, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7891f938d4deefce20e41ce846943888->m_type_description == NULL);
    frame_7891f938d4deefce20e41ce846943888 = cache_frame_7891f938d4deefce20e41ce846943888;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7891f938d4deefce20e41ce846943888);
    assert(Py_REFCNT(frame_7891f938d4deefce20e41ce846943888) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7891f938d4deefce20e41ce846943888->m_frame.f_lineno = 74;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7891f938d4deefce20e41ce846943888->m_frame.f_lineno = 74;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_totalBytes == NULL);
        var_totalBytes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_totalBytes);
        tmp_args_element_value_2 = var_totalBytes;
        frame_7891f938d4deefce20e41ce846943888->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[9]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_totalBytes);
        tmp_args_element_value_4 = var_totalBytes;
        frame_7891f938d4deefce20e41ce846943888->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        tmp_args_element_value_5 = mod_consts[50];
        CHECK_OBJECT(var_totalBytes);
        tmp_args_element_value_6 = var_totalBytes;
        frame_7891f938d4deefce20e41ce846943888->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[49],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_7891f938d4deefce20e41ce846943888, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7891f938d4deefce20e41ce846943888->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7891f938d4deefce20e41ce846943888, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7891f938d4deefce20e41ce846943888,
        type_description_1,
        par_self,
        var_totalBytes
    );


    // Release cached frame if used for exception.
    if (frame_7891f938d4deefce20e41ce846943888 == cache_frame_7891f938d4deefce20e41ce846943888) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7891f938d4deefce20e41ce846943888);
        cache_frame_7891f938d4deefce20e41ce846943888 = NULL;
    }

    assertFrameObject(frame_7891f938d4deefce20e41ce846943888);

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
    Py_XDECREF(var_totalBytes);
    var_totalBytes = NULL;
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

    Py_XDECREF(var_totalBytes);
    var_totalBytes = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_bytes = python_pars[2];
    struct Nuitka_FrameObject *frame_6cec17d3f67d300742e2d046202d3d76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6cec17d3f67d300742e2d046202d3d76 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6cec17d3f67d300742e2d046202d3d76)) {
        Py_XDECREF(cache_frame_6cec17d3f67d300742e2d046202d3d76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cec17d3f67d300742e2d046202d3d76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cec17d3f67d300742e2d046202d3d76 = MAKE_FUNCTION_FRAME(tstate, codeobj_6cec17d3f67d300742e2d046202d3d76, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6cec17d3f67d300742e2d046202d3d76->m_type_description == NULL);
    frame_6cec17d3f67d300742e2d046202d3d76 = cache_frame_6cec17d3f67d300742e2d046202d3d76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6cec17d3f67d300742e2d046202d3d76);
    assert(Py_REFCNT(frame_6cec17d3f67d300742e2d046202d3d76) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mod_expr_left_1 = mod_consts[51];
        CHECK_OBJECT(par_parent);
        tmp_tuple_element_1 = par_parent;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_bytes);
        tmp_tuple_element_1 = par_bytes;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_ass_subvalue_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cec17d3f67d300742e2d046202d3d76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cec17d3f67d300742e2d046202d3d76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cec17d3f67d300742e2d046202d3d76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cec17d3f67d300742e2d046202d3d76,
        type_description_1,
        par_self,
        par_parent,
        par_bytes
    );


    // Release cached frame if used for exception.
    if (frame_6cec17d3f67d300742e2d046202d3d76 == cache_frame_6cec17d3f67d300742e2d046202d3d76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6cec17d3f67d300742e2d046202d3d76);
        cache_frame_6cec17d3f67d300742e2d046202d3d76 = NULL;
    }

    assertFrameObject(frame_6cec17d3f67d300742e2d046202d3d76);

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
    CHECK_OBJECT(par_bytes);
    Py_DECREF(par_bytes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_bytes);
    Py_DECREF(par_bytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_button = NULL;
    PyObject *var_label = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2e6fc4cf54d3d176bd0eb5abc946e359;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359)) {
        Py_XDECREF(cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359 = MAKE_FUNCTION_FRAME(tstate, codeobj_2e6fc4cf54d3d176bd0eb5abc946e359, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359->m_type_description == NULL);
    frame_2e6fc4cf54d3d176bd0eb5abc946e359 = cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2e6fc4cf54d3d176bd0eb5abc946e359);
    assert(Py_REFCNT(frame_2e6fc4cf54d3d176bd0eb5abc946e359) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 85;
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
            PyObject *old = var_button;
            var_button = tmp_assign_source_3;
            Py_INCREF(var_button);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_button);
        tmp_args_element_value_1 = var_button;
        frame_2e6fc4cf54d3d176bd0eb5abc946e359->m_frame.f_lineno = 86;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_button);
        tmp_called_instance_2 = var_button;
        frame_2e6fc4cf54d3d176bd0eb5abc946e359->m_frame.f_lineno = 87;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[55]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 85;
        type_description_1 = "ooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 90;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_label;
            var_label = tmp_assign_source_6;
            Py_INCREF(var_label);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_label);
        tmp_called_instance_3 = var_label;
        frame_2e6fc4cf54d3d176bd0eb5abc946e359->m_frame.f_lineno = 91;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[55]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e6fc4cf54d3d176bd0eb5abc946e359, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e6fc4cf54d3d176bd0eb5abc946e359->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e6fc4cf54d3d176bd0eb5abc946e359, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e6fc4cf54d3d176bd0eb5abc946e359,
        type_description_1,
        par_self,
        var_button,
        var_label
    );


    // Release cached frame if used for exception.
    if (frame_2e6fc4cf54d3d176bd0eb5abc946e359 == cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359);
        cache_frame_2e6fc4cf54d3d176bd0eb5abc946e359 = NULL;
    }

    assertFrameObject(frame_2e6fc4cf54d3d176bd0eb5abc946e359);

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
    Py_XDECREF(var_button);
    var_button = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
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

    Py_XDECREF(var_button);
    var_button = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_ratio = python_pars[2];
    PyObject *var_newBT = NULL;
    struct Nuitka_FrameObject *frame_d80d6309f4dd02cfbf407eb522a136a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d80d6309f4dd02cfbf407eb522a136a5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d80d6309f4dd02cfbf407eb522a136a5)) {
        Py_XDECREF(cache_frame_d80d6309f4dd02cfbf407eb522a136a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d80d6309f4dd02cfbf407eb522a136a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d80d6309f4dd02cfbf407eb522a136a5 = MAKE_FUNCTION_FRAME(tstate, codeobj_d80d6309f4dd02cfbf407eb522a136a5, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d80d6309f4dd02cfbf407eb522a136a5->m_type_description == NULL);
    frame_d80d6309f4dd02cfbf407eb522a136a5 = cache_frame_d80d6309f4dd02cfbf407eb522a136a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d80d6309f4dd02cfbf407eb522a136a5);
    assert(Py_REFCNT(frame_d80d6309f4dd02cfbf407eb522a136a5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d80d6309f4dd02cfbf407eb522a136a5->m_frame.f_lineno = 95;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_1_1 = par_width;
        frame_d80d6309f4dd02cfbf407eb522a136a5->m_frame.f_lineno = 95;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_newBT == NULL);
        var_newBT = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_ratio);
        tmp_cmp_expr_left_1 = par_ratio;
        tmp_cmp_expr_right_1 = mod_consts[31];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[58];
        CHECK_OBJECT(var_newBT);
        tmp_ass_subscribed_1 = var_newBT;
        tmp_ass_subscript_1 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[60];
        CHECK_OBJECT(var_newBT);
        tmp_ass_subscribed_2 = var_newBT;
        tmp_ass_subscript_2 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[63]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[31];
        tmp_sub_expr_left_1 = mod_consts[64];
        CHECK_OBJECT(par_ratio);
        tmp_sub_expr_right_1 = par_ratio;
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d80d6309f4dd02cfbf407eb522a136a5->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newBT);
        tmp_ass_subscribed_3 = var_newBT;
        tmp_ass_subscript_3 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_mod_expr_left_1 = mod_consts[65];
        CHECK_OBJECT(par_ratio);
        tmp_mult_expr_left_1 = par_ratio;
        tmp_mult_expr_right_1 = mod_consts[66];
        tmp_mod_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newBT);
        tmp_ass_subscribed_4 = var_newBT;
        tmp_ass_subscript_4 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    if (var_newBT == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_newBT;
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
        exception_tb = MAKE_TRACEBACK(frame_d80d6309f4dd02cfbf407eb522a136a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d80d6309f4dd02cfbf407eb522a136a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d80d6309f4dd02cfbf407eb522a136a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d80d6309f4dd02cfbf407eb522a136a5,
        type_description_1,
        par_self,
        par_width,
        par_ratio,
        var_newBT
    );


    // Release cached frame if used for exception.
    if (frame_d80d6309f4dd02cfbf407eb522a136a5 == cache_frame_d80d6309f4dd02cfbf407eb522a136a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d80d6309f4dd02cfbf407eb522a136a5);
        cache_frame_d80d6309f4dd02cfbf407eb522a136a5 = NULL;
    }

    assertFrameObject(frame_d80d6309f4dd02cfbf407eb522a136a5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_newBT);
    var_newBT = NULL;
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

    Py_XDECREF(var_newBT);
    var_newBT = NULL;
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
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_ratio);
    Py_DECREF(par_ratio);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_ratio);
    Py_DECREF(par_ratio);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *par_totalBytes = python_pars[2];
    PyObject *var_bt = NULL;
    struct Nuitka_FrameObject *frame_ed43be47da2942ddf055cb207357215b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed43be47da2942ddf055cb207357215b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ed43be47da2942ddf055cb207357215b)) {
        Py_XDECREF(cache_frame_ed43be47da2942ddf055cb207357215b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed43be47da2942ddf055cb207357215b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed43be47da2942ddf055cb207357215b = MAKE_FUNCTION_FRAME(tstate, codeobj_ed43be47da2942ddf055cb207357215b, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed43be47da2942ddf055cb207357215b->m_type_description == NULL);
    frame_ed43be47da2942ddf055cb207357215b = cache_frame_ed43be47da2942ddf055cb207357215b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ed43be47da2942ddf055cb207357215b);
    assert(Py_REFCNT(frame_ed43be47da2942ddf055cb207357215b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[69];
        CHECK_OBJECT(par_item);
        tmp_called_instance_1 = par_item;
        frame_ed43be47da2942ddf055cb207357215b->m_frame.f_lineno = 109;
        tmp_mod_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[70]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ed43be47da2942ddf055cb207357215b->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_called_instance_2 = par_item;
        frame_ed43be47da2942ddf055cb207357215b->m_frame.f_lineno = 111;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[70]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_totalBytes);
        tmp_args_element_value_3 = par_totalBytes;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[72]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[73]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_args_element_value_6 = par_item;
        frame_ed43be47da2942ddf055cb207357215b->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bt == NULL);
        var_bt = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed43be47da2942ddf055cb207357215b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed43be47da2942ddf055cb207357215b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed43be47da2942ddf055cb207357215b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed43be47da2942ddf055cb207357215b,
        type_description_1,
        par_self,
        par_item,
        par_totalBytes,
        var_bt
    );


    // Release cached frame if used for exception.
    if (frame_ed43be47da2942ddf055cb207357215b == cache_frame_ed43be47da2942ddf055cb207357215b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed43be47da2942ddf055cb207357215b);
        cache_frame_ed43be47da2942ddf055cb207357215b = NULL;
    }

    assertFrameObject(frame_ed43be47da2942ddf055cb207357215b);

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
    CHECK_OBJECT(var_bt);
    Py_DECREF(var_bt);
    var_bt = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *par_totalBytes = python_pars[2];
    PyObject *var_bt = NULL;
    struct Nuitka_FrameObject *frame_6ff5fe6f85a420f78e68d2c8fabc140b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b)) {
        Py_XDECREF(cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b = MAKE_FUNCTION_FRAME(tstate, codeobj_6ff5fe6f85a420f78e68d2c8fabc140b, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_type_description == NULL);
    frame_6ff5fe6f85a420f78e68d2c8fabc140b = cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6ff5fe6f85a420f78e68d2c8fabc140b);
    assert(Py_REFCNT(frame_6ff5fe6f85a420f78e68d2c8fabc140b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[74];
        CHECK_OBJECT(par_item);
        tmp_called_instance_1 = par_item;
        frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 118;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_item);
            tmp_called_instance_2 = par_item;
            frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 119;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[76]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_item);
            tmp_called_instance_3 = par_item;
            frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 120;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[47]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_called_instance_4 = par_item;
        frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 122;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[47]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_totalBytes);
        tmp_args_element_value_3 = par_totalBytes;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[77]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[78]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_args_element_value_6 = par_item;
        frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bt == NULL);
        var_bt = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ff5fe6f85a420f78e68d2c8fabc140b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ff5fe6f85a420f78e68d2c8fabc140b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ff5fe6f85a420f78e68d2c8fabc140b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ff5fe6f85a420f78e68d2c8fabc140b,
        type_description_1,
        par_self,
        par_item,
        par_totalBytes,
        var_bt
    );


    // Release cached frame if used for exception.
    if (frame_6ff5fe6f85a420f78e68d2c8fabc140b == cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b);
        cache_frame_6ff5fe6f85a420f78e68d2c8fabc140b = NULL;
    }

    assertFrameObject(frame_6ff5fe6f85a420f78e68d2c8fabc140b);

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
    CHECK_OBJECT(var_bt);
    Py_DECREF(var_bt);
    var_bt = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_vertexBytes = python_pars[1];
    PyObject *par_totalBytes = python_pars[2];
    struct Nuitka_CellObject *par_funcLClick = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_funcRClick = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_item = Nuitka_Cell_New1(python_pars[5]);
    PyObject *var_width = NULL;
    PyObject *var_ratio = NULL;
    PyObject *var_bt = NULL;
    PyObject *var_callbackL = NULL;
    PyObject *var_callbackR = NULL;
    struct Nuitka_FrameObject *frame_c272adc8047e6a87b49ba11984ff37f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c272adc8047e6a87b49ba11984ff37f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c272adc8047e6a87b49ba11984ff37f7)) {
        Py_XDECREF(cache_frame_c272adc8047e6a87b49ba11984ff37f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c272adc8047e6a87b49ba11984ff37f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c272adc8047e6a87b49ba11984ff37f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_c272adc8047e6a87b49ba11984ff37f7, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c272adc8047e6a87b49ba11984ff37f7->m_type_description == NULL);
    frame_c272adc8047e6a87b49ba11984ff37f7 = cache_frame_c272adc8047e6a87b49ba11984ff37f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c272adc8047e6a87b49ba11984ff37f7);
    assert(Py_REFCNT(frame_c272adc8047e6a87b49ba11984ff37f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_vertexBytes);
        tmp_args_element_value_1 = par_vertexBytes;
        CHECK_OBJECT(par_totalBytes);
        tmp_args_element_value_2 = par_totalBytes;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[79],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_totalBytes);
        tmp_cmp_expr_left_1 = par_totalBytes;
        tmp_cmp_expr_right_1 = mod_consts[80];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooocccooooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[31];
        assert(var_ratio == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_ratio = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_vertexBytes);
        tmp_truediv_expr_left_1 = par_vertexBytes;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_totalBytes);
        tmp_args_element_value_3 = par_totalBytes;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 134;
        tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ratio == NULL);
        var_ratio = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_width);
        tmp_args_element_value_4 = var_width;
        CHECK_OBJECT(var_ratio);
        tmp_args_element_value_5 = var_ratio;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[82],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bt == NULL);
        var_bt = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_funcLClick;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_item;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_5 = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL(tmp_closure_1);

        assert(var_callbackL == NULL);
        var_callbackL = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = par_funcRClick;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_item;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_6 = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR(tmp_closure_2);

        assert(var_callbackR == NULL);
        var_callbackR = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_bt);
        tmp_called_instance_3 = var_bt;
        tmp_args_element_value_6 = mod_consts[88];
        CHECK_OBJECT(var_callbackL);
        tmp_args_element_value_7 = var_callbackL;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_bt);
        tmp_called_instance_4 = var_bt;
        tmp_args_element_value_8 = mod_consts[89];
        CHECK_OBJECT(var_callbackR);
        tmp_args_element_value_9 = var_callbackR;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(var_bt);
        tmp_expression_value_1 = var_bt;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 147;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 147;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 147;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[93]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bt);
        tmp_args_element_value_10 = var_bt;
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 148;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[20]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[87]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bt);
        tmp_args_element_value_11 = var_bt;
        CHECK_OBJECT(Nuitka_Cell_GET(par_item));
        tmp_called_instance_5 = Nuitka_Cell_GET(par_item);
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 150;
        tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[94]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 150;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        frame_c272adc8047e6a87b49ba11984ff37f7->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c272adc8047e6a87b49ba11984ff37f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c272adc8047e6a87b49ba11984ff37f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c272adc8047e6a87b49ba11984ff37f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c272adc8047e6a87b49ba11984ff37f7,
        type_description_1,
        par_self,
        par_vertexBytes,
        par_totalBytes,
        par_funcLClick,
        par_funcRClick,
        par_item,
        var_width,
        var_ratio,
        var_bt,
        var_callbackL,
        var_callbackR
    );


    // Release cached frame if used for exception.
    if (frame_c272adc8047e6a87b49ba11984ff37f7 == cache_frame_c272adc8047e6a87b49ba11984ff37f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c272adc8047e6a87b49ba11984ff37f7);
        cache_frame_c272adc8047e6a87b49ba11984ff37f7 = NULL;
    }

    assertFrameObject(frame_c272adc8047e6a87b49ba11984ff37f7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_bt);
    tmp_return_value = var_bt;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_ratio);
    Py_DECREF(var_ratio);
    var_ratio = NULL;
    CHECK_OBJECT(var_bt);
    Py_DECREF(var_bt);
    var_bt = NULL;
    CHECK_OBJECT(var_callbackL);
    Py_DECREF(var_callbackL);
    var_callbackL = NULL;
    CHECK_OBJECT(var_callbackR);
    Py_DECREF(var_callbackR);
    var_callbackR = NULL;
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

    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    Py_XDECREF(var_bt);
    var_bt = NULL;
    Py_XDECREF(var_callbackL);
    var_callbackL = NULL;
    Py_XDECREF(var_callbackR);
    var_callbackR = NULL;
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
    CHECK_OBJECT(par_vertexBytes);
    Py_DECREF(par_vertexBytes);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);
    CHECK_OBJECT(par_funcLClick);
    Py_DECREF(par_funcLClick);
    CHECK_OBJECT(par_funcRClick);
    Py_DECREF(par_funcRClick);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_vertexBytes);
    Py_DECREF(par_vertexBytes);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);
    CHECK_OBJECT(par_funcLClick);
    Py_DECREF(par_funcLClick);
    CHECK_OBJECT(par_funcRClick);
    Py_DECREF(par_funcRClick);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_c3a5a49712b085e3ff572ed44fb21177;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c3a5a49712b085e3ff572ed44fb21177 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3a5a49712b085e3ff572ed44fb21177)) {
        Py_XDECREF(cache_frame_c3a5a49712b085e3ff572ed44fb21177);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3a5a49712b085e3ff572ed44fb21177 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3a5a49712b085e3ff572ed44fb21177 = MAKE_FUNCTION_FRAME(tstate, codeobj_c3a5a49712b085e3ff572ed44fb21177, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3a5a49712b085e3ff572ed44fb21177->m_type_description == NULL);
    frame_c3a5a49712b085e3ff572ed44fb21177 = cache_frame_c3a5a49712b085e3ff572ed44fb21177;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c3a5a49712b085e3ff572ed44fb21177);
    assert(Py_REFCNT(frame_c3a5a49712b085e3ff572ed44fb21177) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_c3a5a49712b085e3ff572ed44fb21177->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3a5a49712b085e3ff572ed44fb21177, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3a5a49712b085e3ff572ed44fb21177->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3a5a49712b085e3ff572ed44fb21177, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3a5a49712b085e3ff572ed44fb21177,
        type_description_1,
        par_event,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_c3a5a49712b085e3ff572ed44fb21177 == cache_frame_c3a5a49712b085e3ff572ed44fb21177) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3a5a49712b085e3ff572ed44fb21177);
        cache_frame_c3a5a49712b085e3ff572ed44fb21177 = NULL;
    }

    assertFrameObject(frame_c3a5a49712b085e3ff572ed44fb21177);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_cc2edad7170a16e843827253fc70ad93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc2edad7170a16e843827253fc70ad93 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc2edad7170a16e843827253fc70ad93)) {
        Py_XDECREF(cache_frame_cc2edad7170a16e843827253fc70ad93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc2edad7170a16e843827253fc70ad93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc2edad7170a16e843827253fc70ad93 = MAKE_FUNCTION_FRAME(tstate, codeobj_cc2edad7170a16e843827253fc70ad93, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc2edad7170a16e843827253fc70ad93->m_type_description == NULL);
    frame_cc2edad7170a16e843827253fc70ad93 = cache_frame_cc2edad7170a16e843827253fc70ad93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cc2edad7170a16e843827253fc70ad93);
    assert(Py_REFCNT(frame_cc2edad7170a16e843827253fc70ad93) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_cc2edad7170a16e843827253fc70ad93->m_frame.f_lineno = 142;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc2edad7170a16e843827253fc70ad93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc2edad7170a16e843827253fc70ad93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc2edad7170a16e843827253fc70ad93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc2edad7170a16e843827253fc70ad93,
        type_description_1,
        par_event,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_cc2edad7170a16e843827253fc70ad93 == cache_frame_cc2edad7170a16e843827253fc70ad93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc2edad7170a16e843827253fc70ad93);
        cache_frame_cc2edad7170a16e843827253fc70ad93 = NULL;
    }

    assertFrameObject(frame_cc2edad7170a16e843827253fc70ad93);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_label = python_pars[1];
    struct Nuitka_FrameObject *frame_be03b79f27d5f63f6fd79e019bc20996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_be03b79f27d5f63f6fd79e019bc20996 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be03b79f27d5f63f6fd79e019bc20996)) {
        Py_XDECREF(cache_frame_be03b79f27d5f63f6fd79e019bc20996);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be03b79f27d5f63f6fd79e019bc20996 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be03b79f27d5f63f6fd79e019bc20996 = MAKE_FUNCTION_FRAME(tstate, codeobj_be03b79f27d5f63f6fd79e019bc20996, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be03b79f27d5f63f6fd79e019bc20996->m_type_description == NULL);
    frame_be03b79f27d5f63f6fd79e019bc20996 = cache_frame_be03b79f27d5f63f6fd79e019bc20996;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be03b79f27d5f63f6fd79e019bc20996);
    assert(Py_REFCNT(frame_be03b79f27d5f63f6fd79e019bc20996) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_be03b79f27d5f63f6fd79e019bc20996->m_frame.f_lineno = 155;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label);
        tmp_kw_call_dict_value_0_1 = par_label;
        frame_be03b79f27d5f63f6fd79e019bc20996->m_frame.f_lineno = 155;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[99]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_label;
            assert(old != NULL);
            par_label = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_label);
        tmp_expression_value_2 = par_label;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[80];
        frame_be03b79f27d5f63f6fd79e019bc20996->m_frame.f_lineno = 156;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[93]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label);
        tmp_args_element_value_1 = par_label;
        frame_be03b79f27d5f63f6fd79e019bc20996->m_frame.f_lineno = 157;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_be03b79f27d5f63f6fd79e019bc20996, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be03b79f27d5f63f6fd79e019bc20996->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be03b79f27d5f63f6fd79e019bc20996, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be03b79f27d5f63f6fd79e019bc20996,
        type_description_1,
        par_self,
        par_label
    );


    // Release cached frame if used for exception.
    if (frame_be03b79f27d5f63f6fd79e019bc20996 == cache_frame_be03b79f27d5f63f6fd79e019bc20996) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be03b79f27d5f63f6fd79e019bc20996);
        cache_frame_be03b79f27d5f63f6fd79e019bc20996 = NULL;
    }

    assertFrameObject(frame_be03b79f27d5f63f6fd79e019bc20996);

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
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    par_label = NULL;
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

    Py_XDECREF(par_label);
    par_label = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_vertexBytes = python_pars[1];
    PyObject *par_totalBytes = python_pars[2];
    PyObject *var_width = NULL;
    struct Nuitka_FrameObject *frame_1a35b7436b04360ed5f0473c13c9e8c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1a35b7436b04360ed5f0473c13c9e8c0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1a35b7436b04360ed5f0473c13c9e8c0)) {
        Py_XDECREF(cache_frame_1a35b7436b04360ed5f0473c13c9e8c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a35b7436b04360ed5f0473c13c9e8c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a35b7436b04360ed5f0473c13c9e8c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a35b7436b04360ed5f0473c13c9e8c0, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a35b7436b04360ed5f0473c13c9e8c0->m_type_description == NULL);
    frame_1a35b7436b04360ed5f0473c13c9e8c0 = cache_frame_1a35b7436b04360ed5f0473c13c9e8c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a35b7436b04360ed5f0473c13c9e8c0);
    assert(Py_REFCNT(frame_1a35b7436b04360ed5f0473c13c9e8c0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_totalBytes);
        tmp_cmp_expr_left_1 = par_totalBytes;
        tmp_cmp_expr_right_1 = mod_consts[80];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
    tmp_return_value = mod_consts[27];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_vertexBytes);
        tmp_mult_expr_right_1 = par_vertexBytes;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_totalBytes);
        tmp_truediv_expr_right_1 = par_totalBytes;
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1a35b7436b04360ed5f0473c13c9e8c0->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_width);
        tmp_cmp_expr_left_2 = var_width;
        tmp_cmp_expr_right_2 = mod_consts[80];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[27];
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_2;
            Py_INCREF(var_width);
            Py_DECREF(old);
        }

    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a35b7436b04360ed5f0473c13c9e8c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a35b7436b04360ed5f0473c13c9e8c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a35b7436b04360ed5f0473c13c9e8c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a35b7436b04360ed5f0473c13c9e8c0,
        type_description_1,
        par_self,
        par_vertexBytes,
        par_totalBytes,
        var_width
    );


    // Release cached frame if used for exception.
    if (frame_1a35b7436b04360ed5f0473c13c9e8c0 == cache_frame_1a35b7436b04360ed5f0473c13c9e8c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a35b7436b04360ed5f0473c13c9e8c0);
        cache_frame_1a35b7436b04360ed5f0473c13c9e8c0 = NULL;
    }

    assertFrameObject(frame_1a35b7436b04360ed5f0473c13c9e8c0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_width);
    tmp_return_value = var_width;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_width);
    var_width = NULL;
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

    Py_XDECREF(var_width);
    var_width = NULL;
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
    CHECK_OBJECT(par_vertexBytes);
    Py_DECREF(par_vertexBytes);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_vertexBytes);
    Py_DECREF(par_vertexBytes);
    CHECK_OBJECT(par_totalBytes);
    Py_DECREF(par_totalBytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_arg = python_pars[1];
    struct Nuitka_FrameObject *frame_c84899db0d009cc3cc21fdbdc2117cf6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c84899db0d009cc3cc21fdbdc2117cf6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c84899db0d009cc3cc21fdbdc2117cf6)) {
        Py_XDECREF(cache_frame_c84899db0d009cc3cc21fdbdc2117cf6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c84899db0d009cc3cc21fdbdc2117cf6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c84899db0d009cc3cc21fdbdc2117cf6 = MAKE_FUNCTION_FRAME(tstate, codeobj_c84899db0d009cc3cc21fdbdc2117cf6, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c84899db0d009cc3cc21fdbdc2117cf6->m_type_description == NULL);
    frame_c84899db0d009cc3cc21fdbdc2117cf6 = cache_frame_c84899db0d009cc3cc21fdbdc2117cf6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c84899db0d009cc3cc21fdbdc2117cf6);
    assert(Py_REFCNT(frame_c84899db0d009cc3cc21fdbdc2117cf6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_mult_expr_left_1 == NULL)) {
            tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arg);
        tmp_args_element_value_1 = par_arg;
        frame_c84899db0d009cc3cc21fdbdc2117cf6->m_frame.f_lineno = 174;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 176;
            type_description_1 = "oo";
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
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c84899db0d009cc3cc21fdbdc2117cf6->m_frame.f_lineno = 177;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[102]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_c84899db0d009cc3cc21fdbdc2117cf6->m_frame.f_lineno = 179;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[103]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_c84899db0d009cc3cc21fdbdc2117cf6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c84899db0d009cc3cc21fdbdc2117cf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c84899db0d009cc3cc21fdbdc2117cf6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c84899db0d009cc3cc21fdbdc2117cf6,
        type_description_1,
        par_self,
        par_arg
    );


    // Release cached frame if used for exception.
    if (frame_c84899db0d009cc3cc21fdbdc2117cf6 == cache_frame_c84899db0d009cc3cc21fdbdc2117cf6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c84899db0d009cc3cc21fdbdc2117cf6);
        cache_frame_c84899db0d009cc3cc21fdbdc2117cf6 = NULL;
    }

    assertFrameObject(frame_c84899db0d009cc3cc21fdbdc2117cf6);

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
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_btIndex = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_27dd811dca3767cdcbdbf357ddb5e34a;
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
    static struct Nuitka_FrameObject *cache_frame_27dd811dca3767cdcbdbf357ddb5e34a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_27dd811dca3767cdcbdbf357ddb5e34a)) {
        Py_XDECREF(cache_frame_27dd811dca3767cdcbdbf357ddb5e34a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27dd811dca3767cdcbdbf357ddb5e34a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27dd811dca3767cdcbdbf357ddb5e34a = MAKE_FUNCTION_FRAME(tstate, codeobj_27dd811dca3767cdcbdbf357ddb5e34a, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27dd811dca3767cdcbdbf357ddb5e34a->m_type_description == NULL);
    frame_27dd811dca3767cdcbdbf357ddb5e34a = cache_frame_27dd811dca3767cdcbdbf357ddb5e34a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_27dd811dca3767cdcbdbf357ddb5e34a);
    assert(Py_REFCNT(frame_27dd811dca3767cdcbdbf357ddb5e34a) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 182;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[70]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 183;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 183;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 183;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[80];
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[104];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[27];
        assert(var_btIndex == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_btIndex = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 186;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[105]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 186;
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
            PyObject *old = var_item;
            var_item = tmp_assign_source_4;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscript_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[79]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_item);
        tmp_called_instance_4 = var_item;
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 187;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[47]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[12]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 188;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[47]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[10]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (var_btIndex == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_expression_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_2 = var_btIndex;
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_2 = mod_consts[104];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_btIndex == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_btIndex;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        var_btIndex = tmp_assign_source_5;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 186;
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_27dd811dca3767cdcbdbf357ddb5e34a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27dd811dca3767cdcbdbf357ddb5e34a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27dd811dca3767cdcbdbf357ddb5e34a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27dd811dca3767cdcbdbf357ddb5e34a,
        type_description_1,
        par_self,
        var_btIndex,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_27dd811dca3767cdcbdbf357ddb5e34a == cache_frame_27dd811dca3767cdcbdbf357ddb5e34a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27dd811dca3767cdcbdbf357ddb5e34a);
        cache_frame_27dd811dca3767cdcbdbf357ddb5e34a = NULL;
    }

    assertFrameObject(frame_27dd811dca3767cdcbdbf357ddb5e34a);

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
    Py_XDECREF(var_btIndex);
    var_btIndex = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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

    Py_XDECREF(var_btIndex);
    var_btIndex = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_totalBytes = NULL;
    struct Nuitka_FrameObject *frame_1b79ac02128be878faa45c55e4b45eb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b79ac02128be878faa45c55e4b45eb1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b79ac02128be878faa45c55e4b45eb1)) {
        Py_XDECREF(cache_frame_1b79ac02128be878faa45c55e4b45eb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b79ac02128be878faa45c55e4b45eb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b79ac02128be878faa45c55e4b45eb1 = MAKE_FUNCTION_FRAME(tstate, codeobj_1b79ac02128be878faa45c55e4b45eb1, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b79ac02128be878faa45c55e4b45eb1->m_type_description == NULL);
    frame_1b79ac02128be878faa45c55e4b45eb1 = cache_frame_1b79ac02128be878faa45c55e4b45eb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1b79ac02128be878faa45c55e4b45eb1);
    assert(Py_REFCNT(frame_1b79ac02128be878faa45c55e4b45eb1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 194;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 194;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_totalBytes == NULL);
        var_totalBytes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 195;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[47]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_totalBytes);
        tmp_args_element_value_2 = var_totalBytes;
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[80];
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[104];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[79]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[9]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 196;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[47]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_totalBytes);
        tmp_args_element_value_4 = var_totalBytes;
        frame_1b79ac02128be878faa45c55e4b45eb1->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[10]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[27];
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[104];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_1b79ac02128be878faa45c55e4b45eb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b79ac02128be878faa45c55e4b45eb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b79ac02128be878faa45c55e4b45eb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b79ac02128be878faa45c55e4b45eb1,
        type_description_1,
        par_self,
        var_totalBytes
    );


    // Release cached frame if used for exception.
    if (frame_1b79ac02128be878faa45c55e4b45eb1 == cache_frame_1b79ac02128be878faa45c55e4b45eb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b79ac02128be878faa45c55e4b45eb1);
        cache_frame_1b79ac02128be878faa45c55e4b45eb1 = NULL;
    }

    assertFrameObject(frame_1b79ac02128be878faa45c55e4b45eb1);

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
    Py_XDECREF(var_totalBytes);
    var_totalBytes = NULL;
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

    Py_XDECREF(var_totalBytes);
    var_totalBytes = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *var_parentItem = NULL;
    struct Nuitka_FrameObject *frame_f38d3bbd4c4a0e4f65436a269ad9e5c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1)) {
        Py_XDECREF(cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 = MAKE_FUNCTION_FRAME(tstate, codeobj_f38d3bbd4c4a0e4f65436a269ad9e5c1, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1->m_type_description == NULL);
    frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 = cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f38d3bbd4c4a0e4f65436a269ad9e5c1);
    assert(Py_REFCNT(frame_f38d3bbd4c4a0e4f65436a269ad9e5c1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_item);
        tmp_called_instance_1 = par_item;
        frame_f38d3bbd4c4a0e4f65436a269ad9e5c1->m_frame.f_lineno = 202;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[107]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parentItem == NULL);
        var_parentItem = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_f38d3bbd4c4a0e4f65436a269ad9e5c1->m_frame.f_lineno = 203;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[108]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_parentItem);
        tmp_args_element_value_1 = var_parentItem;
        frame_f38d3bbd4c4a0e4f65436a269ad9e5c1->m_frame.f_lineno = 204;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[109], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_f38d3bbd4c4a0e4f65436a269ad9e5c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f38d3bbd4c4a0e4f65436a269ad9e5c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f38d3bbd4c4a0e4f65436a269ad9e5c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f38d3bbd4c4a0e4f65436a269ad9e5c1,
        type_description_1,
        par_self,
        par_item,
        var_parentItem
    );


    // Release cached frame if used for exception.
    if (frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 == cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1);
        cache_frame_f38d3bbd4c4a0e4f65436a269ad9e5c1 = NULL;
    }

    assertFrameObject(frame_f38d3bbd4c4a0e4f65436a269ad9e5c1);

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
    CHECK_OBJECT(var_parentItem);
    Py_DECREF(var_parentItem);
    var_parentItem = NULL;
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

    Py_XDECREF(var_parentItem);
    var_parentItem = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_d249d0f216d2fca57d256a8063ae784f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d249d0f216d2fca57d256a8063ae784f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d249d0f216d2fca57d256a8063ae784f)) {
        Py_XDECREF(cache_frame_d249d0f216d2fca57d256a8063ae784f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d249d0f216d2fca57d256a8063ae784f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d249d0f216d2fca57d256a8063ae784f = MAKE_FUNCTION_FRAME(tstate, codeobj_d249d0f216d2fca57d256a8063ae784f, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d249d0f216d2fca57d256a8063ae784f->m_type_description == NULL);
    frame_d249d0f216d2fca57d256a8063ae784f = cache_frame_d249d0f216d2fca57d256a8063ae784f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d249d0f216d2fca57d256a8063ae784f);
    assert(Py_REFCNT(frame_d249d0f216d2fca57d256a8063ae784f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_item);
        tmp_called_instance_1 = par_item;
        frame_d249d0f216d2fca57d256a8063ae784f->m_frame.f_lineno = 207;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[76]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[80];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_d249d0f216d2fca57d256a8063ae784f->m_frame.f_lineno = 210;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[108]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_item);
        tmp_args_element_value_1 = par_item;
        frame_d249d0f216d2fca57d256a8063ae784f->m_frame.f_lineno = 211;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[109], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_d249d0f216d2fca57d256a8063ae784f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d249d0f216d2fca57d256a8063ae784f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d249d0f216d2fca57d256a8063ae784f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d249d0f216d2fca57d256a8063ae784f,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_d249d0f216d2fca57d256a8063ae784f == cache_frame_d249d0f216d2fca57d256a8063ae784f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d249d0f216d2fca57d256a8063ae784f);
        cache_frame_d249d0f216d2fca57d256a8063ae784f = NULL;
    }

    assertFrameObject(frame_d249d0f216d2fca57d256a8063ae784f);

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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *var_parentItem = NULL;
    struct Nuitka_FrameObject *frame_19aa8db09fff391c4bab4d240f75fa7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_19aa8db09fff391c4bab4d240f75fa7b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_19aa8db09fff391c4bab4d240f75fa7b)) {
        Py_XDECREF(cache_frame_19aa8db09fff391c4bab4d240f75fa7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19aa8db09fff391c4bab4d240f75fa7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19aa8db09fff391c4bab4d240f75fa7b = MAKE_FUNCTION_FRAME(tstate, codeobj_19aa8db09fff391c4bab4d240f75fa7b, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19aa8db09fff391c4bab4d240f75fa7b->m_type_description == NULL);
    frame_19aa8db09fff391c4bab4d240f75fa7b = cache_frame_19aa8db09fff391c4bab4d240f75fa7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_19aa8db09fff391c4bab4d240f75fa7b);
    assert(Py_REFCNT(frame_19aa8db09fff391c4bab4d240f75fa7b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_item);
        tmp_called_instance_1 = par_item;
        frame_19aa8db09fff391c4bab4d240f75fa7b->m_frame.f_lineno = 214;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[107]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parentItem == NULL);
        var_parentItem = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_parentItem);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_parentItem);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_19aa8db09fff391c4bab4d240f75fa7b->m_frame.f_lineno = 217;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[108]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[109]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parentItem);
        tmp_called_instance_3 = var_parentItem;
        frame_19aa8db09fff391c4bab4d240f75fa7b->m_frame.f_lineno = 218;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[107]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_19aa8db09fff391c4bab4d240f75fa7b->m_frame.f_lineno = 218;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_19aa8db09fff391c4bab4d240f75fa7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19aa8db09fff391c4bab4d240f75fa7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19aa8db09fff391c4bab4d240f75fa7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19aa8db09fff391c4bab4d240f75fa7b,
        type_description_1,
        par_self,
        par_item,
        var_parentItem
    );


    // Release cached frame if used for exception.
    if (frame_19aa8db09fff391c4bab4d240f75fa7b == cache_frame_19aa8db09fff391c4bab4d240f75fa7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19aa8db09fff391c4bab4d240f75fa7b);
        cache_frame_19aa8db09fff391c4bab4d240f75fa7b = NULL;
    }

    assertFrameObject(frame_19aa8db09fff391c4bab4d240f75fa7b);

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
    Py_XDECREF(var_parentItem);
    var_parentItem = NULL;
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

    Py_XDECREF(var_parentItem);
    var_parentItem = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a21c6bf955d7a22c518d4f0fa0b92c76;
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
    static struct Nuitka_FrameObject *cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76)) {
        Py_XDECREF(cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76 = MAKE_FUNCTION_FRAME(tstate, codeobj_a21c6bf955d7a22c518d4f0fa0b92c76, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_type_description == NULL);
    frame_a21c6bf955d7a22c518d4f0fa0b92c76 = cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a21c6bf955d7a22c518d4f0fa0b92c76);
    assert(Py_REFCNT(frame_a21c6bf955d7a22c518d4f0fa0b92c76) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_item);
        tmp_assattr_value_1 = par_item;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_item);
        tmp_cmp_expr_left_1 = par_item;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooo";
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
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 223;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[110]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_args_element_value_1 = par_item;
        CHECK_OBJECT(par_item);
        tmp_called_instance_2 = par_item;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 225;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_item);
        tmp_called_instance_3 = par_item;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 227;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[105]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 227;
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
            PyObject *old = var_child;
            var_child = tmp_assign_source_3;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_child);
        tmp_args_element_value_3 = var_child;
        if (par_item == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = par_item;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 228;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[47]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 227;
        type_description_1 = "ooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_item == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_item;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 230;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[94]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_item == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = par_item;
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 230;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[47]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a21c6bf955d7a22c518d4f0fa0b92c76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a21c6bf955d7a22c518d4f0fa0b92c76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a21c6bf955d7a22c518d4f0fa0b92c76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a21c6bf955d7a22c518d4f0fa0b92c76,
        type_description_1,
        par_self,
        par_item,
        var_child
    );


    // Release cached frame if used for exception.
    if (frame_a21c6bf955d7a22c518d4f0fa0b92c76 == cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76);
        cache_frame_a21c6bf955d7a22c518d4f0fa0b92c76 = NULL;
    }

    assertFrameObject(frame_a21c6bf955d7a22c518d4f0fa0b92c76);

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
    Py_XDECREF(var_child);
    var_child = NULL;
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

    Py_XDECREF(var_child);
    var_child = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__22_makeList(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1e19208acb7e94045d2557e7db35759d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e19208acb7e94045d2557e7db35759d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e19208acb7e94045d2557e7db35759d)) {
        Py_XDECREF(cache_frame_1e19208acb7e94045d2557e7db35759d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e19208acb7e94045d2557e7db35759d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e19208acb7e94045d2557e7db35759d = MAKE_FUNCTION_FRAME(tstate, codeobj_1e19208acb7e94045d2557e7db35759d, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e19208acb7e94045d2557e7db35759d->m_type_description == NULL);
    frame_1e19208acb7e94045d2557e7db35759d = cache_frame_1e19208acb7e94045d2557e7db35759d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e19208acb7e94045d2557e7db35759d);
    assert(Py_REFCNT(frame_1e19208acb7e94045d2557e7db35759d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Py_None;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e19208acb7e94045d2557e7db35759d->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[113]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e19208acb7e94045d2557e7db35759d->m_frame.f_lineno = 237;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = Py_None;
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e19208acb7e94045d2557e7db35759d->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[113]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e19208acb7e94045d2557e7db35759d->m_frame.f_lineno = 240;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_1e19208acb7e94045d2557e7db35759d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e19208acb7e94045d2557e7db35759d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e19208acb7e94045d2557e7db35759d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e19208acb7e94045d2557e7db35759d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1e19208acb7e94045d2557e7db35759d == cache_frame_1e19208acb7e94045d2557e7db35759d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e19208acb7e94045d2557e7db35759d);
        cache_frame_1e19208acb7e94045d2557e7db35759d = NULL;
    }

    assertFrameObject(frame_1e19208acb7e94045d2557e7db35759d);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__23_buildList(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parentItem = python_pars[1];
    PyObject *var_nodePath = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6e013711ad7b23107970297e176b4293;
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
    static struct Nuitka_FrameObject *cache_frame_6e013711ad7b23107970297e176b4293 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e013711ad7b23107970297e176b4293)) {
        Py_XDECREF(cache_frame_6e013711ad7b23107970297e176b4293);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e013711ad7b23107970297e176b4293 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e013711ad7b23107970297e176b4293 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e013711ad7b23107970297e176b4293, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e013711ad7b23107970297e176b4293->m_type_description == NULL);
    frame_6e013711ad7b23107970297e176b4293 = cache_frame_6e013711ad7b23107970297e176b4293;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e013711ad7b23107970297e176b4293);
    assert(Py_REFCNT(frame_6e013711ad7b23107970297e176b4293) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_parentItem);
        tmp_expression_value_1 = par_parentItem;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6e013711ad7b23107970297e176b4293->m_frame.f_lineno = 243;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[105]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
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
                exception_lineno = 243;
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
            PyObject *old = var_nodePath;
            var_nodePath = tmp_assign_source_3;
            Py_INCREF(var_nodePath);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_parentItem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_parentItem;
        CHECK_OBJECT(var_nodePath);
        tmp_args_element_value_2 = var_nodePath;
        frame_6e013711ad7b23107970297e176b4293->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (par_parentItem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_parentItem;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_3 = var_item;
        frame_6e013711ad7b23107970297e176b4293->m_frame.f_lineno = 245;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[116], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 246;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_4 = var_item;
        frame_6e013711ad7b23107970297e176b4293->m_frame.f_lineno = 246;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[113], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 243;
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e013711ad7b23107970297e176b4293, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e013711ad7b23107970297e176b4293->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e013711ad7b23107970297e176b4293, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e013711ad7b23107970297e176b4293,
        type_description_1,
        par_self,
        par_parentItem,
        var_nodePath,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_6e013711ad7b23107970297e176b4293 == cache_frame_6e013711ad7b23107970297e176b4293) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e013711ad7b23107970297e176b4293);
        cache_frame_6e013711ad7b23107970297e176b4293 = NULL;
    }

    assertFrameObject(frame_6e013711ad7b23107970297e176b4293);

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
    Py_XDECREF(var_nodePath);
    var_nodePath = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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

    Py_XDECREF(var_nodePath);
    var_nodePath = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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
    CHECK_OBJECT(par_parentItem);
    Py_DECREF(par_parentItem);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parentItem);
    Py_DECREF(par_parentItem);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__24_analyze(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1e869a8800a5d647ace1948b935b7973;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e869a8800a5d647ace1948b935b7973 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e869a8800a5d647ace1948b935b7973)) {
        Py_XDECREF(cache_frame_1e869a8800a5d647ace1948b935b7973);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e869a8800a5d647ace1948b935b7973 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e869a8800a5d647ace1948b935b7973 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e869a8800a5d647ace1948b935b7973, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e869a8800a5d647ace1948b935b7973->m_type_description == NULL);
    frame_1e869a8800a5d647ace1948b935b7973 = cache_frame_1e869a8800a5d647ace1948b935b7973;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e869a8800a5d647ace1948b935b7973);
    assert(Py_REFCNT(frame_1e869a8800a5d647ace1948b935b7973) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e869a8800a5d647ace1948b935b7973->m_frame.f_lineno = 249;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[117]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e869a8800a5d647ace1948b935b7973->m_frame.f_lineno = 250;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[117]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_1e869a8800a5d647ace1948b935b7973, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e869a8800a5d647ace1948b935b7973->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e869a8800a5d647ace1948b935b7973, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e869a8800a5d647ace1948b935b7973,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1e869a8800a5d647ace1948b935b7973 == cache_frame_1e869a8800a5d647ace1948b935b7973) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e869a8800a5d647ace1948b935b7973);
        cache_frame_1e869a8800a5d647ace1948b935b7973 = NULL;
    }

    assertFrameObject(frame_1e869a8800a5d647ace1948b935b7973);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__25_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_70d4ce538cc8e0fde4f7b584d2519689;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70d4ce538cc8e0fde4f7b584d2519689 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70d4ce538cc8e0fde4f7b584d2519689)) {
        Py_XDECREF(cache_frame_70d4ce538cc8e0fde4f7b584d2519689);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70d4ce538cc8e0fde4f7b584d2519689 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70d4ce538cc8e0fde4f7b584d2519689 = MAKE_FUNCTION_FRAME(tstate, codeobj_70d4ce538cc8e0fde4f7b584d2519689, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70d4ce538cc8e0fde4f7b584d2519689->m_type_description == NULL);
    frame_70d4ce538cc8e0fde4f7b584d2519689 = cache_frame_70d4ce538cc8e0fde4f7b584d2519689;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_70d4ce538cc8e0fde4f7b584d2519689);
    assert(Py_REFCNT(frame_70d4ce538cc8e0fde4f7b584d2519689) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_70d4ce538cc8e0fde4f7b584d2519689->m_frame.f_lineno = 253;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[118]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
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
        frame_70d4ce538cc8e0fde4f7b584d2519689->m_frame.f_lineno = 254;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[117]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
        frame_70d4ce538cc8e0fde4f7b584d2519689->m_frame.f_lineno = 256;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[108]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
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
        frame_70d4ce538cc8e0fde4f7b584d2519689->m_frame.f_lineno = 257;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[110]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_70d4ce538cc8e0fde4f7b584d2519689, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70d4ce538cc8e0fde4f7b584d2519689->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70d4ce538cc8e0fde4f7b584d2519689, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70d4ce538cc8e0fde4f7b584d2519689,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_70d4ce538cc8e0fde4f7b584d2519689 == cache_frame_70d4ce538cc8e0fde4f7b584d2519689) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70d4ce538cc8e0fde4f7b584d2519689);
        cache_frame_70d4ce538cc8e0fde4f7b584d2519689 = NULL;
    }

    assertFrameObject(frame_70d4ce538cc8e0fde4f7b584d2519689);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_nodePath = python_pars[2];
    struct Nuitka_FrameObject *frame_df299fb0bb57a7d94274b37a46e73e5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df299fb0bb57a7d94274b37a46e73e5a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_df299fb0bb57a7d94274b37a46e73e5a)) {
        Py_XDECREF(cache_frame_df299fb0bb57a7d94274b37a46e73e5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df299fb0bb57a7d94274b37a46e73e5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df299fb0bb57a7d94274b37a46e73e5a = MAKE_FUNCTION_FRAME(tstate, codeobj_df299fb0bb57a7d94274b37a46e73e5a, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df299fb0bb57a7d94274b37a46e73e5a->m_type_description == NULL);
    frame_df299fb0bb57a7d94274b37a46e73e5a = cache_frame_df299fb0bb57a7d94274b37a46e73e5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_df299fb0bb57a7d94274b37a46e73e5a);
    assert(Py_REFCNT(frame_df299fb0bb57a7d94274b37a46e73e5a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_parent);
        tmp_assattr_value_1 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[119], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_nodePath);
        tmp_assattr_value_2 = par_nodePath;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[120], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[121], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[122], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[123], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[124], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_parent);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_parent);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
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
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_parent);
        tmp_expression_value_1 = par_parent;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[126];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_1 = par_nodePath;
        frame_df299fb0bb57a7d94274b37a46e73e5a->m_frame.f_lineno = 274;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[125], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_2 = par_nodePath;
        frame_df299fb0bb57a7d94274b37a46e73e5a->m_frame.f_lineno = 276;
        tmp_assattr_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[75]);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[125], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df299fb0bb57a7d94274b37a46e73e5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df299fb0bb57a7d94274b37a46e73e5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df299fb0bb57a7d94274b37a46e73e5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df299fb0bb57a7d94274b37a46e73e5a,
        type_description_1,
        par_self,
        par_parent,
        par_nodePath
    );


    // Release cached frame if used for exception.
    if (frame_df299fb0bb57a7d94274b37a46e73e5a == cache_frame_df299fb0bb57a7d94274b37a46e73e5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df299fb0bb57a7d94274b37a46e73e5a);
        cache_frame_df299fb0bb57a7d94274b37a46e73e5a = NULL;
    }

    assertFrameObject(frame_df299fb0bb57a7d94274b37a46e73e5a);

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
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__27_getParent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5330a0e6c82941746c7350081b8d1de8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5330a0e6c82941746c7350081b8d1de8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5330a0e6c82941746c7350081b8d1de8)) {
        Py_XDECREF(cache_frame_5330a0e6c82941746c7350081b8d1de8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5330a0e6c82941746c7350081b8d1de8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5330a0e6c82941746c7350081b8d1de8 = MAKE_FUNCTION_FRAME(tstate, codeobj_5330a0e6c82941746c7350081b8d1de8, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5330a0e6c82941746c7350081b8d1de8->m_type_description == NULL);
    frame_5330a0e6c82941746c7350081b8d1de8 = cache_frame_5330a0e6c82941746c7350081b8d1de8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5330a0e6c82941746c7350081b8d1de8);
    assert(Py_REFCNT(frame_5330a0e6c82941746c7350081b8d1de8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[119]);
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
        exception_tb = MAKE_TRACEBACK(frame_5330a0e6c82941746c7350081b8d1de8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5330a0e6c82941746c7350081b8d1de8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5330a0e6c82941746c7350081b8d1de8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5330a0e6c82941746c7350081b8d1de8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5330a0e6c82941746c7350081b8d1de8 == cache_frame_5330a0e6c82941746c7350081b8d1de8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5330a0e6c82941746c7350081b8d1de8);
        cache_frame_5330a0e6c82941746c7350081b8d1de8 = NULL;
    }

    assertFrameObject(frame_5330a0e6c82941746c7350081b8d1de8);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__28_addChild(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_child = python_pars[1];
    struct Nuitka_FrameObject *frame_0da1ad3e7b629637710d7449a3807d1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0da1ad3e7b629637710d7449a3807d1b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0da1ad3e7b629637710d7449a3807d1b)) {
        Py_XDECREF(cache_frame_0da1ad3e7b629637710d7449a3807d1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0da1ad3e7b629637710d7449a3807d1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0da1ad3e7b629637710d7449a3807d1b = MAKE_FUNCTION_FRAME(tstate, codeobj_0da1ad3e7b629637710d7449a3807d1b, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0da1ad3e7b629637710d7449a3807d1b->m_type_description == NULL);
    frame_0da1ad3e7b629637710d7449a3807d1b = cache_frame_0da1ad3e7b629637710d7449a3807d1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0da1ad3e7b629637710d7449a3807d1b);
    assert(Py_REFCNT(frame_0da1ad3e7b629637710d7449a3807d1b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[120]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[93]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_child);
        tmp_args_element_value_1 = par_child;
        frame_0da1ad3e7b629637710d7449a3807d1b->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_0da1ad3e7b629637710d7449a3807d1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0da1ad3e7b629637710d7449a3807d1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0da1ad3e7b629637710d7449a3807d1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0da1ad3e7b629637710d7449a3807d1b,
        type_description_1,
        par_self,
        par_child
    );


    // Release cached frame if used for exception.
    if (frame_0da1ad3e7b629637710d7449a3807d1b == cache_frame_0da1ad3e7b629637710d7449a3807d1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0da1ad3e7b629637710d7449a3807d1b);
        cache_frame_0da1ad3e7b629637710d7449a3807d1b = NULL;
    }

    assertFrameObject(frame_0da1ad3e7b629637710d7449a3807d1b);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_child);
    Py_DECREF(par_child);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b57e112fa8fc3a66c97888f4486cc468;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b57e112fa8fc3a66c97888f4486cc468 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b57e112fa8fc3a66c97888f4486cc468)) {
        Py_XDECREF(cache_frame_b57e112fa8fc3a66c97888f4486cc468);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b57e112fa8fc3a66c97888f4486cc468 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b57e112fa8fc3a66c97888f4486cc468 = MAKE_FUNCTION_FRAME(tstate, codeobj_b57e112fa8fc3a66c97888f4486cc468, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b57e112fa8fc3a66c97888f4486cc468->m_type_description == NULL);
    frame_b57e112fa8fc3a66c97888f4486cc468 = cache_frame_b57e112fa8fc3a66c97888f4486cc468;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b57e112fa8fc3a66c97888f4486cc468);
    assert(Py_REFCNT(frame_b57e112fa8fc3a66c97888f4486cc468) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[120]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b57e112fa8fc3a66c97888f4486cc468->m_frame.f_lineno = 285;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_b57e112fa8fc3a66c97888f4486cc468, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b57e112fa8fc3a66c97888f4486cc468->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b57e112fa8fc3a66c97888f4486cc468, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b57e112fa8fc3a66c97888f4486cc468,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b57e112fa8fc3a66c97888f4486cc468 == cache_frame_b57e112fa8fc3a66c97888f4486cc468) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b57e112fa8fc3a66c97888f4486cc468);
        cache_frame_b57e112fa8fc3a66c97888f4486cc468 = NULL;
    }

    assertFrameObject(frame_b57e112fa8fc3a66c97888f4486cc468);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8f6be5e02ed1ec62f0e44e40fe81d7da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da)) {
        Py_XDECREF(cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da = MAKE_FUNCTION_FRAME(tstate, codeobj_8f6be5e02ed1ec62f0e44e40fe81d7da, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da->m_type_description == NULL);
    frame_8f6be5e02ed1ec62f0e44e40fe81d7da = cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8f6be5e02ed1ec62f0e44e40fe81d7da);
    assert(Py_REFCNT(frame_8f6be5e02ed1ec62f0e44e40fe81d7da) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[120]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
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
        exception_tb = MAKE_TRACEBACK(frame_8f6be5e02ed1ec62f0e44e40fe81d7da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f6be5e02ed1ec62f0e44e40fe81d7da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f6be5e02ed1ec62f0e44e40fe81d7da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f6be5e02ed1ec62f0e44e40fe81d7da,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8f6be5e02ed1ec62f0e44e40fe81d7da == cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da);
        cache_frame_8f6be5e02ed1ec62f0e44e40fe81d7da = NULL;
    }

    assertFrameObject(frame_8f6be5e02ed1ec62f0e44e40fe81d7da);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__31_getName(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0931d8e37147864748a27a2ce945b851;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0931d8e37147864748a27a2ce945b851 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0931d8e37147864748a27a2ce945b851)) {
        Py_XDECREF(cache_frame_0931d8e37147864748a27a2ce945b851);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0931d8e37147864748a27a2ce945b851 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0931d8e37147864748a27a2ce945b851 = MAKE_FUNCTION_FRAME(tstate, codeobj_0931d8e37147864748a27a2ce945b851, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0931d8e37147864748a27a2ce945b851->m_type_description == NULL);
    frame_0931d8e37147864748a27a2ce945b851 = cache_frame_0931d8e37147864748a27a2ce945b851;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0931d8e37147864748a27a2ce945b851);
    assert(Py_REFCNT(frame_0931d8e37147864748a27a2ce945b851) == 2);

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


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0931d8e37147864748a27a2ce945b851->m_frame.f_lineno = 291;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
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
        exception_tb = MAKE_TRACEBACK(frame_0931d8e37147864748a27a2ce945b851, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0931d8e37147864748a27a2ce945b851->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0931d8e37147864748a27a2ce945b851, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0931d8e37147864748a27a2ce945b851,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0931d8e37147864748a27a2ce945b851 == cache_frame_0931d8e37147864748a27a2ce945b851) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0931d8e37147864748a27a2ce945b851);
        cache_frame_0931d8e37147864748a27a2ce945b851 = NULL;
    }

    assertFrameObject(frame_0931d8e37147864748a27a2ce945b851);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c2643b0194e33ac0330b39022a7e3cfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2643b0194e33ac0330b39022a7e3cfa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2643b0194e33ac0330b39022a7e3cfa)) {
        Py_XDECREF(cache_frame_c2643b0194e33ac0330b39022a7e3cfa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2643b0194e33ac0330b39022a7e3cfa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2643b0194e33ac0330b39022a7e3cfa = MAKE_FUNCTION_FRAME(tstate, codeobj_c2643b0194e33ac0330b39022a7e3cfa, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2643b0194e33ac0330b39022a7e3cfa->m_type_description == NULL);
    frame_c2643b0194e33ac0330b39022a7e3cfa = cache_frame_c2643b0194e33ac0330b39022a7e3cfa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c2643b0194e33ac0330b39022a7e3cfa);
    assert(Py_REFCNT(frame_c2643b0194e33ac0330b39022a7e3cfa) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_c2643b0194e33ac0330b39022a7e3cfa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2643b0194e33ac0330b39022a7e3cfa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2643b0194e33ac0330b39022a7e3cfa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2643b0194e33ac0330b39022a7e3cfa,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c2643b0194e33ac0330b39022a7e3cfa == cache_frame_c2643b0194e33ac0330b39022a7e3cfa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2643b0194e33ac0330b39022a7e3cfa);
        cache_frame_c2643b0194e33ac0330b39022a7e3cfa = NULL;
    }

    assertFrameObject(frame_c2643b0194e33ac0330b39022a7e3cfa);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7707c10ff7b7f7665d11b164fe945c45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7707c10ff7b7f7665d11b164fe945c45 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7707c10ff7b7f7665d11b164fe945c45)) {
        Py_XDECREF(cache_frame_7707c10ff7b7f7665d11b164fe945c45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7707c10ff7b7f7665d11b164fe945c45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7707c10ff7b7f7665d11b164fe945c45 = MAKE_FUNCTION_FRAME(tstate, codeobj_7707c10ff7b7f7665d11b164fe945c45, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7707c10ff7b7f7665d11b164fe945c45->m_type_description == NULL);
    frame_7707c10ff7b7f7665d11b164fe945c45 = cache_frame_7707c10ff7b7f7665d11b164fe945c45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7707c10ff7b7f7665d11b164fe945c45);
    assert(Py_REFCNT(frame_7707c10ff7b7f7665d11b164fe945c45) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[121]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[122]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_7707c10ff7b7f7665d11b164fe945c45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7707c10ff7b7f7665d11b164fe945c45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7707c10ff7b7f7665d11b164fe945c45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7707c10ff7b7f7665d11b164fe945c45,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7707c10ff7b7f7665d11b164fe945c45 == cache_frame_7707c10ff7b7f7665d11b164fe945c45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7707c10ff7b7f7665d11b164fe945c45);
        cache_frame_7707c10ff7b7f7665d11b164fe945c45 = NULL;
    }

    assertFrameObject(frame_7707c10ff7b7f7665d11b164fe945c45);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_110cf4275eb00b7d5e109891bd9dcb33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_110cf4275eb00b7d5e109891bd9dcb33 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_110cf4275eb00b7d5e109891bd9dcb33)) {
        Py_XDECREF(cache_frame_110cf4275eb00b7d5e109891bd9dcb33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_110cf4275eb00b7d5e109891bd9dcb33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_110cf4275eb00b7d5e109891bd9dcb33 = MAKE_FUNCTION_FRAME(tstate, codeobj_110cf4275eb00b7d5e109891bd9dcb33, module_direct$tkwidgets$MemoryExplorer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_110cf4275eb00b7d5e109891bd9dcb33->m_type_description == NULL);
    frame_110cf4275eb00b7d5e109891bd9dcb33 = cache_frame_110cf4275eb00b7d5e109891bd9dcb33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_110cf4275eb00b7d5e109891bd9dcb33);
    assert(Py_REFCNT(frame_110cf4275eb00b7d5e109891bd9dcb33) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[121]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_110cf4275eb00b7d5e109891bd9dcb33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_110cf4275eb00b7d5e109891bd9dcb33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_110cf4275eb00b7d5e109891bd9dcb33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_110cf4275eb00b7d5e109891bd9dcb33,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_110cf4275eb00b7d5e109891bd9dcb33 == cache_frame_110cf4275eb00b7d5e109891bd9dcb33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_110cf4275eb00b7d5e109891bd9dcb33);
        cache_frame_110cf4275eb00b7d5e109891bd9dcb33 = NULL;
    }

    assertFrameObject(frame_110cf4275eb00b7d5e109891bd9dcb33);

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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__35_analyze(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_geomNode = NULL;
    PyObject *var_i = NULL;
    PyObject *var_geom = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c8237c476902ebbf4bb8e54076f710c8;
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
    static struct Nuitka_FrameObject *cache_frame_c8237c476902ebbf4bb8e54076f710c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8237c476902ebbf4bb8e54076f710c8)) {
        Py_XDECREF(cache_frame_c8237c476902ebbf4bb8e54076f710c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8237c476902ebbf4bb8e54076f710c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8237c476902ebbf4bb8e54076f710c8 = MAKE_FUNCTION_FRAME(tstate, codeobj_c8237c476902ebbf4bb8e54076f710c8, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8237c476902ebbf4bb8e54076f710c8->m_type_description == NULL);
    frame_c8237c476902ebbf4bb8e54076f710c8 = cache_frame_c8237c476902ebbf4bb8e54076f710c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c8237c476902ebbf4bb8e54076f710c8);
    assert(Py_REFCNT(frame_c8237c476902ebbf4bb8e54076f710c8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[122], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[123], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[124], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 309;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 311;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[129]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 311;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[130]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 312;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[129]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_geomNode == NULL);
        var_geomNode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_geomNode);
        tmp_called_instance_5 = var_geomNode;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 314;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[132]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 314;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 314;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_2;
        if (var_geomNode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[133]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = var_geomNode;
        CHECK_OBJECT(var_i);
        tmp_args_element_value_2 = var_i;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 315;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[134], tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_geom;
            var_geom = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 316;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_geom);
        tmp_args_element_value_3 = var_geom;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 316;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[135], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 317;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_geom);
        tmp_args_element_value_4 = var_geom;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 317;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[136], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 314;
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
    branch_no_1:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = par_self;
        frame_c8237c476902ebbf4bb8e54076f710c8->m_frame.f_lineno = 319;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[137]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8237c476902ebbf4bb8e54076f710c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8237c476902ebbf4bb8e54076f710c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8237c476902ebbf4bb8e54076f710c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8237c476902ebbf4bb8e54076f710c8,
        type_description_1,
        par_self,
        var_geomNode,
        var_i,
        var_geom
    );


    // Release cached frame if used for exception.
    if (frame_c8237c476902ebbf4bb8e54076f710c8 == cache_frame_c8237c476902ebbf4bb8e54076f710c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8237c476902ebbf4bb8e54076f710c8);
        cache_frame_c8237c476902ebbf4bb8e54076f710c8 = NULL;
    }

    assertFrameObject(frame_c8237c476902ebbf4bb8e54076f710c8);

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
    Py_XDECREF(var_geomNode);
    var_geomNode = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_geom);
    var_geom = NULL;
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

    Py_XDECREF(var_geomNode);
    var_geomNode = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_geom);
    var_geom = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_geom = python_pars[1];
    PyObject *var_vData = NULL;
    PyObject *var_j = NULL;
    PyObject *var_array = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_5f2cf60dc55b011b12ea07874a98463f;
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
    static struct Nuitka_FrameObject *cache_frame_5f2cf60dc55b011b12ea07874a98463f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f2cf60dc55b011b12ea07874a98463f)) {
        Py_XDECREF(cache_frame_5f2cf60dc55b011b12ea07874a98463f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f2cf60dc55b011b12ea07874a98463f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f2cf60dc55b011b12ea07874a98463f = MAKE_FUNCTION_FRAME(tstate, codeobj_5f2cf60dc55b011b12ea07874a98463f, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f2cf60dc55b011b12ea07874a98463f->m_type_description == NULL);
    frame_5f2cf60dc55b011b12ea07874a98463f = cache_frame_5f2cf60dc55b011b12ea07874a98463f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f2cf60dc55b011b12ea07874a98463f);
    assert(Py_REFCNT(frame_5f2cf60dc55b011b12ea07874a98463f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_geom);
        tmp_called_instance_1 = par_geom;
        frame_5f2cf60dc55b011b12ea07874a98463f->m_frame.f_lineno = 322;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[138]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vData == NULL);
        var_vData = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vData);
        tmp_called_instance_2 = var_vData;
        frame_5f2cf60dc55b011b12ea07874a98463f->m_frame.f_lineno = 323;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[139]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_5f2cf60dc55b011b12ea07874a98463f->m_frame.f_lineno = 323;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 323;
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
            PyObject *old = var_j;
            var_j = tmp_assign_source_4;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        if (var_vData == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_vData;
        CHECK_OBJECT(var_j);
        tmp_args_element_value_2 = var_j;
        frame_5f2cf60dc55b011b12ea07874a98463f->m_frame.f_lineno = 324;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[141], tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_array;
            var_array = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[121]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_array);
        tmp_called_instance_4 = var_array;
        frame_5f2cf60dc55b011b12ea07874a98463f->m_frame.f_lineno = 325;
        tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[142]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 323;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f2cf60dc55b011b12ea07874a98463f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f2cf60dc55b011b12ea07874a98463f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f2cf60dc55b011b12ea07874a98463f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f2cf60dc55b011b12ea07874a98463f,
        type_description_1,
        par_self,
        par_geom,
        var_vData,
        var_j,
        var_array
    );


    // Release cached frame if used for exception.
    if (frame_5f2cf60dc55b011b12ea07874a98463f == cache_frame_5f2cf60dc55b011b12ea07874a98463f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f2cf60dc55b011b12ea07874a98463f);
        cache_frame_5f2cf60dc55b011b12ea07874a98463f = NULL;
    }

    assertFrameObject(frame_5f2cf60dc55b011b12ea07874a98463f);

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
    Py_XDECREF(var_vData);
    var_vData = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_array);
    var_array = NULL;
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

    Py_XDECREF(var_vData);
    var_vData = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_array);
    var_array = NULL;
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
    CHECK_OBJECT(par_geom);
    Py_DECREF(par_geom);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_geom);
    Py_DECREF(par_geom);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_texCol = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tex = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_2ba8b7ff717483df17dc68711c79f056;
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
    static struct Nuitka_FrameObject *cache_frame_2ba8b7ff717483df17dc68711c79f056 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ba8b7ff717483df17dc68711c79f056)) {
        Py_XDECREF(cache_frame_2ba8b7ff717483df17dc68711c79f056);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ba8b7ff717483df17dc68711c79f056 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ba8b7ff717483df17dc68711c79f056 = MAKE_FUNCTION_FRAME(tstate, codeobj_2ba8b7ff717483df17dc68711c79f056, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ba8b7ff717483df17dc68711c79f056->m_type_description == NULL);
    frame_2ba8b7ff717483df17dc68711c79f056 = cache_frame_2ba8b7ff717483df17dc68711c79f056;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2ba8b7ff717483df17dc68711c79f056);
    assert(Py_REFCNT(frame_2ba8b7ff717483df17dc68711c79f056) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2ba8b7ff717483df17dc68711c79f056->m_frame.f_lineno = 328;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[143]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_texCol == NULL);
        var_texCol = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texCol);
        tmp_called_instance_2 = var_texCol;
        frame_2ba8b7ff717483df17dc68711c79f056->m_frame.f_lineno = 329;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[144]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2ba8b7ff717483df17dc68711c79f056->m_frame.f_lineno = 329;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 329;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        if (var_texCol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[145]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_texCol;
        CHECK_OBJECT(var_i);
        tmp_args_element_value_2 = var_i;
        frame_2ba8b7ff717483df17dc68711c79f056->m_frame.f_lineno = 330;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[146], tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_tex;
            var_tex = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[124]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_tex);
        tmp_called_instance_4 = var_tex;
        frame_2ba8b7ff717483df17dc68711c79f056->m_frame.f_lineno = 331;
        tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[147]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[124], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 329;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ba8b7ff717483df17dc68711c79f056, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ba8b7ff717483df17dc68711c79f056->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ba8b7ff717483df17dc68711c79f056, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ba8b7ff717483df17dc68711c79f056,
        type_description_1,
        par_self,
        var_texCol,
        var_i,
        var_tex
    );


    // Release cached frame if used for exception.
    if (frame_2ba8b7ff717483df17dc68711c79f056 == cache_frame_2ba8b7ff717483df17dc68711c79f056) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ba8b7ff717483df17dc68711c79f056);
        cache_frame_2ba8b7ff717483df17dc68711c79f056 = NULL;
    }

    assertFrameObject(frame_2ba8b7ff717483df17dc68711c79f056);

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
    Py_XDECREF(var_texCol);
    var_texCol = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
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

    Py_XDECREF(var_texCol);
    var_texCol = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_geom = python_pars[1];
    PyObject *var_k = NULL;
    PyObject *var_primitive = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_203ed2fb22c72894f4803b3967bc2387;
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
    static struct Nuitka_FrameObject *cache_frame_203ed2fb22c72894f4803b3967bc2387 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_203ed2fb22c72894f4803b3967bc2387)) {
        Py_XDECREF(cache_frame_203ed2fb22c72894f4803b3967bc2387);

#if _DEBUG_REFCOUNTS
        if (cache_frame_203ed2fb22c72894f4803b3967bc2387 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_203ed2fb22c72894f4803b3967bc2387 = MAKE_FUNCTION_FRAME(tstate, codeobj_203ed2fb22c72894f4803b3967bc2387, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_203ed2fb22c72894f4803b3967bc2387->m_type_description == NULL);
    frame_203ed2fb22c72894f4803b3967bc2387 = cache_frame_203ed2fb22c72894f4803b3967bc2387;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_203ed2fb22c72894f4803b3967bc2387);
    assert(Py_REFCNT(frame_203ed2fb22c72894f4803b3967bc2387) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_geom);
        tmp_called_instance_1 = par_geom;
        frame_203ed2fb22c72894f4803b3967bc2387->m_frame.f_lineno = 336;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[148]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_203ed2fb22c72894f4803b3967bc2387->m_frame.f_lineno = 336;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
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
                exception_lineno = 336;
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
            PyObject *old = var_k;
            var_k = tmp_assign_source_3;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (par_geom == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_geom;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_2 = var_k;
        frame_203ed2fb22c72894f4803b3967bc2387->m_frame.f_lineno = 337;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[150], tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_primitive;
            var_primitive = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[123]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_primitive);
        tmp_called_instance_3 = var_primitive;
        frame_203ed2fb22c72894f4803b3967bc2387->m_frame.f_lineno = 338;
        tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[151]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_6;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 336;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_203ed2fb22c72894f4803b3967bc2387, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_203ed2fb22c72894f4803b3967bc2387->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_203ed2fb22c72894f4803b3967bc2387, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_203ed2fb22c72894f4803b3967bc2387,
        type_description_1,
        par_self,
        par_geom,
        var_k,
        var_primitive
    );


    // Release cached frame if used for exception.
    if (frame_203ed2fb22c72894f4803b3967bc2387 == cache_frame_203ed2fb22c72894f4803b3967bc2387) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_203ed2fb22c72894f4803b3967bc2387);
        cache_frame_203ed2fb22c72894f4803b3967bc2387 = NULL;
    }

    assertFrameObject(frame_203ed2fb22c72894f4803b3967bc2387);

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
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_primitive);
    var_primitive = NULL;
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

    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_primitive);
    var_primitive = NULL;
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
    CHECK_OBJECT(par_geom);
    Py_DECREF(par_geom);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_geom);
    Py_DECREF(par_geom);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_83a79ab674b9fd7ef0d1bcf71feedcdf;
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
    static struct Nuitka_FrameObject *cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf)) {
        Py_XDECREF(cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf = MAKE_FUNCTION_FRAME(tstate, codeobj_83a79ab674b9fd7ef0d1bcf71feedcdf, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf->m_type_description == NULL);
    frame_83a79ab674b9fd7ef0d1bcf71feedcdf = cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_83a79ab674b9fd7ef0d1bcf71feedcdf);
    assert(Py_REFCNT(frame_83a79ab674b9fd7ef0d1bcf71feedcdf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[120]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
                exception_lineno = 341;
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
            PyObject *old = var_child;
            var_child = tmp_assign_source_3;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_child);
        tmp_called_instance_1 = var_child;
        frame_83a79ab674b9fd7ef0d1bcf71feedcdf->m_frame.f_lineno = 342;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[117]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 343;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[122]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_child);
        tmp_called_instance_2 = var_child;
        frame_83a79ab674b9fd7ef0d1bcf71feedcdf->m_frame.f_lineno = 343;
        tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 343;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[122], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[123]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_2__value;
            tmp_inplace_assign_2__value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_child);
        tmp_expression_value_4 = var_child;
        tmp_iadd_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[123]);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_2 = tmp_inplace_assign_2__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[123], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 341;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83a79ab674b9fd7ef0d1bcf71feedcdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83a79ab674b9fd7ef0d1bcf71feedcdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83a79ab674b9fd7ef0d1bcf71feedcdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83a79ab674b9fd7ef0d1bcf71feedcdf,
        type_description_1,
        par_self,
        var_child
    );


    // Release cached frame if used for exception.
    if (frame_83a79ab674b9fd7ef0d1bcf71feedcdf == cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf);
        cache_frame_83a79ab674b9fd7ef0d1bcf71feedcdf = NULL;
    }

    assertFrameObject(frame_83a79ab674b9fd7ef0d1bcf71feedcdf);

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
    Py_XDECREF(var_child);
    var_child = NULL;
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

    Py_XDECREF(var_child);
    var_child = NULL;
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


static PyObject *impl_direct$tkwidgets$MemoryExplorer$$$function__40_ls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_indent = python_pars[1];
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_300b82690ca4c4d31c20ffa6fc4091f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_300b82690ca4c4d31c20ffa6fc4091f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_300b82690ca4c4d31c20ffa6fc4091f4)) {
        Py_XDECREF(cache_frame_300b82690ca4c4d31c20ffa6fc4091f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_300b82690ca4c4d31c20ffa6fc4091f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_300b82690ca4c4d31c20ffa6fc4091f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_300b82690ca4c4d31c20ffa6fc4091f4, module_direct$tkwidgets$MemoryExplorer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_300b82690ca4c4d31c20ffa6fc4091f4->m_type_description == NULL);
    frame_300b82690ca4c4d31c20ffa6fc4091f4 = cache_frame_300b82690ca4c4d31c20ffa6fc4091f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_300b82690ca4c4d31c20ffa6fc4091f4);
    assert(Py_REFCNT(frame_300b82690ca4c4d31c20ffa6fc4091f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indent);
        tmp_add_expr_left_7 = par_indent;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 347;
        tmp_add_expr_right_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_6 = mod_consts[153];
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 347;
        tmp_add_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = mod_consts[153];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[123]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 347;
        tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[153];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[124]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 347;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 347;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        CHECK_OBJECT(par_indent);
        tmp_add_expr_left_8 = par_indent;
        tmp_add_expr_right_8 = mod_consts[153];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_indent;
            assert(old != NULL);
            par_indent = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[120]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 350;
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
            PyObject *old = var_child;
            var_child = tmp_assign_source_4;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_child);
        tmp_expression_value_6 = var_child;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[156]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_indent == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_indent;
        frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame.f_lineno = 351;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 350;
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_300b82690ca4c4d31c20ffa6fc4091f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_300b82690ca4c4d31c20ffa6fc4091f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_300b82690ca4c4d31c20ffa6fc4091f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_300b82690ca4c4d31c20ffa6fc4091f4,
        type_description_1,
        par_self,
        par_indent,
        var_child
    );


    // Release cached frame if used for exception.
    if (frame_300b82690ca4c4d31c20ffa6fc4091f4 == cache_frame_300b82690ca4c4d31c20ffa6fc4091f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_300b82690ca4c4d31c20ffa6fc4091f4);
        cache_frame_300b82690ca4c4d31c20ffa6fc4091f4 = NULL;
    }

    assertFrameObject(frame_300b82690ca4c4d31c20ffa6fc4091f4);

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
    Py_XDECREF(par_indent);
    par_indent = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
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

    Py_XDECREF(par_indent);
    par_indent = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
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



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_6ff5fe6f85a420f78e68d2c8fabc140b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_c272adc8047e6a87b49ba11984ff37f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_c3a5a49712b085e3ff572ed44fb21177,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_cc2edad7170a16e843827253fc70ad93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_be03b79f27d5f63f6fd79e019bc20996,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_1a35b7436b04360ed5f0473c13c9e8c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_c84899db0d009cc3cc21fdbdc2117cf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_27dd811dca3767cdcbdbf357ddb5e34a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_1b79ac02128be878faa45c55e4b45eb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__17_onSelfButtonLClick() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_dcca4224b63d86b847dcf67542e62d01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_f38d3bbd4c4a0e4f65436a269ad9e5c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_d249d0f216d2fca57d256a8063ae784f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__1___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_e20dcfbb75a509caf191e4cee54f88cd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_19aa8db09fff391c4bab4d240f75fa7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_a21c6bf955d7a22c518d4f0fa0b92c76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__22_makeList() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__22_makeList,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_1e19208acb7e94045d2557e7db35759d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__23_buildList() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__23_buildList,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_6e013711ad7b23107970297e176b4293,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__24_analyze() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__24_analyze,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_1e869a8800a5d647ace1948b935b7973,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__25_refresh() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__25_refresh,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_70d4ce538cc8e0fde4f7b584d2519689,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__26___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__26___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_df299fb0bb57a7d94274b37a46e73e5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__27_getParent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__27_getParent,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_5330a0e6c82941746c7350081b8d1de8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__28_addChild() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__28_addChild,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_0da1ad3e7b629637710d7449a3807d1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_b57e112fa8fc3a66c97888f4486cc468,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_5218b6c578cbb2100787fc88bc2a1bb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_8f6be5e02ed1ec62f0e44e40fe81d7da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__31_getName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__31_getName,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_0931d8e37147864748a27a2ce945b851,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_c2643b0194e33ac0330b39022a7e3cfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_7707c10ff7b7f7665d11b164fe945c45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_110cf4275eb00b7d5e109891bd9dcb33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__35_analyze() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__35_analyze,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_c8237c476902ebbf4bb8e54076f710c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_5f2cf60dc55b011b12ea07874a98463f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_2ba8b7ff717483df17dc68711c79f056,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_203ed2fb22c72894f4803b3967bc2387,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_83a79ab674b9fd7ef0d1bcf71feedcdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__3_createScale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__3_createScale,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_112e069701310163981ca5524ab45b67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__40_ls(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__40_ls,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_300b82690ca4c4d31c20ffa6fc4091f4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_fd8431b4d0fa95e1fc60f493d49d3ec9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_7891f938d4deefce20e41ce846943888,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_6cec17d3f67d300742e2d046202d3d76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_2e6fc4cf54d3d176bd0eb5abc946e359,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_d80d6309f4dd02cfbf407eb522a136a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_ed43be47da2942ddf055cb207357215b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$MemoryExplorer,
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

function_impl_code functable_direct$tkwidgets$MemoryExplorer[] = {
    impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__1_callbackL,
    impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton$$$function__2_callbackR,
    impl_direct$tkwidgets$MemoryExplorer$$$function__1___init__,
    impl_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame,
    impl_direct$tkwidgets$MemoryExplorer$$$function__3_createScale,
    impl_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT,
    impl_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls,
    impl_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle,
    impl_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls,
    impl_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton,
    impl_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl,
    impl_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl,
    impl_direct$tkwidgets$MemoryExplorer$$$function__11_addButton,
    impl_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel,
    impl_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth,
    impl_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate,
    impl_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth,
    impl_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth,
    NULL,
    impl_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick,
    impl_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick,
    impl_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick,
    impl_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls,
    impl_direct$tkwidgets$MemoryExplorer$$$function__22_makeList,
    impl_direct$tkwidgets$MemoryExplorer$$$function__23_buildList,
    impl_direct$tkwidgets$MemoryExplorer$$$function__24_analyze,
    impl_direct$tkwidgets$MemoryExplorer$$$function__25_refresh,
    impl_direct$tkwidgets$MemoryExplorer$$$function__26___init__,
    impl_direct$tkwidgets$MemoryExplorer$$$function__27_getParent,
    impl_direct$tkwidgets$MemoryExplorer$$$function__28_addChild,
    impl_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren,
    impl_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren,
    impl_direct$tkwidgets$MemoryExplorer$$$function__31_getName,
    impl_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName,
    impl_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes,
    impl_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes,
    impl_direct$tkwidgets$MemoryExplorer$$$function__35_analyze,
    impl_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes,
    impl_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes,
    impl_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces,
    impl_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren,
    impl_direct$tkwidgets$MemoryExplorer$$$function__40_ls,
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

    function_impl_code *current = functable_direct$tkwidgets$MemoryExplorer;
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

    if (offset > sizeof(functable_direct$tkwidgets$MemoryExplorer) || offset < 0) {
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
        functable_direct$tkwidgets$MemoryExplorer[offset],
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
        module_direct$tkwidgets$MemoryExplorer,
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
PyObject *modulecode_direct$tkwidgets$MemoryExplorer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.tkwidgets.MemoryExplorer");

    // Store the module for future use.
    module_direct$tkwidgets$MemoryExplorer = module;

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
        PRINT_STRING("direct.tkwidgets.MemoryExplorer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.tkwidgets.MemoryExplorer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$tkwidgets$MemoryExplorer\n");

    moduledict_direct$tkwidgets$MemoryExplorer = MODULE_DICT(module_direct$tkwidgets$MemoryExplorer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$tkwidgets$MemoryExplorer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$MemoryExplorer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[254]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$MemoryExplorer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$MemoryExplorer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$MemoryExplorer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$tkwidgets$MemoryExplorer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$tkwidgets$MemoryExplorer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_f5c823924083854efbaab28c1516d988;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1d44b1f9033ff0876c7c62430d5d7f31_2;
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
    PyObject *locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_2);
    }
    frame_f5c823924083854efbaab28c1516d988 = MAKE_MODULE_FRAME(codeobj_f5c823924083854efbaab28c1516d988, module_direct$tkwidgets$MemoryExplorer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f5c823924083854efbaab28c1516d988);
    assert(Py_REFCNT(frame_f5c823924083854efbaab28c1516d988) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[161], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[162], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[164];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[165];
        tmp_level_value_1 = mod_consts[80];
        frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer,
                mod_consts[166],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[167];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_fromlist_value_2 = mod_consts[168];
        tmp_level_value_2 = mod_consts[80];
        frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 2;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$MemoryExplorer, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[169];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_fromlist_value_3 = mod_consts[168];
        tmp_level_value_3 = mod_consts[27];
        frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 3;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$MemoryExplorer, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[2];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$MemoryExplorer;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[80];
        frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_7, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
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


            exception_lineno = 12;

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
        tmp_subscript_value_1 = mod_consts[80];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[171]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[171]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[172];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 12;
        tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[173]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[175];
        tmp_default_value_1 = mod_consts[176];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[175]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[177];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[178], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[179], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        frame_1d44b1f9033ff0876c7c62430d5d7f31_2 = MAKE_CLASS_FRAME(tstate, codeobj_1d44b1f9033ff0876c7c62430d5d7f31, module_direct$tkwidgets$MemoryExplorer, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1d44b1f9033ff0876c7c62430d5d7f31_2);
        assert(Py_REFCNT(frame_1d44b1f9033ff0876c7c62430d5d7f31_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[180];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__2_createScrolledFrame();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__3_createScale();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__4_createRefreshBT();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__5_createDefaultCtrls();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__6_setTitle();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__7_resetCtrls();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__8_getNewButton();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__9_addSelfCtrl();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__10_addChildCtrl();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__11_addButton();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__12_addLabel();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__13_getBTWidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__14_onScaleUpdate();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__15_updateBTWidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__16_updateDefaultBTWidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__17_onSelfButtonLClick();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__18_onSelfButtonRClick();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__19_onChildButtonLClick();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__20_onChildButtonRClick();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__21_addItemCtrls();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[109], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__22_makeList();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__23_buildList();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__24_analyze();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__25_refresh();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d44b1f9033ff0876c7c62430d5d7f31_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d44b1f9033ff0876c7c62430d5d7f31_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d44b1f9033ff0876c7c62430d5d7f31_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d44b1f9033ff0876c7c62430d5d7f31_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_1d44b1f9033ff0876c7c62430d5d7f31_2);

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


                exception_lineno = 12;

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
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[172];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 12;
            tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12);
        locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12 = NULL;
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

        Py_DECREF(locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12);
        locals_direct$tkwidgets$MemoryExplorer$$$class__1_MemoryExplorer_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[177];
        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[178], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[179], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__26___init__();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__27_getParent();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__28_addChild();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__29_getNumChildren();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__30_getChildren();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[105], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__31_getName();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__32_getPathName();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__33_getVertexBytes();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__34_getSelfVertexBytes();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__35_analyze();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__36_calcVertexBytes();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__37_calcTextureBytes();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__38_calcNumFaces();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__39_analyzeChildren();

        tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[221];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$MemoryExplorer$$$function__40_ls(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[112];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_f5c823924083854efbaab28c1516d988->m_frame.f_lineno = 261;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_17 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261);
        locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261 = NULL;
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

        Py_DECREF(locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261);
        locals_direct$tkwidgets$MemoryExplorer$$$class__2_MemoryExplorerItem_261 = NULL;
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
        exception_lineno = 261;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_17);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
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

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5c823924083854efbaab28c1516d988, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5c823924083854efbaab28c1516d988->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5c823924083854efbaab28c1516d988, exception_lineno);
    }



    assertFrameObject(frame_f5c823924083854efbaab28c1516d988);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.tkwidgets.MemoryExplorer", false);

    Py_INCREF(module_direct$tkwidgets$MemoryExplorer);
    return module_direct$tkwidgets$MemoryExplorer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$MemoryExplorer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$tkwidgets$MemoryExplorer", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
