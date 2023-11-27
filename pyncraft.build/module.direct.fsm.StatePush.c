/* Generated code for Python module 'direct.fsm.StatePush'
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

/* The "module_direct$fsm$StatePush" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$fsm$StatePush;
PyDictObject *moduledict_direct$fsm$StatePush;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[182];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.fsm.StatePush"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 182; i++) {
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
void checkModuleConstants_direct$fsm$StatePush(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 182; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_197534d1cbaf52c71ea9def4ba677e4b;
static PyCodeObject *codeobj_b540cce37c635a045048187bb355207a;
static PyCodeObject *codeobj_b024eccb2efbcb69a2a26464f0ec065b;
static PyCodeObject *codeobj_f240f2011be05da4f55717ee599a0e0c;
static PyCodeObject *codeobj_947c750eb67680faed92a1552fb7526a;
static PyCodeObject *codeobj_62aaeffa88020e7dd11c622cdac3787a;
static PyCodeObject *codeobj_7ec99f8147fa16a94f00531ffc165aec;
static PyCodeObject *codeobj_bea3602c2aa55979b7432f86a206e6dd;
static PyCodeObject *codeobj_e577b0005264986c0863727643c8efc5;
static PyCodeObject *codeobj_e176d812f58414a4f3117206739a4fd0;
static PyCodeObject *codeobj_6ed9d25463a9ff96b9a7b66db21a1f23;
static PyCodeObject *codeobj_873bb8d271c41887a6a6122ce33ef4f6;
static PyCodeObject *codeobj_e0e29e668a5c584c0de672de67966c28;
static PyCodeObject *codeobj_f4d759c9ea2333f915f6aae09fb8a4ec;
static PyCodeObject *codeobj_9ad00c82bf654d6347d13dc5bb846838;
static PyCodeObject *codeobj_cf7bccdc3ef65b5231d397e03e630872;
static PyCodeObject *codeobj_d6561ddbc5c9d199860469befa7ca4cb;
static PyCodeObject *codeobj_6982a38f8c3da32f269afa9e1012f467;
static PyCodeObject *codeobj_0405660b1b3f21da855794c0f160fec8;
static PyCodeObject *codeobj_7e01409383f2d47f3e3437d6890a2cfe;
static PyCodeObject *codeobj_3752b290e57c78fefe31d81fc70f639a;
static PyCodeObject *codeobj_bda353d81ab4fa6c2ab2ea45d10712c0;
static PyCodeObject *codeobj_a0976b4805c2b4df0cd27438ac202e3d;
static PyCodeObject *codeobj_21ca2070fefdc9f6025a307ca3ec36e0;
static PyCodeObject *codeobj_3e2161f84aa7c223178c2713532e3218;
static PyCodeObject *codeobj_723d0f3f0247c24af2274186ecffb7c1;
static PyCodeObject *codeobj_51c3fbfd955649dc6f4cd34ee72e6a53;
static PyCodeObject *codeobj_3dd09eb908a37876303dff0c917d5098;
static PyCodeObject *codeobj_ea766a03d654f7f72fa39f86b9656800;
static PyCodeObject *codeobj_e205066aee9324be155a5d348ddd16d7;
static PyCodeObject *codeobj_ee1f852220b6f6036ad59a403a783fc6;
static PyCodeObject *codeobj_f72924752796edb266725a6350dc3bba;
static PyCodeObject *codeobj_0db193aafb92c6785ab15ef10c3af368;
static PyCodeObject *codeobj_25c3ebbd8725fd7283bfc69a97dfcd11;
static PyCodeObject *codeobj_1ff34590802cdcf532a491794678082a;
static PyCodeObject *codeobj_4b95b4cf731c84fa1179f912399fb23c;
static PyCodeObject *codeobj_6f4b64ee5825c424562dc063cffbda37;
static PyCodeObject *codeobj_2c34916705f9505543d3f24ab81e6f1f;
static PyCodeObject *codeobj_e49a24fc1f1793741f7e3576e2d1cc91;
static PyCodeObject *codeobj_a2c2c1e22be5bfc3d72d388be893b458;
static PyCodeObject *codeobj_47a97a74c74c677794ce06ecd7b72d77;
static PyCodeObject *codeobj_f4925df8ea877f1ba053d6d7be03c2c4;
static PyCodeObject *codeobj_4666dcb202c9ee7d35e6d654c44389a9;
static PyCodeObject *codeobj_91c1cc6e17ecffc7a38ef49319947a20;
static PyCodeObject *codeobj_ec4c8050aeffa4f8bbbed0b844b11310;
static PyCodeObject *codeobj_f26f7b043664d0a2e953d5a22961e671;
static PyCodeObject *codeobj_1d4ea9032af4cdc22c1385b9c711bb0b;
static PyCodeObject *codeobj_68e6162aab34054e959ec53b2bc95677;
static PyCodeObject *codeobj_f0645304f4a014e5f6a3f058748a3b2d;
static PyCodeObject *codeobj_6da79eb2cbc4b8657fd75d7060e06ebd;
static PyCodeObject *codeobj_1ac8064d3bb3c3a7b6bb645b79bd24ac;
static PyCodeObject *codeobj_257b377dacd7abd22e6b3af2725a768e;
static PyCodeObject *codeobj_b8408c705f4056593d3f4c4abca7e204;
static PyCodeObject *codeobj_a739fdac7b965ee1bd363d1095f39aad;
static PyCodeObject *codeobj_bc36b17eebf4b4983ef1e4f658ec1cbd;
static PyCodeObject *codeobj_9dfaa7b3e2d46d021217240dce5b0328;
static PyCodeObject *codeobj_fbd7a214a792696c34df5aef78c12b6f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[161]); CHECK_OBJECT(module_filename_obj);
    codeobj_197534d1cbaf52c71ea9def4ba677e4b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[162], mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_b540cce37c635a045048187bb355207a = MAKE_CODE_OBJECT(module_filename_obj, 399, 0, mod_consts[151], mod_consts[151], mod_consts[163], NULL, 0, 0, 0);
    codeobj_b024eccb2efbcb69a2a26464f0ec065b = MAKE_CODE_OBJECT(module_filename_obj, 294, 0, mod_consts[131], mod_consts[131], mod_consts[163], NULL, 0, 0, 0);
    codeobj_f240f2011be05da4f55717ee599a0e0c = MAKE_CODE_OBJECT(module_filename_obj, 384, 0, mod_consts[147], mod_consts[147], mod_consts[163], NULL, 0, 0, 0);
    codeobj_947c750eb67680faed92a1552fb7526a = MAKE_CODE_OBJECT(module_filename_obj, 374, 0, mod_consts[144], mod_consts[144], mod_consts[163], NULL, 0, 0, 0);
    codeobj_62aaeffa88020e7dd11c622cdac3787a = MAKE_CODE_OBJECT(module_filename_obj, 192, 0, mod_consts[117], mod_consts[117], mod_consts[163], NULL, 0, 0, 0);
    codeobj_7ec99f8147fa16a94f00531ffc165aec = MAKE_CODE_OBJECT(module_filename_obj, 345, 0, mod_consts[43], mod_consts[43], mod_consts[163], NULL, 0, 0, 0);
    codeobj_bea3602c2aa55979b7432f86a206e6dd = MAKE_CODE_OBJECT(module_filename_obj, 108, 0, mod_consts[38], mod_consts[38], mod_consts[163], NULL, 0, 0, 0);
    codeobj_e577b0005264986c0863727643c8efc5 = MAKE_CODE_OBJECT(module_filename_obj, 91, 0, mod_consts[86], mod_consts[86], mod_consts[163], NULL, 0, 0, 0);
    codeobj_e176d812f58414a4f3117206739a4fd0 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[164], NULL, 1, 0, 0);
    codeobj_6ed9d25463a9ff96b9a7b66db21a1f23 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[164], NULL, 1, 0, 0);
    codeobj_873bb8d271c41887a6a6122ce33ef4f6 = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[165], NULL, 2, 0, 0);
    codeobj_e0e29e668a5c584c0de672de67966c28 = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[166], NULL, 3, 0, 0);
    codeobj_f4d759c9ea2333f915f6aae09fb8a4ec = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[19], mod_consts[19], mod_consts[167], NULL, 2, 0, 0);
    codeobj_9ad00c82bf654d6347d13dc5bb846838 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[168], NULL, 2, 0, 0);
    codeobj_cf7bccdc3ef65b5231d397e03e630872 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[168], NULL, 2, 0, 0);
    codeobj_d6561ddbc5c9d199860469befa7ca4cb = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[169], NULL, 4, 0, 0);
    codeobj_6982a38f8c3da32f269afa9e1012f467 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[170], NULL, 4, 0, 0);
    codeobj_0405660b1b3f21da855794c0f160fec8 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[171], NULL, 2, 0, 0);
    codeobj_7e01409383f2d47f3e3437d6890a2cfe = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[172], NULL, 2, 0, 0);
    codeobj_3752b290e57c78fefe31d81fc70f639a = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[20], mod_consts[164], NULL, 1, 0, 0);
    codeobj_bda353d81ab4fa6c2ab2ea45d10712c0 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[48], mod_consts[48], mod_consts[173], NULL, 1, 0, 0);
    codeobj_a0976b4805c2b4df0cd27438ac202e3d = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[171], NULL, 2, 0, 0);
    codeobj_21ca2070fefdc9f6025a307ca3ec36e0 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[174], NULL, 2, 0, 0);
    codeobj_3e2161f84aa7c223178c2713532e3218 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[164], NULL, 1, 0, 0);
    codeobj_723d0f3f0247c24af2274186ecffb7c1 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[164], NULL, 1, 0, 0);
    codeobj_51c3fbfd955649dc6f4cd34ee72e6a53 = MAKE_CODE_OBJECT(module_filename_obj, 406, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[164], NULL, 1, 0, 0);
    codeobj_3dd09eb908a37876303dff0c917d5098 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[172], NULL, 1, 0, 0);
    codeobj_ea766a03d654f7f72fa39f86b9656800 = MAKE_CODE_OBJECT(module_filename_obj, 179, 0, mod_consts[25], mod_consts[25], mod_consts[175], NULL, 3, 0, 0);
    codeobj_e205066aee9324be155a5d348ddd16d7 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], mod_consts[175], NULL, 3, 0, 0);
    codeobj_ee1f852220b6f6036ad59a403a783fc6 = MAKE_CODE_OBJECT(module_filename_obj, 83, 0, mod_consts[6], mod_consts[6], mod_consts[168], NULL, 2, 0, 0);
    codeobj_f72924752796edb266725a6350dc3bba = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[168], NULL, 2, 0, 0);
    codeobj_0db193aafb92c6785ab15ef10c3af368 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[168], NULL, 2, 0, 0);
    codeobj_25c3ebbd8725fd7283bfc69a97dfcd11 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[172], NULL, 2, 0, 0);
    codeobj_1ff34590802cdcf532a491794678082a = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[168], NULL, 2, 0, 0);
    codeobj_4b95b4cf731c84fa1179f912399fb23c = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[176], NULL, 3, 0, 0);
    codeobj_6f4b64ee5825c424562dc063cffbda37 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[12], mod_consts[164], NULL, 1, 0, 0);
    codeobj_2c34916705f9505543d3f24ab81e6f1f = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[12], mod_consts[175], NULL, 2, 0, 0);
    codeobj_e49a24fc1f1793741f7e3576e2d1cc91 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_a2c2c1e22be5bfc3d72d388be893b458 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_47a97a74c74c677794ce06ecd7b72d77 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_f4925df8ea877f1ba053d6d7be03c2c4 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_4666dcb202c9ee7d35e6d654c44389a9 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_91c1cc6e17ecffc7a38ef49319947a20 = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_ec4c8050aeffa4f8bbbed0b844b11310 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[164], NULL, 1, 0, 0);
    codeobj_f26f7b043664d0a2e953d5a22961e671 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[177], NULL, 1, 0, 0);
    codeobj_1d4ea9032af4cdc22c1385b9c711bb0b = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], mod_consts[178], NULL, 1, 0, 0);
    codeobj_68e6162aab34054e959ec53b2bc95677 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[178], NULL, 1, 0, 0);
    codeobj_f0645304f4a014e5f6a3f058748a3b2d = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[164], NULL, 1, 0, 0);
    codeobj_6da79eb2cbc4b8657fd75d7060e06ebd = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[164], NULL, 1, 0, 0);
    codeobj_1ac8064d3bb3c3a7b6bb645b79bd24ac = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[164], NULL, 1, 0, 0);
    codeobj_257b377dacd7abd22e6b3af2725a768e = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], mod_consts[179], NULL, 4, 0, 0);
    codeobj_b8408c705f4056593d3f4c4abca7e204 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], mod_consts[180], NULL, 2, 0, 0);
    codeobj_a739fdac7b965ee1bd363d1095f39aad = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], mod_consts[180], NULL, 2, 0, 0);
    codeobj_bc36b17eebf4b4983ef1e4f658ec1cbd = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[164], NULL, 1, 0, 0);
    codeobj_9dfaa7b3e2d46d021217240dce5b0328 = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[164], NULL, 1, 0, 0);
    codeobj_fbd7a214a792696c34df5aef78c12b6f = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[171], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__10__finishInit();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__11_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__12__subscribeTo();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__13__unsubscribe();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__14__recvStatePush();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__15_set();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__16_get();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__17___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__18_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__19__recvStatePush();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__1___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__20___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__21_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__22__subscribeTo();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__23__unsubscribe();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__24__recvStatePush();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__25__recvMultiStatePush();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__26___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__27_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__28_getState();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__29__recvMultiStatePush();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__2_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__30__handleStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__31_handler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__32_handler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__33___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__34_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__35__handlePotentialStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__36__handleStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__37_enter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__38_exit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__39___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__3_getState();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__40_sendPulse();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__41_handler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__42___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__43_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__44___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__45_destroy();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__46__handleEvent();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__47___init__();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__48__handleStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__4_pushCurrentState();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__5__addSubscription();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__6__removeSubscription();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__7__handlePotentialStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__8__handleStateChange();


static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__9___init__();


// The module function definitions.
static PyObject *impl_direct$fsm$StatePush$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0405660b1b3f21da855794c0f160fec8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0405660b1b3f21da855794c0f160fec8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0405660b1b3f21da855794c0f160fec8)) {
        Py_XDECREF(cache_frame_0405660b1b3f21da855794c0f160fec8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0405660b1b3f21da855794c0f160fec8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0405660b1b3f21da855794c0f160fec8 = MAKE_FUNCTION_FRAME(tstate, codeobj_0405660b1b3f21da855794c0f160fec8, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0405660b1b3f21da855794c0f160fec8->m_type_description == NULL);
    frame_0405660b1b3f21da855794c0f160fec8 = cache_frame_0405660b1b3f21da855794c0f160fec8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0405660b1b3f21da855794c0f160fec8);
    assert(Py_REFCNT(frame_0405660b1b3f21da855794c0f160fec8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = PySet_New(NULL);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0405660b1b3f21da855794c0f160fec8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0405660b1b3f21da855794c0f160fec8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0405660b1b3f21da855794c0f160fec8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0405660b1b3f21da855794c0f160fec8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0405660b1b3f21da855794c0f160fec8 == cache_frame_0405660b1b3f21da855794c0f160fec8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0405660b1b3f21da855794c0f160fec8);
        cache_frame_0405660b1b3f21da855794c0f160fec8 = NULL;
    }

    assertFrameObject(frame_0405660b1b3f21da855794c0f160fec8);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__2_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e49a24fc1f1793741f7e3576e2d1cc91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e49a24fc1f1793741f7e3576e2d1cc91 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e49a24fc1f1793741f7e3576e2d1cc91)) {
        Py_XDECREF(cache_frame_e49a24fc1f1793741f7e3576e2d1cc91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e49a24fc1f1793741f7e3576e2d1cc91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e49a24fc1f1793741f7e3576e2d1cc91 = MAKE_FUNCTION_FRAME(tstate, codeobj_e49a24fc1f1793741f7e3576e2d1cc91, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e49a24fc1f1793741f7e3576e2d1cc91->m_type_description == NULL);
    frame_e49a24fc1f1793741f7e3576e2d1cc91 = cache_frame_e49a24fc1f1793741f7e3576e2d1cc91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e49a24fc1f1793741f7e3576e2d1cc91);
    assert(Py_REFCNT(frame_e49a24fc1f1793741f7e3576e2d1cc91) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_mod_expr_left_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e49a24fc1f1793741f7e3576e2d1cc91->m_frame.f_lineno = 19;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 19;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[1]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_2;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_2 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts[0]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e49a24fc1f1793741f7e3576e2d1cc91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e49a24fc1f1793741f7e3576e2d1cc91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e49a24fc1f1793741f7e3576e2d1cc91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e49a24fc1f1793741f7e3576e2d1cc91,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e49a24fc1f1793741f7e3576e2d1cc91 == cache_frame_e49a24fc1f1793741f7e3576e2d1cc91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e49a24fc1f1793741f7e3576e2d1cc91);
        cache_frame_e49a24fc1f1793741f7e3576e2d1cc91 = NULL;
    }

    assertFrameObject(frame_e49a24fc1f1793741f7e3576e2d1cc91);

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


static PyObject *impl_direct$fsm$StatePush$$$function__3_getState(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6da79eb2cbc4b8657fd75d7060e06ebd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd)) {
        Py_XDECREF(cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd = MAKE_FUNCTION_FRAME(tstate, codeobj_6da79eb2cbc4b8657fd75d7060e06ebd, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd->m_type_description == NULL);
    frame_6da79eb2cbc4b8657fd75d7060e06ebd = cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6da79eb2cbc4b8657fd75d7060e06ebd);
    assert(Py_REFCNT(frame_6da79eb2cbc4b8657fd75d7060e06ebd) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
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
        exception_tb = MAKE_TRACEBACK(frame_6da79eb2cbc4b8657fd75d7060e06ebd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6da79eb2cbc4b8657fd75d7060e06ebd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6da79eb2cbc4b8657fd75d7060e06ebd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6da79eb2cbc4b8657fd75d7060e06ebd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6da79eb2cbc4b8657fd75d7060e06ebd == cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd);
        cache_frame_6da79eb2cbc4b8657fd75d7060e06ebd = NULL;
    }

    assertFrameObject(frame_6da79eb2cbc4b8657fd75d7060e06ebd);

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


static PyObject *impl_direct$fsm$StatePush$$$function__4_pushCurrentState(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bc36b17eebf4b4983ef1e4f658ec1cbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd)) {
        Py_XDECREF(cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd = MAKE_FUNCTION_FRAME(tstate, codeobj_bc36b17eebf4b4983ef1e4f658ec1cbd, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd->m_type_description == NULL);
    frame_bc36b17eebf4b4983ef1e4f658ec1cbd = cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bc36b17eebf4b4983ef1e4f658ec1cbd);
    assert(Py_REFCNT(frame_bc36b17eebf4b4983ef1e4f658ec1cbd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bc36b17eebf4b4983ef1e4f658ec1cbd->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_bc36b17eebf4b4983ef1e4f658ec1cbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc36b17eebf4b4983ef1e4f658ec1cbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc36b17eebf4b4983ef1e4f658ec1cbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc36b17eebf4b4983ef1e4f658ec1cbd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bc36b17eebf4b4983ef1e4f658ec1cbd == cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd);
        cache_frame_bc36b17eebf4b4983ef1e4f658ec1cbd = NULL;
    }

    assertFrameObject(frame_bc36b17eebf4b4983ef1e4f658ec1cbd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_direct$fsm$StatePush$$$function__5__addSubscription(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_subscriber = python_pars[1];
    struct Nuitka_FrameObject *frame_7e01409383f2d47f3e3437d6890a2cfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e01409383f2d47f3e3437d6890a2cfe = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e01409383f2d47f3e3437d6890a2cfe)) {
        Py_XDECREF(cache_frame_7e01409383f2d47f3e3437d6890a2cfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e01409383f2d47f3e3437d6890a2cfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e01409383f2d47f3e3437d6890a2cfe = MAKE_FUNCTION_FRAME(tstate, codeobj_7e01409383f2d47f3e3437d6890a2cfe, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e01409383f2d47f3e3437d6890a2cfe->m_type_description == NULL);
    frame_7e01409383f2d47f3e3437d6890a2cfe = cache_frame_7e01409383f2d47f3e3437d6890a2cfe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7e01409383f2d47f3e3437d6890a2cfe);
    assert(Py_REFCNT(frame_7e01409383f2d47f3e3437d6890a2cfe) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_subscriber);
        tmp_args_element_value_1 = par_subscriber;
        frame_7e01409383f2d47f3e3437d6890a2cfe->m_frame.f_lineno = 32;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_subscriber);
        tmp_called_instance_2 = par_subscriber;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_7e01409383f2d47f3e3437d6890a2cfe->m_frame.f_lineno = 33;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_7e01409383f2d47f3e3437d6890a2cfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e01409383f2d47f3e3437d6890a2cfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e01409383f2d47f3e3437d6890a2cfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e01409383f2d47f3e3437d6890a2cfe,
        type_description_1,
        par_self,
        par_subscriber
    );


    // Release cached frame if used for exception.
    if (frame_7e01409383f2d47f3e3437d6890a2cfe == cache_frame_7e01409383f2d47f3e3437d6890a2cfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e01409383f2d47f3e3437d6890a2cfe);
        cache_frame_7e01409383f2d47f3e3437d6890a2cfe = NULL;
    }

    assertFrameObject(frame_7e01409383f2d47f3e3437d6890a2cfe);

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
    CHECK_OBJECT(par_subscriber);
    Py_DECREF(par_subscriber);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_subscriber);
    Py_DECREF(par_subscriber);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__6__removeSubscription(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_subscriber = python_pars[1];
    struct Nuitka_FrameObject *frame_25c3ebbd8725fd7283bfc69a97dfcd11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11)) {
        Py_XDECREF(cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11 = MAKE_FUNCTION_FRAME(tstate, codeobj_25c3ebbd8725fd7283bfc69a97dfcd11, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11->m_type_description == NULL);
    frame_25c3ebbd8725fd7283bfc69a97dfcd11 = cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_25c3ebbd8725fd7283bfc69a97dfcd11);
    assert(Py_REFCNT(frame_25c3ebbd8725fd7283bfc69a97dfcd11) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_subscriber);
        tmp_args_element_value_1 = par_subscriber;
        frame_25c3ebbd8725fd7283bfc69a97dfcd11->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_25c3ebbd8725fd7283bfc69a97dfcd11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25c3ebbd8725fd7283bfc69a97dfcd11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25c3ebbd8725fd7283bfc69a97dfcd11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25c3ebbd8725fd7283bfc69a97dfcd11,
        type_description_1,
        par_self,
        par_subscriber
    );


    // Release cached frame if used for exception.
    if (frame_25c3ebbd8725fd7283bfc69a97dfcd11 == cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11);
        cache_frame_25c3ebbd8725fd7283bfc69a97dfcd11 = NULL;
    }

    assertFrameObject(frame_25c3ebbd8725fd7283bfc69a97dfcd11);

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
    CHECK_OBJECT(par_subscriber);
    Py_DECREF(par_subscriber);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_subscriber);
    Py_DECREF(par_subscriber);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__7__handlePotentialStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_oldValue = NULL;
    struct Nuitka_FrameObject *frame_21ca2070fefdc9f6025a307ca3ec36e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_21ca2070fefdc9f6025a307ca3ec36e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21ca2070fefdc9f6025a307ca3ec36e0)) {
        Py_XDECREF(cache_frame_21ca2070fefdc9f6025a307ca3ec36e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21ca2070fefdc9f6025a307ca3ec36e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21ca2070fefdc9f6025a307ca3ec36e0 = MAKE_FUNCTION_FRAME(tstate, codeobj_21ca2070fefdc9f6025a307ca3ec36e0, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21ca2070fefdc9f6025a307ca3ec36e0->m_type_description == NULL);
    frame_21ca2070fefdc9f6025a307ca3ec36e0 = cache_frame_21ca2070fefdc9f6025a307ca3ec36e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_21ca2070fefdc9f6025a307ca3ec36e0);
    assert(Py_REFCNT(frame_21ca2070fefdc9f6025a307ca3ec36e0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldValue == NULL);
        var_oldValue = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_oldValue);
        tmp_cmp_expr_left_1 = var_oldValue;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_1 = par_value;
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
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
        frame_21ca2070fefdc9f6025a307ca3ec36e0->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_21ca2070fefdc9f6025a307ca3ec36e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21ca2070fefdc9f6025a307ca3ec36e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21ca2070fefdc9f6025a307ca3ec36e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21ca2070fefdc9f6025a307ca3ec36e0,
        type_description_1,
        par_self,
        par_value,
        var_oldValue
    );


    // Release cached frame if used for exception.
    if (frame_21ca2070fefdc9f6025a307ca3ec36e0 == cache_frame_21ca2070fefdc9f6025a307ca3ec36e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21ca2070fefdc9f6025a307ca3ec36e0);
        cache_frame_21ca2070fefdc9f6025a307ca3ec36e0 = NULL;
    }

    assertFrameObject(frame_21ca2070fefdc9f6025a307ca3ec36e0);

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
    CHECK_OBJECT(var_oldValue);
    Py_DECREF(var_oldValue);
    var_oldValue = NULL;
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

    Py_XDECREF(var_oldValue);
    var_oldValue = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__8__handleStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_subscriber = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3dd09eb908a37876303dff0c917d5098;
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
    static struct Nuitka_FrameObject *cache_frame_3dd09eb908a37876303dff0c917d5098 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3dd09eb908a37876303dff0c917d5098)) {
        Py_XDECREF(cache_frame_3dd09eb908a37876303dff0c917d5098);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3dd09eb908a37876303dff0c917d5098 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3dd09eb908a37876303dff0c917d5098 = MAKE_FUNCTION_FRAME(tstate, codeobj_3dd09eb908a37876303dff0c917d5098, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3dd09eb908a37876303dff0c917d5098->m_type_description == NULL);
    frame_3dd09eb908a37876303dff0c917d5098 = cache_frame_3dd09eb908a37876303dff0c917d5098;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3dd09eb908a37876303dff0c917d5098);
    assert(Py_REFCNT(frame_3dd09eb908a37876303dff0c917d5098) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
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
                exception_lineno = 46;
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
            PyObject *old = var_subscriber;
            var_subscriber = tmp_assign_source_3;
            Py_INCREF(var_subscriber);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_subscriber);
        tmp_expression_value_2 = var_subscriber;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_self;
        frame_3dd09eb908a37876303dff0c917d5098->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3dd09eb908a37876303dff0c917d5098, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3dd09eb908a37876303dff0c917d5098->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3dd09eb908a37876303dff0c917d5098, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3dd09eb908a37876303dff0c917d5098,
        type_description_1,
        par_self,
        var_subscriber
    );


    // Release cached frame if used for exception.
    if (frame_3dd09eb908a37876303dff0c917d5098 == cache_frame_3dd09eb908a37876303dff0c917d5098) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3dd09eb908a37876303dff0c917d5098);
        cache_frame_3dd09eb908a37876303dff0c917d5098 = NULL;
    }

    assertFrameObject(frame_3dd09eb908a37876303dff0c917d5098);

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
    Py_XDECREF(var_subscriber);
    var_subscriber = NULL;
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

    Py_XDECREF(var_subscriber);
    var_subscriber = NULL;
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


static PyObject *impl_direct$fsm$StatePush$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    struct Nuitka_FrameObject *frame_9ad00c82bf654d6347d13dc5bb846838;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ad00c82bf654d6347d13dc5bb846838 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ad00c82bf654d6347d13dc5bb846838)) {
        Py_XDECREF(cache_frame_9ad00c82bf654d6347d13dc5bb846838);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ad00c82bf654d6347d13dc5bb846838 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ad00c82bf654d6347d13dc5bb846838 = MAKE_FUNCTION_FRAME(tstate, codeobj_9ad00c82bf654d6347d13dc5bb846838, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ad00c82bf654d6347d13dc5bb846838->m_type_description == NULL);
    frame_9ad00c82bf654d6347d13dc5bb846838 = cache_frame_9ad00c82bf654d6347d13dc5bb846838;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ad00c82bf654d6347d13dc5bb846838);
    assert(Py_REFCNT(frame_9ad00c82bf654d6347d13dc5bb846838) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_source);
        tmp_assattr_value_2 = par_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ad00c82bf654d6347d13dc5bb846838, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ad00c82bf654d6347d13dc5bb846838->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ad00c82bf654d6347d13dc5bb846838, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ad00c82bf654d6347d13dc5bb846838,
        type_description_1,
        par_self,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_9ad00c82bf654d6347d13dc5bb846838 == cache_frame_9ad00c82bf654d6347d13dc5bb846838) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ad00c82bf654d6347d13dc5bb846838);
        cache_frame_9ad00c82bf654d6347d13dc5bb846838 = NULL;
    }

    assertFrameObject(frame_9ad00c82bf654d6347d13dc5bb846838);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__10__finishInit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3752b290e57c78fefe31d81fc70f639a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3752b290e57c78fefe31d81fc70f639a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3752b290e57c78fefe31d81fc70f639a)) {
        Py_XDECREF(cache_frame_3752b290e57c78fefe31d81fc70f639a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3752b290e57c78fefe31d81fc70f639a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3752b290e57c78fefe31d81fc70f639a = MAKE_FUNCTION_FRAME(tstate, codeobj_3752b290e57c78fefe31d81fc70f639a, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3752b290e57c78fefe31d81fc70f639a->m_type_description == NULL);
    frame_3752b290e57c78fefe31d81fc70f639a = cache_frame_3752b290e57c78fefe31d81fc70f639a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3752b290e57c78fefe31d81fc70f639a);
    assert(Py_REFCNT(frame_3752b290e57c78fefe31d81fc70f639a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3752b290e57c78fefe31d81fc70f639a->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[10]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3752b290e57c78fefe31d81fc70f639a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3752b290e57c78fefe31d81fc70f639a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3752b290e57c78fefe31d81fc70f639a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3752b290e57c78fefe31d81fc70f639a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3752b290e57c78fefe31d81fc70f639a == cache_frame_3752b290e57c78fefe31d81fc70f639a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3752b290e57c78fefe31d81fc70f639a);
        cache_frame_3752b290e57c78fefe31d81fc70f639a = NULL;
    }

    assertFrameObject(frame_3752b290e57c78fefe31d81fc70f639a);

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


static PyObject *impl_direct$fsm$StatePush$$$function__11_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a2c2c1e22be5bfc3d72d388be893b458;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a2c2c1e22be5bfc3d72d388be893b458 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2c2c1e22be5bfc3d72d388be893b458)) {
        Py_XDECREF(cache_frame_a2c2c1e22be5bfc3d72d388be893b458);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2c2c1e22be5bfc3d72d388be893b458 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2c2c1e22be5bfc3d72d388be893b458 = MAKE_FUNCTION_FRAME(tstate, codeobj_a2c2c1e22be5bfc3d72d388be893b458, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2c2c1e22be5bfc3d72d388be893b458->m_type_description == NULL);
    frame_a2c2c1e22be5bfc3d72d388be893b458 = cache_frame_a2c2c1e22be5bfc3d72d388be893b458;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a2c2c1e22be5bfc3d72d388be893b458);
    assert(Py_REFCNT(frame_a2c2c1e22be5bfc3d72d388be893b458) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a2c2c1e22be5bfc3d72d388be893b458->m_frame.f_lineno = 69;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[12]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[9]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2c2c1e22be5bfc3d72d388be893b458, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2c2c1e22be5bfc3d72d388be893b458->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2c2c1e22be5bfc3d72d388be893b458, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2c2c1e22be5bfc3d72d388be893b458,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a2c2c1e22be5bfc3d72d388be893b458 == cache_frame_a2c2c1e22be5bfc3d72d388be893b458) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2c2c1e22be5bfc3d72d388be893b458);
        cache_frame_a2c2c1e22be5bfc3d72d388be893b458 = NULL;
    }

    assertFrameObject(frame_a2c2c1e22be5bfc3d72d388be893b458);

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


static PyObject *impl_direct$fsm$StatePush$$$function__12__subscribeTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    struct Nuitka_FrameObject *frame_1ff34590802cdcf532a491794678082a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1ff34590802cdcf532a491794678082a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ff34590802cdcf532a491794678082a)) {
        Py_XDECREF(cache_frame_1ff34590802cdcf532a491794678082a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ff34590802cdcf532a491794678082a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ff34590802cdcf532a491794678082a = MAKE_FUNCTION_FRAME(tstate, codeobj_1ff34590802cdcf532a491794678082a, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ff34590802cdcf532a491794678082a->m_type_description == NULL);
    frame_1ff34590802cdcf532a491794678082a = cache_frame_1ff34590802cdcf532a491794678082a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1ff34590802cdcf532a491794678082a);
    assert(Py_REFCNT(frame_1ff34590802cdcf532a491794678082a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1ff34590802cdcf532a491794678082a->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[12]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_source);
        tmp_assattr_value_1 = par_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 75;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_1ff34590802cdcf532a491794678082a->m_frame.f_lineno = 76;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[13], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_1ff34590802cdcf532a491794678082a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ff34590802cdcf532a491794678082a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ff34590802cdcf532a491794678082a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ff34590802cdcf532a491794678082a,
        type_description_1,
        par_self,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_1ff34590802cdcf532a491794678082a == cache_frame_1ff34590802cdcf532a491794678082a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ff34590802cdcf532a491794678082a);
        cache_frame_1ff34590802cdcf532a491794678082a = NULL;
    }

    assertFrameObject(frame_1ff34590802cdcf532a491794678082a);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__13__unsubscribe(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6f4b64ee5825c424562dc063cffbda37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6f4b64ee5825c424562dc063cffbda37 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f4b64ee5825c424562dc063cffbda37)) {
        Py_XDECREF(cache_frame_6f4b64ee5825c424562dc063cffbda37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f4b64ee5825c424562dc063cffbda37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f4b64ee5825c424562dc063cffbda37 = MAKE_FUNCTION_FRAME(tstate, codeobj_6f4b64ee5825c424562dc063cffbda37, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f4b64ee5825c424562dc063cffbda37->m_type_description == NULL);
    frame_6f4b64ee5825c424562dc063cffbda37 = cache_frame_6f4b64ee5825c424562dc063cffbda37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f4b64ee5825c424562dc063cffbda37);
    assert(Py_REFCNT(frame_6f4b64ee5825c424562dc063cffbda37) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 79;
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
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_6f4b64ee5825c424562dc063cffbda37->m_frame.f_lineno = 80;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[14], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_6f4b64ee5825c424562dc063cffbda37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f4b64ee5825c424562dc063cffbda37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f4b64ee5825c424562dc063cffbda37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f4b64ee5825c424562dc063cffbda37,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6f4b64ee5825c424562dc063cffbda37 == cache_frame_6f4b64ee5825c424562dc063cffbda37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f4b64ee5825c424562dc063cffbda37);
        cache_frame_6f4b64ee5825c424562dc063cffbda37 = NULL;
    }

    assertFrameObject(frame_6f4b64ee5825c424562dc063cffbda37);

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


static PyObject *impl_direct$fsm$StatePush$$$function__15_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fbd7a214a792696c34df5aef78c12b6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fbd7a214a792696c34df5aef78c12b6f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fbd7a214a792696c34df5aef78c12b6f)) {
        Py_XDECREF(cache_frame_fbd7a214a792696c34df5aef78c12b6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fbd7a214a792696c34df5aef78c12b6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fbd7a214a792696c34df5aef78c12b6f = MAKE_FUNCTION_FRAME(tstate, codeobj_fbd7a214a792696c34df5aef78c12b6f, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fbd7a214a792696c34df5aef78c12b6f->m_type_description == NULL);
    frame_fbd7a214a792696c34df5aef78c12b6f = cache_frame_fbd7a214a792696c34df5aef78c12b6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fbd7a214a792696c34df5aef78c12b6f);
    assert(Py_REFCNT(frame_fbd7a214a792696c34df5aef78c12b6f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_fbd7a214a792696c34df5aef78c12b6f->m_frame.f_lineno = 95;
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


            exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_fbd7a214a792696c34df5aef78c12b6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fbd7a214a792696c34df5aef78c12b6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fbd7a214a792696c34df5aef78c12b6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fbd7a214a792696c34df5aef78c12b6f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fbd7a214a792696c34df5aef78c12b6f == cache_frame_fbd7a214a792696c34df5aef78c12b6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fbd7a214a792696c34df5aef78c12b6f);
        cache_frame_fbd7a214a792696c34df5aef78c12b6f = NULL;
    }

    assertFrameObject(frame_fbd7a214a792696c34df5aef78c12b6f);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__16_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f0645304f4a014e5f6a3f058748a3b2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0645304f4a014e5f6a3f058748a3b2d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0645304f4a014e5f6a3f058748a3b2d)) {
        Py_XDECREF(cache_frame_f0645304f4a014e5f6a3f058748a3b2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0645304f4a014e5f6a3f058748a3b2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0645304f4a014e5f6a3f058748a3b2d = MAKE_FUNCTION_FRAME(tstate, codeobj_f0645304f4a014e5f6a3f058748a3b2d, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0645304f4a014e5f6a3f058748a3b2d->m_type_description == NULL);
    frame_f0645304f4a014e5f6a3f058748a3b2d = cache_frame_f0645304f4a014e5f6a3f058748a3b2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0645304f4a014e5f6a3f058748a3b2d);
    assert(Py_REFCNT(frame_f0645304f4a014e5f6a3f058748a3b2d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_f0645304f4a014e5f6a3f058748a3b2d->m_frame.f_lineno = 98;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_f0645304f4a014e5f6a3f058748a3b2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0645304f4a014e5f6a3f058748a3b2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0645304f4a014e5f6a3f058748a3b2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0645304f4a014e5f6a3f058748a3b2d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f0645304f4a014e5f6a3f058748a3b2d == cache_frame_f0645304f4a014e5f6a3f058748a3b2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0645304f4a014e5f6a3f058748a3b2d);
        cache_frame_f0645304f4a014e5f6a3f058748a3b2d = NULL;
    }

    assertFrameObject(frame_f0645304f4a014e5f6a3f058748a3b2d);

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


static PyObject *impl_direct$fsm$StatePush$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    struct Nuitka_FrameObject *frame_cf7bccdc3ef65b5231d397e03e630872;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf7bccdc3ef65b5231d397e03e630872 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf7bccdc3ef65b5231d397e03e630872)) {
        Py_XDECREF(cache_frame_cf7bccdc3ef65b5231d397e03e630872);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf7bccdc3ef65b5231d397e03e630872 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf7bccdc3ef65b5231d397e03e630872 = MAKE_FUNCTION_FRAME(tstate, codeobj_cf7bccdc3ef65b5231d397e03e630872, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf7bccdc3ef65b5231d397e03e630872->m_type_description == NULL);
    frame_cf7bccdc3ef65b5231d397e03e630872 = cache_frame_cf7bccdc3ef65b5231d397e03e630872;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf7bccdc3ef65b5231d397e03e630872);
    assert(Py_REFCNT(frame_cf7bccdc3ef65b5231d397e03e630872) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_source);
        tmp_args_element_value_2 = par_source;
        frame_cf7bccdc3ef65b5231d397e03e630872->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_source);
        tmp_called_instance_2 = par_source;
        frame_cf7bccdc3ef65b5231d397e03e630872->m_frame.f_lineno = 112;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[17]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cf7bccdc3ef65b5231d397e03e630872->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        frame_cf7bccdc3ef65b5231d397e03e630872->m_frame.f_lineno = 113;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[20], tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf7bccdc3ef65b5231d397e03e630872, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf7bccdc3ef65b5231d397e03e630872->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf7bccdc3ef65b5231d397e03e630872, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf7bccdc3ef65b5231d397e03e630872,
        type_description_1,
        par_self,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_cf7bccdc3ef65b5231d397e03e630872 == cache_frame_cf7bccdc3ef65b5231d397e03e630872) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf7bccdc3ef65b5231d397e03e630872);
        cache_frame_cf7bccdc3ef65b5231d397e03e630872 = NULL;
    }

    assertFrameObject(frame_cf7bccdc3ef65b5231d397e03e630872);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__18_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_47a97a74c74c677794ce06ecd7b72d77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47a97a74c74c677794ce06ecd7b72d77 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47a97a74c74c677794ce06ecd7b72d77)) {
        Py_XDECREF(cache_frame_47a97a74c74c677794ce06ecd7b72d77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47a97a74c74c677794ce06ecd7b72d77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47a97a74c74c677794ce06ecd7b72d77 = MAKE_FUNCTION_FRAME(tstate, codeobj_47a97a74c74c677794ce06ecd7b72d77, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47a97a74c74c677794ce06ecd7b72d77->m_type_description == NULL);
    frame_47a97a74c74c677794ce06ecd7b72d77 = cache_frame_47a97a74c74c677794ce06ecd7b72d77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_47a97a74c74c677794ce06ecd7b72d77);
    assert(Py_REFCNT(frame_47a97a74c74c677794ce06ecd7b72d77) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_47a97a74c74c677794ce06ecd7b72d77->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_47a97a74c74c677794ce06ecd7b72d77->m_frame.f_lineno = 117;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[21], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_47a97a74c74c677794ce06ecd7b72d77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47a97a74c74c677794ce06ecd7b72d77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47a97a74c74c677794ce06ecd7b72d77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47a97a74c74c677794ce06ecd7b72d77,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_47a97a74c74c677794ce06ecd7b72d77 == cache_frame_47a97a74c74c677794ce06ecd7b72d77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47a97a74c74c677794ce06ecd7b72d77);
        cache_frame_47a97a74c74c677794ce06ecd7b72d77 = NULL;
    }

    assertFrameObject(frame_47a97a74c74c677794ce06ecd7b72d77);

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


static PyObject *impl_direct$fsm$StatePush$$$function__19__recvStatePush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    struct Nuitka_FrameObject *frame_f72924752796edb266725a6350dc3bba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f72924752796edb266725a6350dc3bba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f72924752796edb266725a6350dc3bba)) {
        Py_XDECREF(cache_frame_f72924752796edb266725a6350dc3bba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f72924752796edb266725a6350dc3bba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f72924752796edb266725a6350dc3bba = MAKE_FUNCTION_FRAME(tstate, codeobj_f72924752796edb266725a6350dc3bba, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f72924752796edb266725a6350dc3bba->m_type_description == NULL);
    frame_f72924752796edb266725a6350dc3bba = cache_frame_f72924752796edb266725a6350dc3bba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f72924752796edb266725a6350dc3bba);
    assert(Py_REFCNT(frame_f72924752796edb266725a6350dc3bba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_expression_value_2 = par_source;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f72924752796edb266725a6350dc3bba->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_f72924752796edb266725a6350dc3bba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f72924752796edb266725a6350dc3bba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f72924752796edb266725a6350dc3bba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f72924752796edb266725a6350dc3bba,
        type_description_1,
        par_self,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_f72924752796edb266725a6350dc3bba == cache_frame_f72924752796edb266725a6350dc3bba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f72924752796edb266725a6350dc3bba);
        cache_frame_f72924752796edb266725a6350dc3bba = NULL;
    }

    assertFrameObject(frame_f72924752796edb266725a6350dc3bba);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e176d812f58414a4f3117206739a4fd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e176d812f58414a4f3117206739a4fd0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e176d812f58414a4f3117206739a4fd0)) {
        Py_XDECREF(cache_frame_e176d812f58414a4f3117206739a4fd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e176d812f58414a4f3117206739a4fd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e176d812f58414a4f3117206739a4fd0 = MAKE_FUNCTION_FRAME(tstate, codeobj_e176d812f58414a4f3117206739a4fd0, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e176d812f58414a4f3117206739a4fd0->m_type_description == NULL);
    frame_e176d812f58414a4f3117206739a4fd0 = cache_frame_e176d812f58414a4f3117206739a4fd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e176d812f58414a4f3117206739a4fd0);
    assert(Py_REFCNT(frame_e176d812f58414a4f3117206739a4fd0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e176d812f58414a4f3117206739a4fd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e176d812f58414a4f3117206739a4fd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e176d812f58414a4f3117206739a4fd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e176d812f58414a4f3117206739a4fd0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e176d812f58414a4f3117206739a4fd0 == cache_frame_e176d812f58414a4f3117206739a4fd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e176d812f58414a4f3117206739a4fd0);
        cache_frame_e176d812f58414a4f3117206739a4fd0 = NULL;
    }

    assertFrameObject(frame_e176d812f58414a4f3117206739a4fd0);

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


static PyObject *impl_direct$fsm$StatePush$$$function__21_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_keys = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f26f7b043664d0a2e953d5a22961e671;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f26f7b043664d0a2e953d5a22961e671 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f26f7b043664d0a2e953d5a22961e671)) {
        Py_XDECREF(cache_frame_f26f7b043664d0a2e953d5a22961e671);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f26f7b043664d0a2e953d5a22961e671 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f26f7b043664d0a2e953d5a22961e671 = MAKE_FUNCTION_FRAME(tstate, codeobj_f26f7b043664d0a2e953d5a22961e671, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f26f7b043664d0a2e953d5a22961e671->m_type_description == NULL);
    frame_f26f7b043664d0a2e953d5a22961e671 = cache_frame_f26f7b043664d0a2e953d5a22961e671;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f26f7b043664d0a2e953d5a22961e671);
    assert(Py_REFCNT(frame_f26f7b043664d0a2e953d5a22961e671) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f26f7b043664d0a2e953d5a22961e671->m_frame.f_lineno = 157;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_keys == NULL);
        var_keys = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_keys);
        tmp_iter_arg_1 = var_keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
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
                exception_lineno = 158;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_4;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_1 = var_key;
        frame_f26f7b043664d0a2e953d5a22961e671->m_frame.f_lineno = 159;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 158;
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
        PyObject *tmp_attrdel_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[22]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_attrdel_target_2 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f26f7b043664d0a2e953d5a22961e671, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f26f7b043664d0a2e953d5a22961e671->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f26f7b043664d0a2e953d5a22961e671, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f26f7b043664d0a2e953d5a22961e671,
        type_description_1,
        par_self,
        var_keys,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_f26f7b043664d0a2e953d5a22961e671 == cache_frame_f26f7b043664d0a2e953d5a22961e671) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f26f7b043664d0a2e953d5a22961e671);
        cache_frame_f26f7b043664d0a2e953d5a22961e671 = NULL;
    }

    assertFrameObject(frame_f26f7b043664d0a2e953d5a22961e671);

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
    CHECK_OBJECT(var_keys);
    Py_DECREF(var_keys);
    var_keys = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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

    Py_XDECREF(var_keys);
    var_keys = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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


static PyObject *impl_direct$fsm$StatePush$$$function__22__subscribeTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    PyObject *par_key = python_pars[2];
    struct Nuitka_FrameObject *frame_4b95b4cf731c84fa1179f912399fb23c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4b95b4cf731c84fa1179f912399fb23c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b95b4cf731c84fa1179f912399fb23c)) {
        Py_XDECREF(cache_frame_4b95b4cf731c84fa1179f912399fb23c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b95b4cf731c84fa1179f912399fb23c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b95b4cf731c84fa1179f912399fb23c = MAKE_FUNCTION_FRAME(tstate, codeobj_4b95b4cf731c84fa1179f912399fb23c, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b95b4cf731c84fa1179f912399fb23c->m_type_description == NULL);
    frame_4b95b4cf731c84fa1179f912399fb23c = cache_frame_4b95b4cf731c84fa1179f912399fb23c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4b95b4cf731c84fa1179f912399fb23c);
    assert(Py_REFCNT(frame_4b95b4cf731c84fa1179f912399fb23c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_4b95b4cf731c84fa1179f912399fb23c->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_source);
        tmp_ass_subvalue_1 = par_source;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_ass_subscript_1 = par_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_key);
        tmp_ass_subvalue_2 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[23]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_ass_subscript_2 = par_source;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_source);
        tmp_called_instance_2 = par_source;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_4b95b4cf731c84fa1179f912399fb23c->m_frame.f_lineno = 167;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[13], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_4b95b4cf731c84fa1179f912399fb23c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b95b4cf731c84fa1179f912399fb23c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b95b4cf731c84fa1179f912399fb23c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b95b4cf731c84fa1179f912399fb23c,
        type_description_1,
        par_self,
        par_source,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_4b95b4cf731c84fa1179f912399fb23c == cache_frame_4b95b4cf731c84fa1179f912399fb23c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b95b4cf731c84fa1179f912399fb23c);
        cache_frame_4b95b4cf731c84fa1179f912399fb23c = NULL;
    }

    assertFrameObject(frame_4b95b4cf731c84fa1179f912399fb23c);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__23__unsubscribe(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *var_source = NULL;
    struct Nuitka_FrameObject *frame_2c34916705f9505543d3f24ab81e6f1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2c34916705f9505543d3f24ab81e6f1f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c34916705f9505543d3f24ab81e6f1f)) {
        Py_XDECREF(cache_frame_2c34916705f9505543d3f24ab81e6f1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c34916705f9505543d3f24ab81e6f1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c34916705f9505543d3f24ab81e6f1f = MAKE_FUNCTION_FRAME(tstate, codeobj_2c34916705f9505543d3f24ab81e6f1f, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c34916705f9505543d3f24ab81e6f1f->m_type_description == NULL);
    frame_2c34916705f9505543d3f24ab81e6f1f = cache_frame_2c34916705f9505543d3f24ab81e6f1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c34916705f9505543d3f24ab81e6f1f);
    assert(Py_REFCNT(frame_2c34916705f9505543d3f24ab81e6f1f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[22]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_source == NULL);
        var_source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_source);
        tmp_called_instance_1 = var_source;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_2c34916705f9505543d3f24ab81e6f1f->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[14], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[22]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_delsubscr_subscript_1 = par_key;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_delsubscr_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_delsubscr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[23]);
        if (tmp_delsubscr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_source);
        tmp_delsubscr_subscript_2 = var_source;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        Py_DECREF(tmp_delsubscr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_2c34916705f9505543d3f24ab81e6f1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c34916705f9505543d3f24ab81e6f1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c34916705f9505543d3f24ab81e6f1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c34916705f9505543d3f24ab81e6f1f,
        type_description_1,
        par_self,
        par_key,
        var_source
    );


    // Release cached frame if used for exception.
    if (frame_2c34916705f9505543d3f24ab81e6f1f == cache_frame_2c34916705f9505543d3f24ab81e6f1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c34916705f9505543d3f24ab81e6f1f);
        cache_frame_2c34916705f9505543d3f24ab81e6f1f = NULL;
    }

    assertFrameObject(frame_2c34916705f9505543d3f24ab81e6f1f);

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
    Py_XDECREF(var_source);
    var_source = NULL;
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

    Py_XDECREF(var_source);
    var_source = NULL;
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


static PyObject *impl_direct$fsm$StatePush$$$function__24__recvStatePush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    struct Nuitka_FrameObject *frame_0db193aafb92c6785ab15ef10c3af368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0db193aafb92c6785ab15ef10c3af368 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0db193aafb92c6785ab15ef10c3af368)) {
        Py_XDECREF(cache_frame_0db193aafb92c6785ab15ef10c3af368);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0db193aafb92c6785ab15ef10c3af368 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0db193aafb92c6785ab15ef10c3af368 = MAKE_FUNCTION_FRAME(tstate, codeobj_0db193aafb92c6785ab15ef10c3af368, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0db193aafb92c6785ab15ef10c3af368->m_type_description == NULL);
    frame_0db193aafb92c6785ab15ef10c3af368 = cache_frame_0db193aafb92c6785ab15ef10c3af368;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0db193aafb92c6785ab15ef10c3af368);
    assert(Py_REFCNT(frame_0db193aafb92c6785ab15ef10c3af368) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[23]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_subscript_value_1 = par_source;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_args_element_value_2 = par_source;
        frame_0db193aafb92c6785ab15ef10c3af368->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_0db193aafb92c6785ab15ef10c3af368, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0db193aafb92c6785ab15ef10c3af368->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0db193aafb92c6785ab15ef10c3af368, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0db193aafb92c6785ab15ef10c3af368,
        type_description_1,
        par_self,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_0db193aafb92c6785ab15ef10c3af368 == cache_frame_0db193aafb92c6785ab15ef10c3af368) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0db193aafb92c6785ab15ef10c3af368);
        cache_frame_0db193aafb92c6785ab15ef10c3af368 = NULL;
    }

    assertFrameObject(frame_0db193aafb92c6785ab15ef10c3af368);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kArgs = python_pars[3];
    PyObject *var_i = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f4d759c9ea2333f915f6aae09fb8a4ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec)) {
        Py_XDECREF(cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec = MAKE_FUNCTION_FRAME(tstate, codeobj_f4d759c9ea2333f915f6aae09fb8a4ec, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_type_description == NULL);
    frame_f4d759c9ea2333f915f6aae09fb8a4ec = cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f4d759c9ea2333f915f6aae09fb8a4ec);
    assert(Py_REFCNT(frame_f4d759c9ea2333f915f6aae09fb8a4ec) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        tmp_args_element_value_3 = Py_None;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_func);
        tmp_assattr_value_2 = par_func;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_args);
        tmp_assattr_value_3 = par_args;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[29], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_kArgs);
        tmp_assattr_value_4 = par_kArgs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[30], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[31], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[32], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 205;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 205;
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


            exception_lineno = 205;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 205;
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


            type_description_1 = "ooooooo";
            exception_lineno = 205;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 205;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 205;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_7;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_i);
        tmp_assign_source_8 = var_i;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_1 = var_arg;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[34]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_arg);
        tmp_called_instance_3 = var_arg;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 208;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[17]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 208;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_arg);
        tmp_args_element_value_6 = var_arg;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_7 = var_key;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[11],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[34]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[29]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 211;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 205;
        type_description_1 = "ooooooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[35]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 212;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 212;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 212;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 212;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 212;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 212;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_14;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_15;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_2 = var_arg;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_arg);
        tmp_called_instance_5 = var_arg;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 214;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[17]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_10 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[32]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_arg);
        tmp_args_element_value_9 = var_arg;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_10 = var_key;
        frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_6,
                mod_consts[11],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_arg);
        tmp_ass_subvalue_2 = var_arg;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_11 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[32]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_2 = var_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
    }
    branch_end_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 212;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = Py_True;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[26], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4d759c9ea2333f915f6aae09fb8a4ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4d759c9ea2333f915f6aae09fb8a4ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4d759c9ea2333f915f6aae09fb8a4ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4d759c9ea2333f915f6aae09fb8a4ec,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kArgs,
        var_i,
        var_arg,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_f4d759c9ea2333f915f6aae09fb8a4ec == cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec);
        cache_frame_f4d759c9ea2333f915f6aae09fb8a4ec = NULL;
    }

    assertFrameObject(frame_f4d759c9ea2333f915f6aae09fb8a4ec);

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
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kArgs);
    Py_DECREF(par_kArgs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kArgs);
    Py_DECREF(par_kArgs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__27_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f4925df8ea877f1ba053d6d7be03c2c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f4925df8ea877f1ba053d6d7be03c2c4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4925df8ea877f1ba053d6d7be03c2c4)) {
        Py_XDECREF(cache_frame_f4925df8ea877f1ba053d6d7be03c2c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4925df8ea877f1ba053d6d7be03c2c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4925df8ea877f1ba053d6d7be03c2c4 = MAKE_FUNCTION_FRAME(tstate, codeobj_f4925df8ea877f1ba053d6d7be03c2c4, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4925df8ea877f1ba053d6d7be03c2c4->m_type_description == NULL);
    frame_f4925df8ea877f1ba053d6d7be03c2c4 = cache_frame_f4925df8ea877f1ba053d6d7be03c2c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f4925df8ea877f1ba053d6d7be03c2c4);
    assert(Py_REFCNT(frame_f4925df8ea877f1ba053d6d7be03c2c4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_f4925df8ea877f1ba053d6d7be03c2c4->m_frame.f_lineno = 224;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_f4925df8ea877f1ba053d6d7be03c2c4->m_frame.f_lineno = 225;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[21], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[28]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_2;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_2 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts[29]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_3;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_3 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_3, mod_consts[30]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_4;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_4 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_4, mod_consts[31]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_5;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_5 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_5, mod_consts[32]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4925df8ea877f1ba053d6d7be03c2c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4925df8ea877f1ba053d6d7be03c2c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4925df8ea877f1ba053d6d7be03c2c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4925df8ea877f1ba053d6d7be03c2c4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f4925df8ea877f1ba053d6d7be03c2c4 == cache_frame_f4925df8ea877f1ba053d6d7be03c2c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4925df8ea877f1ba053d6d7be03c2c4);
        cache_frame_f4925df8ea877f1ba053d6d7be03c2c4 = NULL;
    }

    assertFrameObject(frame_f4925df8ea877f1ba053d6d7be03c2c4);

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


static PyObject *impl_direct$fsm$StatePush$$$function__28_getState(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1ac8064d3bb3c3a7b6bb645b79bd24ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac)) {
        Py_XDECREF(cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac = MAKE_FUNCTION_FRAME(tstate, codeobj_1ac8064d3bb3c3a7b6bb645b79bd24ac, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac->m_type_description == NULL);
    frame_1ac8064d3bb3c3a7b6bb645b79bd24ac = cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1ac8064d3bb3c3a7b6bb645b79bd24ac);
    assert(Py_REFCNT(frame_1ac8064d3bb3c3a7b6bb645b79bd24ac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_tuple_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_dict_seq_1;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
            if (tmp_dict_seq_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
            Py_DECREF(tmp_dict_seq_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_1ac8064d3bb3c3a7b6bb645b79bd24ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ac8064d3bb3c3a7b6bb645b79bd24ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ac8064d3bb3c3a7b6bb645b79bd24ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ac8064d3bb3c3a7b6bb645b79bd24ac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1ac8064d3bb3c3a7b6bb645b79bd24ac == cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac);
        cache_frame_1ac8064d3bb3c3a7b6bb645b79bd24ac = NULL;
    }

    assertFrameObject(frame_1ac8064d3bb3c3a7b6bb645b79bd24ac);

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


static PyObject *impl_direct$fsm$StatePush$$$function__29__recvMultiStatePush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_source = python_pars[2];
    struct Nuitka_FrameObject *frame_e205066aee9324be155a5d348ddd16d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e205066aee9324be155a5d348ddd16d7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e205066aee9324be155a5d348ddd16d7)) {
        Py_XDECREF(cache_frame_e205066aee9324be155a5d348ddd16d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e205066aee9324be155a5d348ddd16d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e205066aee9324be155a5d348ddd16d7 = MAKE_FUNCTION_FRAME(tstate, codeobj_e205066aee9324be155a5d348ddd16d7, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e205066aee9324be155a5d348ddd16d7->m_type_description == NULL);
    frame_e205066aee9324be155a5d348ddd16d7 = cache_frame_e205066aee9324be155a5d348ddd16d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e205066aee9324be155a5d348ddd16d7);
    assert(Py_REFCNT(frame_e205066aee9324be155a5d348ddd16d7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_key);
        tmp_isinstance_inst_1 = par_key;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_source);
        tmp_called_instance_1 = par_source;
        frame_e205066aee9324be155a5d348ddd16d7->m_frame.f_lineno = 241;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[17]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_ass_subscript_1 = par_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_source);
        tmp_called_instance_2 = par_source;
        frame_e205066aee9324be155a5d348ddd16d7->m_frame.f_lineno = 243;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[17]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_ass_subscript_2 = par_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_e205066aee9324be155a5d348ddd16d7->m_frame.f_lineno = 245;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e205066aee9324be155a5d348ddd16d7->m_frame.f_lineno = 245;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_e205066aee9324be155a5d348ddd16d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e205066aee9324be155a5d348ddd16d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e205066aee9324be155a5d348ddd16d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e205066aee9324be155a5d348ddd16d7,
        type_description_1,
        par_self,
        par_key,
        par_source
    );


    // Release cached frame if used for exception.
    if (frame_e205066aee9324be155a5d348ddd16d7 == cache_frame_e205066aee9324be155a5d348ddd16d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e205066aee9324be155a5d348ddd16d7);
        cache_frame_e205066aee9324be155a5d348ddd16d7 = NULL;
    }

    assertFrameObject(frame_e205066aee9324be155a5d348ddd16d7);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__30__handleStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e2161f84aa7c223178c2713532e3218;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3e2161f84aa7c223178c2713532e3218 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e2161f84aa7c223178c2713532e3218)) {
        Py_XDECREF(cache_frame_3e2161f84aa7c223178c2713532e3218);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e2161f84aa7c223178c2713532e3218 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e2161f84aa7c223178c2713532e3218 = MAKE_FUNCTION_FRAME(tstate, codeobj_3e2161f84aa7c223178c2713532e3218, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e2161f84aa7c223178c2713532e3218->m_type_description == NULL);
    frame_3e2161f84aa7c223178c2713532e3218 = cache_frame_3e2161f84aa7c223178c2713532e3218;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e2161f84aa7c223178c2713532e3218);
    assert(Py_REFCNT(frame_3e2161f84aa7c223178c2713532e3218) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 248;
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[28]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[32]);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_3e2161f84aa7c223178c2713532e3218->m_frame.f_lineno = 250;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_3e2161f84aa7c223178c2713532e3218, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e2161f84aa7c223178c2713532e3218->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e2161f84aa7c223178c2713532e3218, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e2161f84aa7c223178c2713532e3218,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e2161f84aa7c223178c2713532e3218 == cache_frame_3e2161f84aa7c223178c2713532e3218) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e2161f84aa7c223178c2713532e3218);
        cache_frame_3e2161f84aa7c223178c2713532e3218 = NULL;
    }

    assertFrameObject(frame_3e2161f84aa7c223178c2713532e3218);

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


static PyObject *impl_direct$fsm$StatePush$$$function__31_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_l = python_pars[1];
    struct Nuitka_FrameObject *frame_b8408c705f4056593d3f4c4abca7e204;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b8408c705f4056593d3f4c4abca7e204 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b8408c705f4056593d3f4c4abca7e204)) {
        Py_XDECREF(cache_frame_b8408c705f4056593d3f4c4abca7e204);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8408c705f4056593d3f4c4abca7e204 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8408c705f4056593d3f4c4abca7e204 = MAKE_FUNCTION_FRAME(tstate, codeobj_b8408c705f4056593d3f4c4abca7e204, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8408c705f4056593d3f4c4abca7e204->m_type_description == NULL);
    frame_b8408c705f4056593d3f4c4abca7e204 = cache_frame_b8408c705f4056593d3f4c4abca7e204;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b8408c705f4056593d3f4c4abca7e204);
    assert(Py_REFCNT(frame_b8408c705f4056593d3f4c4abca7e204) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_l);
        tmp_expression_value_1 = par_l;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_b8408c705f4056593d3f4c4abca7e204->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_b8408c705f4056593d3f4c4abca7e204, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8408c705f4056593d3f4c4abca7e204->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8408c705f4056593d3f4c4abca7e204, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8408c705f4056593d3f4c4abca7e204,
        type_description_1,
        par_value,
        par_l
    );


    // Release cached frame if used for exception.
    if (frame_b8408c705f4056593d3f4c4abca7e204 == cache_frame_b8408c705f4056593d3f4c4abca7e204) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8408c705f4056593d3f4c4abca7e204);
        cache_frame_b8408c705f4056593d3f4c4abca7e204 = NULL;
    }

    assertFrameObject(frame_b8408c705f4056593d3f4c4abca7e204);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__32_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_kDummy = python_pars[1];
    PyObject *par_kValue = python_pars[2];
    PyObject *par_l = python_pars[3];
    struct Nuitka_FrameObject *frame_257b377dacd7abd22e6b3af2725a768e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_257b377dacd7abd22e6b3af2725a768e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_257b377dacd7abd22e6b3af2725a768e)) {
        Py_XDECREF(cache_frame_257b377dacd7abd22e6b3af2725a768e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_257b377dacd7abd22e6b3af2725a768e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_257b377dacd7abd22e6b3af2725a768e = MAKE_FUNCTION_FRAME(tstate, codeobj_257b377dacd7abd22e6b3af2725a768e, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_257b377dacd7abd22e6b3af2725a768e->m_type_description == NULL);
    frame_257b377dacd7abd22e6b3af2725a768e = cache_frame_257b377dacd7abd22e6b3af2725a768e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_257b377dacd7abd22e6b3af2725a768e);
    assert(Py_REFCNT(frame_257b377dacd7abd22e6b3af2725a768e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_l);
        tmp_expression_value_1 = par_l;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kValue);
        tmp_tuple_element_1 = par_kValue;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_257b377dacd7abd22e6b3af2725a768e->m_frame.f_lineno = 275;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_257b377dacd7abd22e6b3af2725a768e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_257b377dacd7abd22e6b3af2725a768e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_257b377dacd7abd22e6b3af2725a768e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_257b377dacd7abd22e6b3af2725a768e,
        type_description_1,
        par_value,
        par_kDummy,
        par_kValue,
        par_l
    );


    // Release cached frame if used for exception.
    if (frame_257b377dacd7abd22e6b3af2725a768e == cache_frame_257b377dacd7abd22e6b3af2725a768e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_257b377dacd7abd22e6b3af2725a768e);
        cache_frame_257b377dacd7abd22e6b3af2725a768e = NULL;
    }

    assertFrameObject(frame_257b377dacd7abd22e6b3af2725a768e);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kDummy);
    Py_DECREF(par_kDummy);
    CHECK_OBJECT(par_kValue);
    Py_DECREF(par_kValue);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kDummy);
    Py_DECREF(par_kDummy);
    CHECK_OBJECT(par_kValue);
    Py_DECREF(par_kValue);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__33___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    PyObject *par_enterFunc = python_pars[2];
    PyObject *par_exitFunc = python_pars[3];
    struct Nuitka_FrameObject *frame_d6561ddbc5c9d199860469befa7ca4cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d6561ddbc5c9d199860469befa7ca4cb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6561ddbc5c9d199860469befa7ca4cb)) {
        Py_XDECREF(cache_frame_d6561ddbc5c9d199860469befa7ca4cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6561ddbc5c9d199860469befa7ca4cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6561ddbc5c9d199860469befa7ca4cb = MAKE_FUNCTION_FRAME(tstate, codeobj_d6561ddbc5c9d199860469befa7ca4cb, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6561ddbc5c9d199860469befa7ca4cb->m_type_description == NULL);
    frame_d6561ddbc5c9d199860469befa7ca4cb = cache_frame_d6561ddbc5c9d199860469befa7ca4cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d6561ddbc5c9d199860469befa7ca4cb);
    assert(Py_REFCNT(frame_d6561ddbc5c9d199860469befa7ca4cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_enterFunc);
        tmp_assattr_value_1 = par_enterFunc;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_exitFunc);
        tmp_assattr_value_2 = par_exitFunc;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_source);
        tmp_args_element_value_2 = par_source;
        frame_d6561ddbc5c9d199860469befa7ca4cb->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_d6561ddbc5c9d199860469befa7ca4cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6561ddbc5c9d199860469befa7ca4cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6561ddbc5c9d199860469befa7ca4cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6561ddbc5c9d199860469befa7ca4cb,
        type_description_1,
        par_self,
        par_source,
        par_enterFunc,
        par_exitFunc
    );


    // Release cached frame if used for exception.
    if (frame_d6561ddbc5c9d199860469befa7ca4cb == cache_frame_d6561ddbc5c9d199860469befa7ca4cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6561ddbc5c9d199860469befa7ca4cb);
        cache_frame_d6561ddbc5c9d199860469befa7ca4cb = NULL;
    }

    assertFrameObject(frame_d6561ddbc5c9d199860469befa7ca4cb);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_enterFunc);
    Py_DECREF(par_enterFunc);
    CHECK_OBJECT(par_exitFunc);
    Py_DECREF(par_exitFunc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_enterFunc);
    Py_DECREF(par_enterFunc);
    CHECK_OBJECT(par_exitFunc);
    Py_DECREF(par_exitFunc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__34_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4666dcb202c9ee7d35e6d654c44389a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4666dcb202c9ee7d35e6d654c44389a9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4666dcb202c9ee7d35e6d654c44389a9)) {
        Py_XDECREF(cache_frame_4666dcb202c9ee7d35e6d654c44389a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4666dcb202c9ee7d35e6d654c44389a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4666dcb202c9ee7d35e6d654c44389a9 = MAKE_FUNCTION_FRAME(tstate, codeobj_4666dcb202c9ee7d35e6d654c44389a9, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4666dcb202c9ee7d35e6d654c44389a9->m_type_description == NULL);
    frame_4666dcb202c9ee7d35e6d654c44389a9 = cache_frame_4666dcb202c9ee7d35e6d654c44389a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4666dcb202c9ee7d35e6d654c44389a9);
    assert(Py_REFCNT(frame_4666dcb202c9ee7d35e6d654c44389a9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_4666dcb202c9ee7d35e6d654c44389a9->m_frame.f_lineno = 302;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_attrdel_target_2;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_2 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts[36]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4666dcb202c9ee7d35e6d654c44389a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4666dcb202c9ee7d35e6d654c44389a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4666dcb202c9ee7d35e6d654c44389a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4666dcb202c9ee7d35e6d654c44389a9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4666dcb202c9ee7d35e6d654c44389a9 == cache_frame_4666dcb202c9ee7d35e6d654c44389a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4666dcb202c9ee7d35e6d654c44389a9);
        cache_frame_4666dcb202c9ee7d35e6d654c44389a9 = NULL;
    }

    assertFrameObject(frame_4666dcb202c9ee7d35e6d654c44389a9);

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


static PyObject *impl_direct$fsm$StatePush$$$function__35__handlePotentialStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a0976b4805c2b4df0cd27438ac202e3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a0976b4805c2b4df0cd27438ac202e3d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0976b4805c2b4df0cd27438ac202e3d)) {
        Py_XDECREF(cache_frame_a0976b4805c2b4df0cd27438ac202e3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0976b4805c2b4df0cd27438ac202e3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0976b4805c2b4df0cd27438ac202e3d = MAKE_FUNCTION_FRAME(tstate, codeobj_a0976b4805c2b4df0cd27438ac202e3d, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0976b4805c2b4df0cd27438ac202e3d->m_type_description == NULL);
    frame_a0976b4805c2b4df0cd27438ac202e3d = cache_frame_a0976b4805c2b4df0cd27438ac202e3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a0976b4805c2b4df0cd27438ac202e3d);
    assert(Py_REFCNT(frame_a0976b4805c2b4df0cd27438ac202e3d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_value_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_value_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 308;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        frame_a0976b4805c2b4df0cd27438ac202e3d->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
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
        exception_tb = MAKE_TRACEBACK(frame_a0976b4805c2b4df0cd27438ac202e3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0976b4805c2b4df0cd27438ac202e3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0976b4805c2b4df0cd27438ac202e3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0976b4805c2b4df0cd27438ac202e3d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a0976b4805c2b4df0cd27438ac202e3d == cache_frame_a0976b4805c2b4df0cd27438ac202e3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0976b4805c2b4df0cd27438ac202e3d);
        cache_frame_a0976b4805c2b4df0cd27438ac202e3d = NULL;
    }

    assertFrameObject(frame_a0976b4805c2b4df0cd27438ac202e3d);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__36__handleStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_723d0f3f0247c24af2274186ecffb7c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_723d0f3f0247c24af2274186ecffb7c1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_723d0f3f0247c24af2274186ecffb7c1)) {
        Py_XDECREF(cache_frame_723d0f3f0247c24af2274186ecffb7c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_723d0f3f0247c24af2274186ecffb7c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_723d0f3f0247c24af2274186ecffb7c1 = MAKE_FUNCTION_FRAME(tstate, codeobj_723d0f3f0247c24af2274186ecffb7c1, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_723d0f3f0247c24af2274186ecffb7c1->m_type_description == NULL);
    frame_723d0f3f0247c24af2274186ecffb7c1 = cache_frame_723d0f3f0247c24af2274186ecffb7c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_723d0f3f0247c24af2274186ecffb7c1);
    assert(Py_REFCNT(frame_723d0f3f0247c24af2274186ecffb7c1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 311;
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
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_723d0f3f0247c24af2274186ecffb7c1->m_frame.f_lineno = 312;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[36]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
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
        frame_723d0f3f0247c24af2274186ecffb7c1->m_frame.f_lineno = 314;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[37]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_723d0f3f0247c24af2274186ecffb7c1->m_frame.f_lineno = 315;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_723d0f3f0247c24af2274186ecffb7c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_723d0f3f0247c24af2274186ecffb7c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_723d0f3f0247c24af2274186ecffb7c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_723d0f3f0247c24af2274186ecffb7c1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_723d0f3f0247c24af2274186ecffb7c1 == cache_frame_723d0f3f0247c24af2274186ecffb7c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_723d0f3f0247c24af2274186ecffb7c1);
        cache_frame_723d0f3f0247c24af2274186ecffb7c1 = NULL;
    }

    assertFrameObject(frame_723d0f3f0247c24af2274186ecffb7c1);

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


static PyObject *impl_direct$fsm$StatePush$$$function__37_enter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_l = python_pars[0];
    struct Nuitka_FrameObject *frame_1d4ea9032af4cdc22c1385b9c711bb0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b)) {
        Py_XDECREF(cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b = MAKE_FUNCTION_FRAME(tstate, codeobj_1d4ea9032af4cdc22c1385b9c711bb0b, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b->m_type_description == NULL);
    frame_1d4ea9032af4cdc22c1385b9c711bb0b = cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1d4ea9032af4cdc22c1385b9c711bb0b);
    assert(Py_REFCNT(frame_1d4ea9032af4cdc22c1385b9c711bb0b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_l);
        tmp_expression_value_1 = par_l;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1d4ea9032af4cdc22c1385b9c711bb0b->m_frame.f_lineno = 320;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[39]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
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
        exception_tb = MAKE_TRACEBACK(frame_1d4ea9032af4cdc22c1385b9c711bb0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d4ea9032af4cdc22c1385b9c711bb0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d4ea9032af4cdc22c1385b9c711bb0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d4ea9032af4cdc22c1385b9c711bb0b,
        type_description_1,
        par_l
    );


    // Release cached frame if used for exception.
    if (frame_1d4ea9032af4cdc22c1385b9c711bb0b == cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b);
        cache_frame_1d4ea9032af4cdc22c1385b9c711bb0b = NULL;
    }

    assertFrameObject(frame_1d4ea9032af4cdc22c1385b9c711bb0b);

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
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__38_exit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_l = python_pars[0];
    struct Nuitka_FrameObject *frame_68e6162aab34054e959ec53b2bc95677;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68e6162aab34054e959ec53b2bc95677 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68e6162aab34054e959ec53b2bc95677)) {
        Py_XDECREF(cache_frame_68e6162aab34054e959ec53b2bc95677);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68e6162aab34054e959ec53b2bc95677 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68e6162aab34054e959ec53b2bc95677 = MAKE_FUNCTION_FRAME(tstate, codeobj_68e6162aab34054e959ec53b2bc95677, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68e6162aab34054e959ec53b2bc95677->m_type_description == NULL);
    frame_68e6162aab34054e959ec53b2bc95677 = cache_frame_68e6162aab34054e959ec53b2bc95677;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_68e6162aab34054e959ec53b2bc95677);
    assert(Py_REFCNT(frame_68e6162aab34054e959ec53b2bc95677) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_l);
        tmp_expression_value_1 = par_l;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_68e6162aab34054e959ec53b2bc95677->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[40]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
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
        exception_tb = MAKE_TRACEBACK(frame_68e6162aab34054e959ec53b2bc95677, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68e6162aab34054e959ec53b2bc95677->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68e6162aab34054e959ec53b2bc95677, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68e6162aab34054e959ec53b2bc95677,
        type_description_1,
        par_l
    );


    // Release cached frame if used for exception.
    if (frame_68e6162aab34054e959ec53b2bc95677 == cache_frame_68e6162aab34054e959ec53b2bc95677) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68e6162aab34054e959ec53b2bc95677);
        cache_frame_68e6162aab34054e959ec53b2bc95677 = NULL;
    }

    assertFrameObject(frame_68e6162aab34054e959ec53b2bc95677);

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
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__39___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6ed9d25463a9ff96b9a7b66db21a1f23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23)) {
        Py_XDECREF(cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23 = MAKE_FUNCTION_FRAME(tstate, codeobj_6ed9d25463a9ff96b9a7b66db21a1f23, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23->m_type_description == NULL);
    frame_6ed9d25463a9ff96b9a7b66db21a1f23 = cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6ed9d25463a9ff96b9a7b66db21a1f23);
    assert(Py_REFCNT(frame_6ed9d25463a9ff96b9a7b66db21a1f23) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = Py_False;
        frame_6ed9d25463a9ff96b9a7b66db21a1f23->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
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
        exception_tb = MAKE_TRACEBACK(frame_6ed9d25463a9ff96b9a7b66db21a1f23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ed9d25463a9ff96b9a7b66db21a1f23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ed9d25463a9ff96b9a7b66db21a1f23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ed9d25463a9ff96b9a7b66db21a1f23,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6ed9d25463a9ff96b9a7b66db21a1f23 == cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23);
        cache_frame_6ed9d25463a9ff96b9a7b66db21a1f23 = NULL;
    }

    assertFrameObject(frame_6ed9d25463a9ff96b9a7b66db21a1f23);

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


static PyObject *impl_direct$fsm$StatePush$$$function__40_sendPulse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9dfaa7b3e2d46d021217240dce5b0328;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9dfaa7b3e2d46d021217240dce5b0328 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9dfaa7b3e2d46d021217240dce5b0328)) {
        Py_XDECREF(cache_frame_9dfaa7b3e2d46d021217240dce5b0328);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dfaa7b3e2d46d021217240dce5b0328 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dfaa7b3e2d46d021217240dce5b0328 = MAKE_FUNCTION_FRAME(tstate, codeobj_9dfaa7b3e2d46d021217240dce5b0328, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9dfaa7b3e2d46d021217240dce5b0328->m_type_description == NULL);
    frame_9dfaa7b3e2d46d021217240dce5b0328 = cache_frame_9dfaa7b3e2d46d021217240dce5b0328;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9dfaa7b3e2d46d021217240dce5b0328);
    assert(Py_REFCNT(frame_9dfaa7b3e2d46d021217240dce5b0328) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9dfaa7b3e2d46d021217240dce5b0328->m_frame.f_lineno = 351;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        frame_9dfaa7b3e2d46d021217240dce5b0328->m_frame.f_lineno = 352;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
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
        exception_tb = MAKE_TRACEBACK(frame_9dfaa7b3e2d46d021217240dce5b0328, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dfaa7b3e2d46d021217240dce5b0328->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dfaa7b3e2d46d021217240dce5b0328, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dfaa7b3e2d46d021217240dce5b0328,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9dfaa7b3e2d46d021217240dce5b0328 == cache_frame_9dfaa7b3e2d46d021217240dce5b0328) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9dfaa7b3e2d46d021217240dce5b0328);
        cache_frame_9dfaa7b3e2d46d021217240dce5b0328 = NULL;
    }

    assertFrameObject(frame_9dfaa7b3e2d46d021217240dce5b0328);

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


static PyObject *impl_direct$fsm$StatePush$$$function__41_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_l = python_pars[1];
    struct Nuitka_FrameObject *frame_a739fdac7b965ee1bd363d1095f39aad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a739fdac7b965ee1bd363d1095f39aad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a739fdac7b965ee1bd363d1095f39aad)) {
        Py_XDECREF(cache_frame_a739fdac7b965ee1bd363d1095f39aad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a739fdac7b965ee1bd363d1095f39aad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a739fdac7b965ee1bd363d1095f39aad = MAKE_FUNCTION_FRAME(tstate, codeobj_a739fdac7b965ee1bd363d1095f39aad, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a739fdac7b965ee1bd363d1095f39aad->m_type_description == NULL);
    frame_a739fdac7b965ee1bd363d1095f39aad = cache_frame_a739fdac7b965ee1bd363d1095f39aad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a739fdac7b965ee1bd363d1095f39aad);
    assert(Py_REFCNT(frame_a739fdac7b965ee1bd363d1095f39aad) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_l);
        tmp_expression_value_1 = par_l;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_a739fdac7b965ee1bd363d1095f39aad->m_frame.f_lineno = 357;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
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
        exception_tb = MAKE_TRACEBACK(frame_a739fdac7b965ee1bd363d1095f39aad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a739fdac7b965ee1bd363d1095f39aad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a739fdac7b965ee1bd363d1095f39aad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a739fdac7b965ee1bd363d1095f39aad,
        type_description_1,
        par_value,
        par_l
    );


    // Release cached frame if used for exception.
    if (frame_a739fdac7b965ee1bd363d1095f39aad == cache_frame_a739fdac7b965ee1bd363d1095f39aad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a739fdac7b965ee1bd363d1095f39aad);
        cache_frame_a739fdac7b965ee1bd363d1095f39aad = NULL;
    }

    assertFrameObject(frame_a739fdac7b965ee1bd363d1095f39aad);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__42___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_873bb8d271c41887a6a6122ce33ef4f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_873bb8d271c41887a6a6122ce33ef4f6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_873bb8d271c41887a6a6122ce33ef4f6)) {
        Py_XDECREF(cache_frame_873bb8d271c41887a6a6122ce33ef4f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_873bb8d271c41887a6a6122ce33ef4f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_873bb8d271c41887a6a6122ce33ef4f6 = MAKE_FUNCTION_FRAME(tstate, codeobj_873bb8d271c41887a6a6122ce33ef4f6, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_873bb8d271c41887a6a6122ce33ef4f6->m_type_description == NULL);
    frame_873bb8d271c41887a6a6122ce33ef4f6 = cache_frame_873bb8d271c41887a6a6122ce33ef4f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_873bb8d271c41887a6a6122ce33ef4f6);
    assert(Py_REFCNT(frame_873bb8d271c41887a6a6122ce33ef4f6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_873bb8d271c41887a6a6122ce33ef4f6->m_frame.f_lineno = 377;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_args_element_value_2 = par_event;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_873bb8d271c41887a6a6122ce33ef4f6->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
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
        exception_tb = MAKE_TRACEBACK(frame_873bb8d271c41887a6a6122ce33ef4f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_873bb8d271c41887a6a6122ce33ef4f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_873bb8d271c41887a6a6122ce33ef4f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_873bb8d271c41887a6a6122ce33ef4f6,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_873bb8d271c41887a6a6122ce33ef4f6 == cache_frame_873bb8d271c41887a6a6122ce33ef4f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_873bb8d271c41887a6a6122ce33ef4f6);
        cache_frame_873bb8d271c41887a6a6122ce33ef4f6 = NULL;
    }

    assertFrameObject(frame_873bb8d271c41887a6a6122ce33ef4f6);

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


static PyObject *impl_direct$fsm$StatePush$$$function__43_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91c1cc6e17ecffc7a38ef49319947a20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91c1cc6e17ecffc7a38ef49319947a20 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91c1cc6e17ecffc7a38ef49319947a20)) {
        Py_XDECREF(cache_frame_91c1cc6e17ecffc7a38ef49319947a20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91c1cc6e17ecffc7a38ef49319947a20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91c1cc6e17ecffc7a38ef49319947a20 = MAKE_FUNCTION_FRAME(tstate, codeobj_91c1cc6e17ecffc7a38ef49319947a20, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91c1cc6e17ecffc7a38ef49319947a20->m_type_description == NULL);
    frame_91c1cc6e17ecffc7a38ef49319947a20 = cache_frame_91c1cc6e17ecffc7a38ef49319947a20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_91c1cc6e17ecffc7a38ef49319947a20);
    assert(Py_REFCNT(frame_91c1cc6e17ecffc7a38ef49319947a20) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_91c1cc6e17ecffc7a38ef49319947a20->m_frame.f_lineno = 381;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_91c1cc6e17ecffc7a38ef49319947a20->m_frame.f_lineno = 382;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
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
        exception_tb = MAKE_TRACEBACK(frame_91c1cc6e17ecffc7a38ef49319947a20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91c1cc6e17ecffc7a38ef49319947a20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91c1cc6e17ecffc7a38ef49319947a20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91c1cc6e17ecffc7a38ef49319947a20,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91c1cc6e17ecffc7a38ef49319947a20 == cache_frame_91c1cc6e17ecffc7a38ef49319947a20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91c1cc6e17ecffc7a38ef49319947a20);
        cache_frame_91c1cc6e17ecffc7a38ef49319947a20 = NULL;
    }

    assertFrameObject(frame_91c1cc6e17ecffc7a38ef49319947a20);

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


static PyObject *impl_direct$fsm$StatePush$$$function__44___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *par_index = python_pars[2];
    struct Nuitka_FrameObject *frame_e0e29e668a5c584c0de672de67966c28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e0e29e668a5c584c0de672de67966c28 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0e29e668a5c584c0de672de67966c28)) {
        Py_XDECREF(cache_frame_e0e29e668a5c584c0de672de67966c28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0e29e668a5c584c0de672de67966c28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0e29e668a5c584c0de672de67966c28 = MAKE_FUNCTION_FRAME(tstate, codeobj_e0e29e668a5c584c0de672de67966c28, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0e29e668a5c584c0de672de67966c28->m_type_description == NULL);
    frame_e0e29e668a5c584c0de672de67966c28 = cache_frame_e0e29e668a5c584c0de672de67966c28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e0e29e668a5c584c0de672de67966c28);
    assert(Py_REFCNT(frame_e0e29e668a5c584c0de672de67966c28) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = Py_None;
        frame_e0e29e668a5c584c0de672de67966c28->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_index);
        tmp_assattr_value_1 = par_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_args_element_value_3 = par_event;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[48]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e0e29e668a5c584c0de672de67966c28->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
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
        exception_tb = MAKE_TRACEBACK(frame_e0e29e668a5c584c0de672de67966c28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0e29e668a5c584c0de672de67966c28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0e29e668a5c584c0de672de67966c28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0e29e668a5c584c0de672de67966c28,
        type_description_1,
        par_self,
        par_event,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_e0e29e668a5c584c0de672de67966c28 == cache_frame_e0e29e668a5c584c0de672de67966c28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0e29e668a5c584c0de672de67966c28);
        cache_frame_e0e29e668a5c584c0de672de67966c28 = NULL;
    }

    assertFrameObject(frame_e0e29e668a5c584c0de672de67966c28);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__45_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ec4c8050aeffa4f8bbbed0b844b11310;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ec4c8050aeffa4f8bbbed0b844b11310 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec4c8050aeffa4f8bbbed0b844b11310)) {
        Py_XDECREF(cache_frame_ec4c8050aeffa4f8bbbed0b844b11310);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec4c8050aeffa4f8bbbed0b844b11310 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec4c8050aeffa4f8bbbed0b844b11310 = MAKE_FUNCTION_FRAME(tstate, codeobj_ec4c8050aeffa4f8bbbed0b844b11310, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec4c8050aeffa4f8bbbed0b844b11310->m_type_description == NULL);
    frame_ec4c8050aeffa4f8bbbed0b844b11310 = cache_frame_ec4c8050aeffa4f8bbbed0b844b11310;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ec4c8050aeffa4f8bbbed0b844b11310);
    assert(Py_REFCNT(frame_ec4c8050aeffa4f8bbbed0b844b11310) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ec4c8050aeffa4f8bbbed0b844b11310->m_frame.f_lineno = 392;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_self);
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_ec4c8050aeffa4f8bbbed0b844b11310->m_frame.f_lineno = 394;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
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
        exception_tb = MAKE_TRACEBACK(frame_ec4c8050aeffa4f8bbbed0b844b11310, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec4c8050aeffa4f8bbbed0b844b11310->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec4c8050aeffa4f8bbbed0b844b11310, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec4c8050aeffa4f8bbbed0b844b11310,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ec4c8050aeffa4f8bbbed0b844b11310 == cache_frame_ec4c8050aeffa4f8bbbed0b844b11310) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec4c8050aeffa4f8bbbed0b844b11310);
        cache_frame_ec4c8050aeffa4f8bbbed0b844b11310 = NULL;
    }

    assertFrameObject(frame_ec4c8050aeffa4f8bbbed0b844b11310);

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


static PyObject *impl_direct$fsm$StatePush$$$function__46__handleEvent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_bda353d81ab4fa6c2ab2ea45d10712c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0)) {
        Py_XDECREF(cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_bda353d81ab4fa6c2ab2ea45d10712c0, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0->m_type_description == NULL);
    frame_bda353d81ab4fa6c2ab2ea45d10712c0 = cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bda353d81ab4fa6c2ab2ea45d10712c0);
    assert(Py_REFCNT(frame_bda353d81ab4fa6c2ab2ea45d10712c0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_expression_value_2 = par_args;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[47]);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bda353d81ab4fa6c2ab2ea45d10712c0->m_frame.f_lineno = 397;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
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
        exception_tb = MAKE_TRACEBACK(frame_bda353d81ab4fa6c2ab2ea45d10712c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bda353d81ab4fa6c2ab2ea45d10712c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bda353d81ab4fa6c2ab2ea45d10712c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bda353d81ab4fa6c2ab2ea45d10712c0,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_bda353d81ab4fa6c2ab2ea45d10712c0 == cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0);
        cache_frame_bda353d81ab4fa6c2ab2ea45d10712c0 = NULL;
    }

    assertFrameObject(frame_bda353d81ab4fa6c2ab2ea45d10712c0);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__47___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    PyObject *par_object = python_pars[2];
    PyObject *par_attrName = python_pars[3];
    struct Nuitka_FrameObject *frame_6982a38f8c3da32f269afa9e1012f467;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6982a38f8c3da32f269afa9e1012f467 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6982a38f8c3da32f269afa9e1012f467)) {
        Py_XDECREF(cache_frame_6982a38f8c3da32f269afa9e1012f467);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6982a38f8c3da32f269afa9e1012f467 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6982a38f8c3da32f269afa9e1012f467 = MAKE_FUNCTION_FRAME(tstate, codeobj_6982a38f8c3da32f269afa9e1012f467, module_direct$fsm$StatePush, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6982a38f8c3da32f269afa9e1012f467->m_type_description == NULL);
    frame_6982a38f8c3da32f269afa9e1012f467 = cache_frame_6982a38f8c3da32f269afa9e1012f467;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6982a38f8c3da32f269afa9e1012f467);
    assert(Py_REFCNT(frame_6982a38f8c3da32f269afa9e1012f467) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_object);
        tmp_assattr_value_1 = par_object;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_attrName);
        tmp_assattr_value_2 = par_attrName;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_source);
        tmp_args_element_value_2 = par_source;
        frame_6982a38f8c3da32f269afa9e1012f467->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_6982a38f8c3da32f269afa9e1012f467->m_frame.f_lineno = 404;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[4]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6982a38f8c3da32f269afa9e1012f467, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6982a38f8c3da32f269afa9e1012f467->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6982a38f8c3da32f269afa9e1012f467, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6982a38f8c3da32f269afa9e1012f467,
        type_description_1,
        par_self,
        par_source,
        par_object,
        par_attrName
    );


    // Release cached frame if used for exception.
    if (frame_6982a38f8c3da32f269afa9e1012f467 == cache_frame_6982a38f8c3da32f269afa9e1012f467) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6982a38f8c3da32f269afa9e1012f467);
        cache_frame_6982a38f8c3da32f269afa9e1012f467 = NULL;
    }

    assertFrameObject(frame_6982a38f8c3da32f269afa9e1012f467);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);
    CHECK_OBJECT(par_attrName);
    Py_DECREF(par_attrName);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);
    CHECK_OBJECT(par_attrName);
    Py_DECREF(par_attrName);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$fsm$StatePush$$$function__48__handleStateChange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51c3fbfd955649dc6f4cd34ee72e6a53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53)) {
        Py_XDECREF(cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53 = MAKE_FUNCTION_FRAME(tstate, codeobj_51c3fbfd955649dc6f4cd34ee72e6a53, module_direct$fsm$StatePush, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53->m_type_description == NULL);
    frame_51c3fbfd955649dc6f4cd34ee72e6a53 = cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_51c3fbfd955649dc6f4cd34ee72e6a53);
    assert(Py_REFCNT(frame_51c3fbfd955649dc6f4cd34ee72e6a53) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[49]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_name_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);
            Py_DECREF(tmp_name_value_1);

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_1, tmp_name_value_1, tmp_value_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_name_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_51c3fbfd955649dc6f4cd34ee72e6a53->m_frame.f_lineno = 408;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_51c3fbfd955649dc6f4cd34ee72e6a53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51c3fbfd955649dc6f4cd34ee72e6a53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51c3fbfd955649dc6f4cd34ee72e6a53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51c3fbfd955649dc6f4cd34ee72e6a53,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_51c3fbfd955649dc6f4cd34ee72e6a53 == cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53);
        cache_frame_51c3fbfd955649dc6f4cd34ee72e6a53 = NULL;
    }

    assertFrameObject(frame_51c3fbfd955649dc6f4cd34ee72e6a53);

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



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__10__finishInit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__10__finishInit,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_3752b290e57c78fefe31d81fc70f639a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__11_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__11_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_a2c2c1e22be5bfc3d72d388be893b458,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__12__subscribeTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__12__subscribeTo,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_1ff34590802cdcf532a491794678082a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__13__unsubscribe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__13__unsubscribe,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_6f4b64ee5825c424562dc063cffbda37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__14__recvStatePush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_ee1f852220b6f6036ad59a403a783fc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__15_set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__15_set,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_fbd7a214a792696c34df5aef78c12b6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__16_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__16_get,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_f0645304f4a014e5f6a3f058748a3b2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__17___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__17___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_cf7bccdc3ef65b5231d397e03e630872,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__18_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__18_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_47a97a74c74c677794ce06ecd7b72d77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__19__recvStatePush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__19__recvStatePush,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_f72924752796edb266725a6350dc3bba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__1___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_0405660b1b3f21da855794c0f160fec8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__20___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__20___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_e176d812f58414a4f3117206739a4fd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__21_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__21_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_f26f7b043664d0a2e953d5a22961e671,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__22__subscribeTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__22__subscribeTo,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_4b95b4cf731c84fa1179f912399fb23c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__23__unsubscribe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__23__unsubscribe,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_2c34916705f9505543d3f24ab81e6f1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__24__recvStatePush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__24__recvStatePush,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_0db193aafb92c6785ab15ef10c3af368,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__25__recvMultiStatePush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_ea766a03d654f7f72fa39f86b9656800,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__26___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__26___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_f4d759c9ea2333f915f6aae09fb8a4ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__27_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__27_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_f4925df8ea877f1ba053d6d7be03c2c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__28_getState() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__28_getState,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_1ac8064d3bb3c3a7b6bb645b79bd24ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__29__recvMultiStatePush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__29__recvMultiStatePush,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_e205066aee9324be155a5d348ddd16d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__2_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__2_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_e49a24fc1f1793741f7e3576e2d1cc91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__30__handleStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__30__handleStateChange,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_3e2161f84aa7c223178c2713532e3218,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__31_handler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__31_handler,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b8408c705f4056593d3f4c4abca7e204,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__32_handler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__32_handler,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_257b377dacd7abd22e6b3af2725a768e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__33___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__33___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_d6561ddbc5c9d199860469befa7ca4cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__34_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__34_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_4666dcb202c9ee7d35e6d654c44389a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__35__handlePotentialStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__35__handlePotentialStateChange,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_a0976b4805c2b4df0cd27438ac202e3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__36__handleStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__36__handleStateChange,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_723d0f3f0247c24af2274186ecffb7c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__37_enter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__37_enter,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d4ea9032af4cdc22c1385b9c711bb0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__38_exit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__38_exit,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68e6162aab34054e959ec53b2bc95677,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__39___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__39___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_6ed9d25463a9ff96b9a7b66db21a1f23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__3_getState() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__3_getState,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_6da79eb2cbc4b8657fd75d7060e06ebd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__40_sendPulse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__40_sendPulse,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_9dfaa7b3e2d46d021217240dce5b0328,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__41_handler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__41_handler,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a739fdac7b965ee1bd363d1095f39aad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__42___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__42___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_873bb8d271c41887a6a6122ce33ef4f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__43_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__43_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_91c1cc6e17ecffc7a38ef49319947a20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__44___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__44___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_e0e29e668a5c584c0de672de67966c28,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__45_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__45_destroy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_ec4c8050aeffa4f8bbbed0b844b11310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__46__handleEvent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__46__handleEvent,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_bda353d81ab4fa6c2ab2ea45d10712c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__47___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__47___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_6982a38f8c3da32f269afa9e1012f467,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__48__handleStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__48__handleStateChange,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_51c3fbfd955649dc6f4cd34ee72e6a53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__4_pushCurrentState() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__4_pushCurrentState,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_bc36b17eebf4b4983ef1e4f658ec1cbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__5__addSubscription() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__5__addSubscription,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_7e01409383f2d47f3e3437d6890a2cfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__6__removeSubscription() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__6__removeSubscription,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_25c3ebbd8725fd7283bfc69a97dfcd11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__7__handlePotentialStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__7__handlePotentialStateChange,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_21ca2070fefdc9f6025a307ca3ec36e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__8__handleStateChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__8__handleStateChange,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_3dd09eb908a37876303dff0c917d5098,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$fsm$StatePush$$$function__9___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$fsm$StatePush$$$function__9___init__,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_9ad00c82bf654d6347d13dc5bb846838,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$fsm$StatePush,
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

function_impl_code functable_direct$fsm$StatePush[] = {
    impl_direct$fsm$StatePush$$$function__1___init__,
    impl_direct$fsm$StatePush$$$function__2_destroy,
    impl_direct$fsm$StatePush$$$function__3_getState,
    impl_direct$fsm$StatePush$$$function__4_pushCurrentState,
    impl_direct$fsm$StatePush$$$function__5__addSubscription,
    impl_direct$fsm$StatePush$$$function__6__removeSubscription,
    impl_direct$fsm$StatePush$$$function__7__handlePotentialStateChange,
    impl_direct$fsm$StatePush$$$function__8__handleStateChange,
    impl_direct$fsm$StatePush$$$function__9___init__,
    impl_direct$fsm$StatePush$$$function__10__finishInit,
    impl_direct$fsm$StatePush$$$function__11_destroy,
    impl_direct$fsm$StatePush$$$function__12__subscribeTo,
    impl_direct$fsm$StatePush$$$function__13__unsubscribe,
    NULL,
    impl_direct$fsm$StatePush$$$function__15_set,
    impl_direct$fsm$StatePush$$$function__16_get,
    impl_direct$fsm$StatePush$$$function__17___init__,
    impl_direct$fsm$StatePush$$$function__18_destroy,
    impl_direct$fsm$StatePush$$$function__19__recvStatePush,
    impl_direct$fsm$StatePush$$$function__20___init__,
    impl_direct$fsm$StatePush$$$function__21_destroy,
    impl_direct$fsm$StatePush$$$function__22__subscribeTo,
    impl_direct$fsm$StatePush$$$function__23__unsubscribe,
    impl_direct$fsm$StatePush$$$function__24__recvStatePush,
    NULL,
    impl_direct$fsm$StatePush$$$function__26___init__,
    impl_direct$fsm$StatePush$$$function__27_destroy,
    impl_direct$fsm$StatePush$$$function__28_getState,
    impl_direct$fsm$StatePush$$$function__29__recvMultiStatePush,
    impl_direct$fsm$StatePush$$$function__30__handleStateChange,
    impl_direct$fsm$StatePush$$$function__31_handler,
    impl_direct$fsm$StatePush$$$function__32_handler,
    impl_direct$fsm$StatePush$$$function__33___init__,
    impl_direct$fsm$StatePush$$$function__34_destroy,
    impl_direct$fsm$StatePush$$$function__35__handlePotentialStateChange,
    impl_direct$fsm$StatePush$$$function__36__handleStateChange,
    impl_direct$fsm$StatePush$$$function__37_enter,
    impl_direct$fsm$StatePush$$$function__38_exit,
    impl_direct$fsm$StatePush$$$function__39___init__,
    impl_direct$fsm$StatePush$$$function__40_sendPulse,
    impl_direct$fsm$StatePush$$$function__41_handler,
    impl_direct$fsm$StatePush$$$function__42___init__,
    impl_direct$fsm$StatePush$$$function__43_destroy,
    impl_direct$fsm$StatePush$$$function__44___init__,
    impl_direct$fsm$StatePush$$$function__45_destroy,
    impl_direct$fsm$StatePush$$$function__46__handleEvent,
    impl_direct$fsm$StatePush$$$function__47___init__,
    impl_direct$fsm$StatePush$$$function__48__handleStateChange,
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

    function_impl_code *current = functable_direct$fsm$StatePush;
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

    if (offset > sizeof(functable_direct$fsm$StatePush) || offset < 0) {
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
        functable_direct$fsm$StatePush[offset],
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
        module_direct$fsm$StatePush,
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
PyObject *modulecode_direct$fsm$StatePush(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.fsm.StatePush");

    // Store the module for future use.
    module_direct$fsm$StatePush = module;

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
        PRINT_STRING("direct.fsm.StatePush: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.fsm.StatePush: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$fsm$StatePush\n");

    moduledict_direct$fsm$StatePush = MODULE_DICT(module_direct$fsm$StatePush);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$fsm$StatePush,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$fsm$StatePush,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[181]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$fsm$StatePush,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$fsm$StatePush,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$fsm$StatePush,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$fsm$StatePush);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$fsm$StatePush);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_197534d1cbaf52c71ea9def4ba677e4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__3_StateVar_91 = NULL;
    struct Nuitka_FrameObject *frame_e577b0005264986c0863727643c8efc5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108 = NULL;
    struct Nuitka_FrameObject *frame_bea3602c2aa55979b7432f86a206e6dd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__6_FunctionCall_192 = NULL;
    struct Nuitka_FrameObject *frame_62aaeffa88020e7dd11c622cdac3787a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__7_EnterExit_294 = NULL;
    struct Nuitka_FrameObject *frame_b024eccb2efbcb69a2a26464f0ec065b_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__8_Pulse_345 = NULL;
    struct Nuitka_FrameObject *frame_7ec99f8147fa16a94f00531ffc165aec_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_direct$fsm$StatePush$$$class__9_EventPulse_374 = NULL;
    struct Nuitka_FrameObject *frame_947c750eb67680faed92a1552fb7526a_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__10_EventArgument_384 = NULL;
    struct Nuitka_FrameObject *frame_f240f2011be05da4f55717ee599a0e0c_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
    PyObject *locals_direct$fsm$StatePush$$$class__11_AttrSetter_399 = NULL;
    struct Nuitka_FrameObject *frame_b540cce37c635a045048187bb355207a_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_2);
    }
    frame_197534d1cbaf52c71ea9def4ba677e4b = MAKE_MODULE_FRAME(codeobj_197534d1cbaf52c71ea9def4ba677e4b, module_direct$fsm$StatePush);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_197534d1cbaf52c71ea9def4ba677e4b);
    assert(Py_REFCNT(frame_197534d1cbaf52c71ea9def4ba677e4b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[55], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST6(mod_consts[57]);
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[59];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$fsm$StatePush;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[60];
        tmp_level_value_1 = mod_consts[61];
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$fsm$StatePush,
                mod_consts[62],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__2_destroy();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__3_getState();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__4_pushCurrentState();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__5__addSubscription();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__6__removeSubscription();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[14], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__7__handlePotentialStateChange();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__8__handleStateChange();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[15];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 10;
            tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10);
        locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10 = NULL;
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

        Py_DECREF(locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10);
        locals_direct$fsm$StatePush$$$class__1_PushesStateChanges_10 = NULL;
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
        exception_lineno = 10;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        assert(!(tmp_called_value_2 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 50;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[40]);

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_10);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 51;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[61];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

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
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[21]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[76]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[76]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__9___init__();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__10__finishInit();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__11_destroy();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__12__subscribeTo();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__13__unsubscribe();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__14__recvStatePush();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[18];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 55;
            tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_13 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55);
        locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55 = NULL;
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

        Py_DECREF(locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55);
        locals_direct$fsm$StatePush$$$class__2_ReceivesStateChanges_55 = NULL;
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
        exception_lineno = 55;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
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
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        assert(!(tmp_called_value_4 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 87;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[83]);

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_15);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 88;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[21]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[84]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 89;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_1 = tmp_class_creation_3__bases;
        tmp_subscript_value_1 = mod_consts[61];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_2 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_3 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[85]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_tuple_element_4 = mod_consts[86];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_4 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 91;
        tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_4 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_5 = tmp_class_creation_3__metaclass;
        tmp_name_value_2 = mod_consts[3];
        tmp_default_value_1 = mod_consts[89];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[3]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_1;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_direct$fsm$StatePush$$$class__3_StateVar_91 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__3_StateVar_91, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__3_StateVar_91, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        frame_e577b0005264986c0863727643c8efc5_2 = MAKE_CLASS_FRAME(tstate, codeobj_e577b0005264986c0863727643c8efc5, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e577b0005264986c0863727643c8efc5_2);
        assert(Py_REFCNT(frame_e577b0005264986c0863727643c8efc5_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__15_set();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__3_StateVar_91, mod_consts[90], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__16_get();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__3_StateVar_91, mod_consts[92], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e577b0005264986c0863727643c8efc5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e577b0005264986c0863727643c8efc5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e577b0005264986c0863727643c8efc5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e577b0005264986c0863727643c8efc5_2,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_e577b0005264986c0863727643c8efc5_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__3_StateVar_91, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[86];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_6 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_direct$fsm$StatePush$$$class__3_StateVar_91;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 91;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_22 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__3_StateVar_91);
        locals_direct$fsm$StatePush$$$class__3_StateVar_91 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF(locals_direct$fsm$StatePush$$$class__3_StateVar_91);
        locals_direct$fsm$StatePush$$$class__3_StateVar_91 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 91;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_22);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 101;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[40]);

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_24);
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[92]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 102;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[61];
        tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 102;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 103;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[92]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 104;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[96];
        tmp_operand_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_lineno = 104;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 105;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[21]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[95]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 106;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_25);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_9 = tmp_class_creation_4__bases;
        tmp_subscript_value_2 = mod_consts[61];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_2 = tmp_class_creation_4__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_10 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_11 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[85]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_tuple_element_8 = mod_consts[38];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_8 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 108;
        tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_12 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_13 = tmp_class_creation_4__metaclass;
        tmp_name_value_3 = mod_consts[3];
        tmp_default_value_2 = mod_consts[89];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[3]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_2;
        exception_lineno = 108;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_30;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        frame_bea3602c2aa55979b7432f86a206e6dd_3 = MAKE_CLASS_FRAME(tstate, codeobj_bea3602c2aa55979b7432f86a206e6dd, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bea3602c2aa55979b7432f86a206e6dd_3);
        assert(Py_REFCNT(frame_bea3602c2aa55979b7432f86a206e6dd_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__17___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__18_destroy();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__19__recvStatePush();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bea3602c2aa55979b7432f86a206e6dd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bea3602c2aa55979b7432f86a206e6dd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bea3602c2aa55979b7432f86a206e6dd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bea3602c2aa55979b7432f86a206e6dd_3,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_bea3602c2aa55979b7432f86a206e6dd_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_12;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_10 = mod_consts[38];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_10 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 108;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_31 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108);
        locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108);
        locals_direct$fsm$StatePush$$$class__4_StateChangeNode_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 108;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_31);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 124;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[40]);

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_33);
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[92]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 125;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[61];
        tmp_operand_value_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_6;
        tmp_raise_type_6 = PyExc_AssertionError;
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_lineno = 125;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 126;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_34);
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        assert(!(tmp_called_instance_6 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 127;
        tmp_cmp_expr_left_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[17]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[61];
        tmp_operand_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_operand_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_7;
        tmp_raise_type_7 = PyExc_AssertionError;
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_lineno = 127;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_11:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 128;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[92]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 129;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
        Py_DECREF(tmp_called_value_15);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[96];
        tmp_operand_value_8 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_operand_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_8;
        tmp_raise_type_8 = PyExc_AssertionError;
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_lineno = 129;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 130;
        tmp_cmp_expr_left_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[17]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[96];
        tmp_operand_value_9 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_operand_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        Py_DECREF(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_9;
        tmp_raise_type_9 = PyExc_AssertionError;
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_lineno = 130;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 131;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_35);
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        assert(!(tmp_called_instance_9 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 132;
        tmp_cmp_expr_left_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[17]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = mod_consts[96];
        tmp_operand_value_10 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_operand_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_10;
        tmp_raise_type_10 = PyExc_AssertionError;
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_6;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 133;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 134;
        tmp_cmp_expr_left_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[17]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = mod_consts[103];
        tmp_operand_value_11 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_operand_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        Py_DECREF(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_11;
        tmp_raise_type_11 = PyExc_AssertionError;
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_lineno = 134;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 135;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_36);
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        assert(!(tmp_called_instance_12 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 136;
        tmp_cmp_expr_left_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[17]);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = mod_consts[103];
        tmp_operand_value_12 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_operand_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        Py_DECREF(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_12;
        tmp_raise_type_12 = PyExc_AssertionError;
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_lineno = 136;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_16:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_7;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 137;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[105], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 138;
        tmp_cmp_expr_left_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[17]);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = mod_consts[106];
        tmp_operand_value_13 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_operand_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        Py_DECREF(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_13;
        tmp_raise_type_13 = PyExc_AssertionError;
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_lineno = 138;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_17:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 139;
        tmp_cmp_expr_left_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[17]);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = mod_consts[106];
        tmp_operand_value_14 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_operand_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        Py_DECREF(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_14;
        tmp_raise_type_14 = PyExc_AssertionError;
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_lineno = 139;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_18:;
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_8;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 140;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[21]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_9;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 141;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[21]);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_10;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 142;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[21]);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_11;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 143;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[21]);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[104]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 144;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[101]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[101]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 145;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[100]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 146;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[95]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 147;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__20___init__();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__21_destroy();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__22__subscribeTo();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__23__unsubscribe();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__24__recvStatePush();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__25__recvMultiStatePush();

        tmp_res = PyDict_SetItem(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_18 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[27];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 149;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_39 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149);
        locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149 = NULL;
        goto try_return_handler_14;
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

        Py_DECREF(locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149);
        locals_direct$fsm$StatePush$$$class__5_ReceivesMultipleStateChanges_149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 149;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_39);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        assert(!(tmp_called_value_19 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 183;
        tmp_assign_source_41 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 184;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[40]);

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 185;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[113]);

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_43);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[11]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[115];
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[11]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[103];
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_14;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 188;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_20,
            mod_consts[12],
            PyTuple_GET_ITEM(mod_consts[116], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_15;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 189;
        tmp_call_result_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[21]);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[84]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 190;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_44, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_44);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_45 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_19 = tmp_class_creation_6__bases;
        tmp_subscript_value_3 = mod_consts[61];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_3 = tmp_class_creation_6__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_20 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_21 = tmp_class_creation_6__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[85]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_tuple_element_13 = mod_consts[117];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_13 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_6__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 192;
        tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_22 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_23 = tmp_class_creation_6__metaclass;
        tmp_name_value_4 = mod_consts[3];
        tmp_default_value_3 = mod_consts[89];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[3]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_3;
        exception_lineno = 192;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_49;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_direct$fsm$StatePush$$$class__6_FunctionCall_192 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_18;
        }
        frame_62aaeffa88020e7dd11c622cdac3787a_4 = MAKE_CLASS_FRAME(tstate, codeobj_62aaeffa88020e7dd11c622cdac3787a, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_62aaeffa88020e7dd11c622cdac3787a_4);
        assert(Py_REFCNT(frame_62aaeffa88020e7dd11c622cdac3787a_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__26___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__27_destroy();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__28_getState();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__29__recvMultiStatePush();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__30__handleStateChange();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_62aaeffa88020e7dd11c622cdac3787a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_62aaeffa88020e7dd11c622cdac3787a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_62aaeffa88020e7dd11c622cdac3787a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_62aaeffa88020e7dd11c622cdac3787a_4,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_62aaeffa88020e7dd11c622cdac3787a_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_18;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_18;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_25 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_15 = mod_consts[117];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_15 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_direct$fsm$StatePush$$$class__6_FunctionCall_192;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 192;
            tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_50 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192);
        locals_direct$fsm$StatePush$$$class__6_FunctionCall_192 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__6_FunctionCall_192);
        locals_direct$fsm$StatePush$$$class__6_FunctionCall_192 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 192;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_50);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_tuple_element_16 == NULL));
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_16);


        tmp_assign_source_53 = MAKE_FUNCTION_direct$fsm$StatePush$$$function__31_handler(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_53);
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_16 == NULL)) {
            tmp_cmp_expr_left_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_cmp_expr_left_16 == NULL));
        tmp_cmp_expr_right_16 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_16 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_operand_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        Py_DECREF(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_16;
        tmp_raise_type_16 = PyExc_AssertionError;
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_22:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 257;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[40]);

        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        assert(!(tmp_args_element_value_9 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_55);
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        tmp_cmp_expr_left_17 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_17 == NULL)) {
            tmp_cmp_expr_left_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_17 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_operand_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        Py_DECREF(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_17;
        tmp_raise_type_17 = PyExc_AssertionError;
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_lineno = 259;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_23:;
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_16;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 260;
        tmp_call_result_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[69]);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        tmp_cmp_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_18 == NULL)) {
            tmp_cmp_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_18 = MAKE_LIST1(mod_consts[61]);
        tmp_operand_value_18 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_right_18);
        if (tmp_operand_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        Py_DECREF(tmp_operand_value_18);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_18;
        tmp_raise_type_18 = PyExc_AssertionError;
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_lineno = 261;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_24:;
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_17;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 262;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_23,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_19 == NULL)) {
            tmp_cmp_expr_left_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = MAKE_LIST2(mod_consts[61],mod_consts[96]);
        tmp_operand_value_19 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_right_19);
        if (tmp_operand_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        Py_DECREF(tmp_operand_value_19);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_raise_type_19;
        tmp_raise_type_19 = PyExc_AssertionError;
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_lineno = 263;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_25:;
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_18;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 264;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_24,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        tmp_cmp_expr_left_20 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_20 == NULL)) {
            tmp_cmp_expr_left_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_20 = MAKE_LIST3(mod_consts[61],mod_consts[96],mod_consts[103]);
        tmp_operand_value_20 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        Py_DECREF(tmp_cmp_expr_right_20);
        if (tmp_operand_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        Py_DECREF(tmp_operand_value_20);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_20;
        tmp_raise_type_20 = PyExc_AssertionError;
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_lineno = 265;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_26:;
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_19;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 266;
        tmp_call_result_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[21]);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_20;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 267;
        tmp_call_result_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[21]);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[125]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[125]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 268;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[95]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 269;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[124]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 270;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[123]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 271;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = Py_None;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_tuple_element_17 == NULL));
        PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_17);


        tmp_assign_source_57 = MAKE_FUNCTION_direct$fsm$StatePush$$$function__32_handler(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_57);
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        tmp_cmp_expr_left_21 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_21 == NULL)) {
            tmp_cmp_expr_left_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_cmp_expr_left_21 == NULL));
        tmp_cmp_expr_right_21 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_21 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_right_21);
        if (tmp_operand_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        Py_DECREF(tmp_operand_value_21);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_21;
        tmp_raise_type_21 = PyExc_AssertionError;
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_lineno = 276;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_27:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 277;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[40]);

        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 278;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[116]);

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_30;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        assert(!(tmp_kw_call_dict_value_0_1 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 279;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_30, args, kw_values, mod_consts[127]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_60);
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_22 == NULL)) {
            tmp_cmp_expr_left_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_22 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_22 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_right_22);
        if (tmp_operand_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        Py_DECREF(tmp_operand_value_22);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_22;
        tmp_raise_type_22 = PyExc_AssertionError;
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_28:;
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_21;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 281;
        tmp_call_result_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[69]);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        tmp_cmp_expr_left_23 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_23 == NULL)) {
            tmp_cmp_expr_left_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_23 = MAKE_LIST1(mod_consts[128]);
        tmp_operand_value_23 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_right_23);
        if (tmp_operand_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        Py_DECREF(tmp_operand_value_23);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_32 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_23;
        tmp_raise_type_23 = PyExc_AssertionError;
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_lineno = 282;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_29:;
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_22;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 283;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_28,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        tmp_cmp_expr_left_24 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_24 == NULL)) {
            tmp_cmp_expr_left_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_24 = MAKE_LIST2(mod_consts[128],mod_consts[129]);
        tmp_operand_value_24 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        Py_DECREF(tmp_cmp_expr_right_24);
        if (tmp_operand_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        Py_DECREF(tmp_operand_value_24);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_24;
        tmp_raise_type_24 = PyExc_AssertionError;
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_lineno = 284;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_30:;
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_23;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 285;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_29,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        tmp_cmp_expr_left_25 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_25 == NULL)) {
            tmp_cmp_expr_left_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_25 = MAKE_LIST3(mod_consts[128],mod_consts[129],mod_consts[130]);
        tmp_operand_value_25 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        Py_DECREF(tmp_cmp_expr_right_25);
        if (tmp_operand_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        Py_DECREF(tmp_operand_value_25);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_25;
        tmp_raise_type_25 = PyExc_AssertionError;
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_lineno = 286;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_31:;
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_24;
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 287;
        tmp_call_result_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[21]);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_call_result_25;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 288;
        tmp_call_result_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_31, mod_consts[21]);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[125]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[125]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 289;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[95]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 290;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[124]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 291;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[123]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 292;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_62 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_condition_result_35 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_25 = tmp_class_creation_7__bases;
        tmp_subscript_value_4 = mod_consts[61];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_4 = tmp_class_creation_7__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_26 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_condition_result_36 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_27 = tmp_class_creation_7__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[85]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_tuple_element_19 = mod_consts[131];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_19 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_7__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 294;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_28 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_29 = tmp_class_creation_7__metaclass;
        tmp_name_value_5 = mod_consts[3];
        tmp_default_value_4 = mod_consts[89];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_8 = tmp_class_creation_7__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[3]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_4;
        exception_lineno = 294;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_33:;
    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_66;
    }
    branch_end_32:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_direct$fsm$StatePush$$$class__7_EnterExit_294 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_21;
        }
        frame_b024eccb2efbcb69a2a26464f0ec065b_5 = MAKE_CLASS_FRAME(tstate, codeobj_b024eccb2efbcb69a2a26464f0ec065b, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b024eccb2efbcb69a2a26464f0ec065b_5);
        assert(Py_REFCNT(frame_b024eccb2efbcb69a2a26464f0ec065b_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__33___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__34_destroy();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__35__handlePotentialStateChange();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__36__handleStateChange();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b024eccb2efbcb69a2a26464f0ec065b_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b024eccb2efbcb69a2a26464f0ec065b_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b024eccb2efbcb69a2a26464f0ec065b_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b024eccb2efbcb69a2a26464f0ec065b_5,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_b024eccb2efbcb69a2a26464f0ec065b_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_21;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_26 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_34;
            } else {
                goto branch_no_34;
            }
        }
        branch_yes_34:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__7_EnterExit_294, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_21;
        }
        branch_no_34:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_32 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_21 = mod_consts[131];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_21 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_direct$fsm$StatePush$$$class__7_EnterExit_294;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_7__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 294;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_67 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__7_EnterExit_294);
        locals_direct$fsm$StatePush$$$class__7_EnterExit_294 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__7_EnterExit_294);
        locals_direct$fsm$StatePush$$$class__7_EnterExit_294 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 294;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_67);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_22;
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_tuple_element_22 == NULL));
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_22);


        tmp_assign_source_70 = MAKE_FUNCTION_direct$fsm$StatePush$$$function__37_enter(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_tuple_element_23 == NULL));
        tmp_defaults_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_23);


        tmp_assign_source_71 = MAKE_FUNCTION_direct$fsm$StatePush$$$function__38_exit(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 323;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[40]);

        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        assert(!(tmp_args_element_value_10 == NULL));
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_73);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_26;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 325;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_32,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_27;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        tmp_cmp_expr_left_27 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_27 == NULL)) {
            tmp_cmp_expr_left_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_27 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_27 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        Py_DECREF(tmp_cmp_expr_right_27);
        if (tmp_operand_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
        Py_DECREF(tmp_operand_value_27);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_27;
        tmp_raise_type_27 = PyExc_AssertionError;
        exception_type = tmp_raise_type_27;
        Py_INCREF(tmp_raise_type_27);
        exception_lineno = 326;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_35:;
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_27;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 327;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_33,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_28;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        tmp_cmp_expr_left_28 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_28 == NULL)) {
            tmp_cmp_expr_left_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_28 = MAKE_LIST1(mod_consts[96]);
        tmp_operand_value_28 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        Py_DECREF(tmp_cmp_expr_right_28);
        if (tmp_operand_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
        Py_DECREF(tmp_operand_value_28);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_raise_type_28;
        tmp_raise_type_28 = PyExc_AssertionError;
        exception_type = tmp_raise_type_28;
        Py_INCREF(tmp_raise_type_28);
        exception_lineno = 328;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_36:;
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_call_result_28;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 329;
        tmp_call_result_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_34,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_29;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        tmp_cmp_expr_left_29 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_29 == NULL)) {
            tmp_cmp_expr_left_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_29 = MAKE_LIST1(mod_consts[96]);
        tmp_operand_value_29 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        Py_DECREF(tmp_cmp_expr_right_29);
        if (tmp_operand_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_29);
        Py_DECREF(tmp_operand_value_29);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_raise_type_29;
        tmp_raise_type_29 = PyExc_AssertionError;
        exception_type = tmp_raise_type_29;
        Py_INCREF(tmp_raise_type_29);
        exception_lineno = 330;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_37:;
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_call_result_29;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 331;
        tmp_call_result_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_35,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_operand_value_30;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        tmp_cmp_expr_left_30 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_30 == NULL)) {
            tmp_cmp_expr_left_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_30 = MAKE_LIST2(mod_consts[96],mod_consts[61]);
        tmp_operand_value_30 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        Py_DECREF(tmp_cmp_expr_right_30);
        if (tmp_operand_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_30);
        Py_DECREF(tmp_operand_value_30);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_42 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_30;
        tmp_raise_type_30 = PyExc_AssertionError;
        exception_type = tmp_raise_type_30;
        Py_INCREF(tmp_raise_type_30);
        exception_lineno = 332;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_38:;
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_30;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 333;
        tmp_call_result_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_36,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_31;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        tmp_cmp_expr_left_31 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_31 == NULL)) {
            tmp_cmp_expr_left_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_31 = MAKE_LIST3(mod_consts[96],mod_consts[61],mod_consts[96]);
        tmp_operand_value_31 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        Py_DECREF(tmp_cmp_expr_right_31);
        if (tmp_operand_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_31);
        Py_DECREF(tmp_operand_value_31);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_31;
        tmp_raise_type_31 = PyExc_AssertionError;
        exception_type = tmp_raise_type_31;
        Py_INCREF(tmp_raise_type_31);
        exception_lineno = 334;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_39:;
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_31;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 335;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_37,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_operand_value_32;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        tmp_cmp_expr_left_32 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_32 == NULL)) {
            tmp_cmp_expr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_32 = MAKE_LIST4(mod_consts[139]);
        tmp_operand_value_32 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        Py_DECREF(tmp_cmp_expr_right_32);
        if (tmp_operand_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_32);
        Py_DECREF(tmp_operand_value_32);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_44 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_raise_type_32;
        tmp_raise_type_32 = PyExc_AssertionError;
        exception_type = tmp_raise_type_32;
        Py_INCREF(tmp_raise_type_32);
        exception_lineno = 336;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_40:;
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_32;
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 337;
        tmp_call_result_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_38, mod_consts[21]);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_call_result_33;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 338;
        tmp_call_result_33 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_39, mod_consts[21]);
        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[138]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[138]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 339;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[95]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 340;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[136]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[136]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 341;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[137]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 342;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[123]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 343;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_assign_source_74 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_74, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_75 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_condition_result_45 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_31 = tmp_class_creation_8__bases;
        tmp_subscript_value_5 = mod_consts[61];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_5 = tmp_class_creation_8__bases;
        tmp_assign_source_77 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_77;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_32 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_12;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_33 = tmp_class_creation_8__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[85]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_tuple_element_25 = mod_consts[43];
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_25 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_12 = tmp_class_creation_8__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 345;
        tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_12);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_33;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_34 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_operand_value_33 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_raise_type_33;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_33 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_35 = tmp_class_creation_8__metaclass;
        tmp_name_value_6 = mod_consts[3];
        tmp_default_value_5 = mod_consts[89];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_10 = tmp_class_creation_8__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[3]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_33;
        Py_INCREF(tmp_raise_type_33);
        exception_value = tmp_raise_value_5;
        exception_lineno = 345;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_42:;
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_79;
    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_80;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_direct$fsm$StatePush$$$class__8_Pulse_345 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__8_Pulse_345, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__8_Pulse_345, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_24;
        }
        frame_7ec99f8147fa16a94f00531ffc165aec_6 = MAKE_CLASS_FRAME(tstate, codeobj_7ec99f8147fa16a94f00531ffc165aec, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7ec99f8147fa16a94f00531ffc165aec_6);
        assert(Py_REFCNT(frame_7ec99f8147fa16a94f00531ffc165aec_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__39___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__8_Pulse_345, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__40_sendPulse();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__8_Pulse_345, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ec99f8147fa16a94f00531ffc165aec_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ec99f8147fa16a94f00531ffc165aec_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ec99f8147fa16a94f00531ffc165aec_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ec99f8147fa16a94f00531ffc165aec_6,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_7ec99f8147fa16a94f00531ffc165aec_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_24;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_33;
            PyObject *tmp_cmp_expr_right_33;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_33 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_33 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_43;
            } else {
                goto branch_no_43;
            }
        }
        branch_yes_43:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__8_Pulse_345, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_24;
        }
        branch_no_43:;
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_36 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_27 = mod_consts[43];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_27 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_direct$fsm$StatePush$$$class__8_Pulse_345;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_8__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 345;
            tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_81;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_80 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_80);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__8_Pulse_345);
        locals_direct$fsm$StatePush$$$class__8_Pulse_345 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__8_Pulse_345);
        locals_direct$fsm$StatePush$$$class__8_Pulse_345 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 345;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_80);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_28;
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_tuple_element_28 == NULL));
        tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_28);


        tmp_assign_source_83 = MAKE_FUNCTION_direct$fsm$StatePush$$$function__41_handler(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 358;
        tmp_assign_source_84 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        assert(!(tmp_args_element_value_14 == NULL));
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_85);
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_34;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        tmp_cmp_expr_left_34 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_34 == NULL)) {
            tmp_cmp_expr_left_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_34 = MAKE_LIST_EMPTY(0);
        tmp_operand_value_34 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        Py_DECREF(tmp_cmp_expr_right_34);
        if (tmp_operand_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_34);
        Py_DECREF(tmp_operand_value_34);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_34;
        tmp_raise_type_34 = PyExc_AssertionError;
        exception_type = tmp_raise_type_34;
        Py_INCREF(tmp_raise_type_34);
        exception_lineno = 360;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_44:;
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_call_result_34;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 361;
        tmp_call_result_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_40, mod_consts[69]);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_operand_value_35;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        tmp_cmp_expr_left_35 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_35 == NULL)) {
            tmp_cmp_expr_left_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_35 = MAKE_LIST1(Py_False);
        tmp_operand_value_35 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        Py_DECREF(tmp_cmp_expr_right_35);
        if (tmp_operand_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_35);
        Py_DECREF(tmp_operand_value_35);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_50 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_raise_type_35;
        tmp_raise_type_35 = PyExc_AssertionError;
        exception_type = tmp_raise_type_35;
        Py_INCREF(tmp_raise_type_35);
        exception_lineno = 362;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_45:;
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_call_result_35;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 363;
        tmp_call_result_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_41, mod_consts[45]);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_36;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        tmp_cmp_expr_left_36 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_36 == NULL)) {
            tmp_cmp_expr_left_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_36 = MAKE_LIST3(Py_False,Py_True,Py_False);
        tmp_operand_value_36 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        Py_DECREF(tmp_cmp_expr_right_36);
        if (tmp_operand_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_36);
        Py_DECREF(tmp_operand_value_36);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_raise_type_36;
        tmp_raise_type_36 = PyExc_AssertionError;
        exception_type = tmp_raise_type_36;
        Py_INCREF(tmp_raise_type_36);
        exception_lineno = 364;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_46:;
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_call_result_36;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 365;
        tmp_call_result_36 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_42, mod_consts[45]);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        bool tmp_condition_result_52;
        PyObject *tmp_operand_value_37;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        tmp_cmp_expr_left_37 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_cmp_expr_left_37 == NULL)) {
            tmp_cmp_expr_left_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_cmp_expr_left_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_37 = MAKE_LIST5(mod_consts[143]);
        tmp_operand_value_37 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        Py_DECREF(tmp_cmp_expr_right_37);
        if (tmp_operand_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_37);
        Py_DECREF(tmp_operand_value_37);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_37;
        tmp_raise_type_37 = PyExc_AssertionError;
        exception_type = tmp_raise_type_37;
        Py_INCREF(tmp_raise_type_37);
        exception_lineno = 366;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_47:;
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_call_result_37;
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 367;
        tmp_call_result_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_43, mod_consts[21]);
        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_call_result_38;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 368;
        tmp_call_result_38 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_44, mod_consts[21]);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[125]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[125]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 369;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[142]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[142]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 370;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[123]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 371;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[124]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 372;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_assign_source_86 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_86, 0, tmp_tuple_element_29);
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_86, 1, tmp_tuple_element_29);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_86);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_87 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_condition_result_53 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_37 = tmp_class_creation_9__bases;
        tmp_subscript_value_6 = mod_consts[61];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_6 = tmp_class_creation_9__bases;
        tmp_assign_source_89 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_38 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_14;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_39 = tmp_class_creation_9__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[85]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_tuple_element_30 = mod_consts[144];
        tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_30 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_14 = tmp_class_creation_9__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 374;
        tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_14, tmp_kwargs_value_14);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_14);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_38;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_40 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_operand_value_38 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_38);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_raise_type_38;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_6;
        tmp_raise_type_38 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_41 = tmp_class_creation_9__metaclass;
        tmp_name_value_7 = mod_consts[3];
        tmp_default_value_6 = mod_consts[89];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_7, tmp_default_value_6);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_12 = tmp_class_creation_9__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[3]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_38;
        Py_INCREF(tmp_raise_type_38);
        exception_value = tmp_raise_value_6;
        exception_lineno = 374;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_49:;
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_91;
    }
    branch_end_48:;
    {
        PyObject *tmp_assign_source_92;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_direct$fsm$StatePush$$$class__9_EventPulse_374 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__9_EventPulse_374, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__9_EventPulse_374, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_27;
        }
        frame_947c750eb67680faed92a1552fb7526a_7 = MAKE_CLASS_FRAME(tstate, codeobj_947c750eb67680faed92a1552fb7526a, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_947c750eb67680faed92a1552fb7526a_7);
        assert(Py_REFCNT(frame_947c750eb67680faed92a1552fb7526a_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__42___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__9_EventPulse_374, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__43_destroy();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__9_EventPulse_374, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_947c750eb67680faed92a1552fb7526a_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_947c750eb67680faed92a1552fb7526a_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_947c750eb67680faed92a1552fb7526a_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_947c750eb67680faed92a1552fb7526a_7,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_947c750eb67680faed92a1552fb7526a_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_27;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_38;
            PyObject *tmp_cmp_expr_right_38;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_38 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_38 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_50;
            } else {
                goto branch_no_50;
            }
        }
        branch_yes_50:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__9_EventPulse_374, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_27;
        }
        branch_no_50:;
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_40 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_32 = mod_consts[144];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_32 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_direct$fsm$StatePush$$$class__9_EventPulse_374;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_9__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 374;
            tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_93;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_92 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_92);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__9_EventPulse_374);
        locals_direct$fsm$StatePush$$$class__9_EventPulse_374 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__9_EventPulse_374);
        locals_direct$fsm$StatePush$$$class__9_EventPulse_374 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 374;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_92);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_tuple_element_33;
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_assign_source_94 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_94, 0, tmp_tuple_element_33);
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_94, 1, tmp_tuple_element_33);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assign_source_94);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_95 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_condition_result_57 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_43 = tmp_class_creation_10__bases;
        tmp_subscript_value_7 = mod_consts[61];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_7 = tmp_class_creation_10__bases;
        tmp_assign_source_97 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_58;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_44 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_16;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_16;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_45 = tmp_class_creation_10__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[85]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_tuple_element_34 = mod_consts[147];
        tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_34 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_16 = tmp_class_creation_10__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 384;
        tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_16, tmp_kwargs_value_16);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_16);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_39;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_46 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_operand_value_39 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_raise_type_39;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_7;
        tmp_raise_type_39 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_47 = tmp_class_creation_10__metaclass;
        tmp_name_value_8 = mod_consts[3];
        tmp_default_value_7 = mod_consts[89];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_8, tmp_default_value_7);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_14 = tmp_class_creation_10__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[3]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_39;
        Py_INCREF(tmp_raise_type_39);
        exception_value = tmp_raise_value_7;
        exception_lineno = 384;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_52:;
    goto branch_end_51;
    branch_no_51:;
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_99;
    }
    branch_end_51:;
    {
        PyObject *tmp_assign_source_100;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_direct$fsm$StatePush$$$class__10_EventArgument_384 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_30;
        }
        frame_f240f2011be05da4f55717ee599a0e0c_8 = MAKE_CLASS_FRAME(tstate, codeobj_f240f2011be05da4f55717ee599a0e0c, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f240f2011be05da4f55717ee599a0e0c_8);
        assert(Py_REFCNT(frame_f240f2011be05da4f55717ee599a0e0c_8) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[40];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__44___init__(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__45_destroy();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__46__handleEvent();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f240f2011be05da4f55717ee599a0e0c_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f240f2011be05da4f55717ee599a0e0c_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f240f2011be05da4f55717ee599a0e0c_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f240f2011be05da4f55717ee599a0e0c_8,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_f240f2011be05da4f55717ee599a0e0c_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_30;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_39;
            PyObject *tmp_cmp_expr_right_39;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_39 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_39 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_53;
            } else {
                goto branch_no_53;
            }
        }
        branch_yes_53:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__10_EventArgument_384, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_30;
        }
        branch_no_53:;
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_42 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_36 = mod_consts[147];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_36 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_direct$fsm$StatePush$$$class__10_EventArgument_384;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_10__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 384;
            tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_101;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_100 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_100);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__10_EventArgument_384);
        locals_direct$fsm$StatePush$$$class__10_EventArgument_384 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__10_EventArgument_384);
        locals_direct$fsm$StatePush$$$class__10_EventArgument_384 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 384;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_100);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_tuple_element_37;
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_37 == NULL)) {
            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_assign_source_102 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_102, 0, tmp_tuple_element_37);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_103 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_61;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_condition_result_61 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_49 = tmp_class_creation_11__bases;
        tmp_subscript_value_8 = mod_consts[61];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_8 = tmp_class_creation_11__bases;
        tmp_assign_source_105 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_105;
    }
    {
        bool tmp_condition_result_62;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_50 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[85]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_18;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_kwargs_value_18;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_51 = tmp_class_creation_11__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[85]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_tuple_element_38 = mod_consts[151];
        tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_38 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_18 = tmp_class_creation_11__class_decl_dict;
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 399;
        tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_18, tmp_kwargs_value_18);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_18);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_40;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_52 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_operand_value_40 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_raise_type_40;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_8;
        tmp_raise_type_40 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_53 = tmp_class_creation_11__metaclass;
        tmp_name_value_9 = mod_consts[3];
        tmp_default_value_8 = mod_consts[89];
        tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_9, tmp_default_value_8);
        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_16 = tmp_class_creation_11__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[3]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_40;
        Py_INCREF(tmp_raise_type_40);
        exception_value = tmp_raise_value_8;
        exception_lineno = 399;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_107;
    }
    branch_end_54:;
    {
        PyObject *tmp_assign_source_108;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_direct$fsm$StatePush$$$class__11_AttrSetter_399 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_33;
        }
        frame_b540cce37c635a045048187bb355207a_9 = MAKE_CLASS_FRAME(tstate, codeobj_b540cce37c635a045048187bb355207a, module_direct$fsm$StatePush, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b540cce37c635a045048187bb355207a_9);
        assert(Py_REFCNT(frame_b540cce37c635a045048187bb355207a_9) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__47___init__();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$fsm$StatePush$$$function__48__handleStateChange();

        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b540cce37c635a045048187bb355207a_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b540cce37c635a045048187bb355207a_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b540cce37c635a045048187bb355207a_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b540cce37c635a045048187bb355207a_9,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_b540cce37c635a045048187bb355207a_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_33;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_cmp_expr_left_40;
            PyObject *tmp_cmp_expr_right_40;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_40 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_40 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
            if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto branch_yes_56;
            } else {
                goto branch_no_56;
            }
        }
        branch_yes_56:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_33;
        }
        branch_no_56:;
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_44 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_40 = mod_consts[151];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_40 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = locals_direct$fsm$StatePush$$$class__11_AttrSetter_399;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_11__class_decl_dict;
            frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 399;
            tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_109;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_108 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_108);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399);
        locals_direct$fsm$StatePush$$$class__11_AttrSetter_399 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$fsm$StatePush$$$class__11_AttrSetter_399);
        locals_direct$fsm$StatePush$$$class__11_AttrSetter_399 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
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

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 399;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_108);
    }
    goto try_end_11;
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

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 411;
        tmp_assign_source_110 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_45);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 412;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_46, mod_consts[40]);

        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        assert(!(tmp_args_element_value_15 == NULL));
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[157];
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_47, call_args);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_112);
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_operand_value_41;
        PyObject *tmp_expression_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts[157]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        tmp_operand_value_41 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_41);
        assert(!(tmp_res == -1));
        tmp_condition_result_65 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_raise_type_41;
        tmp_raise_type_41 = PyExc_AssertionError;
        exception_type = tmp_raise_type_41;
        Py_INCREF(tmp_raise_type_41);
        exception_lineno = 414;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_57:;
    {
        bool tmp_condition_result_66;
        PyObject *tmp_operand_value_42;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        PyObject *tmp_expression_value_56;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[157]);
        if (tmp_cmp_expr_left_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_41 = mod_consts[61];
        tmp_operand_value_42 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        Py_DECREF(tmp_cmp_expr_left_41);
        if (tmp_operand_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_42);
        Py_DECREF(tmp_operand_value_42);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_66 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_raise_type_42;
        tmp_raise_type_42 = PyExc_AssertionError;
        exception_type = tmp_raise_type_42;
        Py_INCREF(tmp_raise_type_42);
        exception_lineno = 415;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_58:;
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_call_result_39;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 416;
        tmp_call_result_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_45,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[159], 0)
        );

        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_43;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        PyObject *tmp_expression_value_57;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[157]);
        if (tmp_cmp_expr_left_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_42 = mod_consts[160];
        tmp_operand_value_43 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        Py_DECREF(tmp_cmp_expr_left_42);
        if (tmp_operand_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_43);
        Py_DECREF(tmp_operand_value_43);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_43;
        tmp_raise_type_43 = PyExc_AssertionError;
        exception_type = tmp_raise_type_43;
        Py_INCREF(tmp_raise_type_43);
        exception_lineno = 417;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_59:;
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_call_result_40;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 418;
        tmp_call_result_40 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_46, mod_consts[21]);
        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_call_result_41;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 419;
        tmp_call_result_41 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_47, mod_consts[21]);
        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_instance_48;
        PyObject *tmp_call_result_42;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame.f_lineno = 420;
        tmp_call_result_42 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_48, mod_consts[21]);
        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[158]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 421;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[156]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[156]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 422;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$fsm$StatePush, mod_consts[155]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[155]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 423;

        goto frame_exception_exit_1;
    }



    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_197534d1cbaf52c71ea9def4ba677e4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_197534d1cbaf52c71ea9def4ba677e4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_197534d1cbaf52c71ea9def4ba677e4b, exception_lineno);
    }



    assertFrameObject(frame_197534d1cbaf52c71ea9def4ba677e4b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.fsm.StatePush", false);

    Py_INCREF(module_direct$fsm$StatePush);
    return module_direct$fsm$StatePush;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$fsm$StatePush, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$fsm$StatePush", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
