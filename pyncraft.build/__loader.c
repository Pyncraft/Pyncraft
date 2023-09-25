
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 65 > 0
static unsigned char *bytecode_data[65];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_Objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ExifTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_VoxelTypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_WorldGeneration(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$__info__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_dill(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_shims(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$detect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$objtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$pointers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$session(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$settings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$source(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$temp(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$cluster(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$cluster$ClusterClient(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$cluster$ClusterConfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$cluster$ClusterMsgs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$cluster$ClusterServer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directdevices(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directdevices$DirectDeviceManager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directdevices$DirectFastrak(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directdevices$DirectJoybox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directdevices$DirectRadamec(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify$DirectNotify(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify$DirectNotifyGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify$Logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify$LoggerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directnotify$Notifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectCameraControl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectGeometry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectGlobals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectGrid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectLights(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectManipulation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectSelection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectSession(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directtools$DirectUtil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$directutil$DeltaProfiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$distributed(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$distributed$ClockDelta(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$distributed$MsgTypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$distributed$PyDatagram(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$distributed$PyDatagramIterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$extensions_native(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$extensions_native$CInterval_extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$extensions_native$HTTPChannel_extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$extensions_native$NodePath_extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$extensions_native$extension_native_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$filter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$filter$FilterManager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$fsm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$fsm$ClassicFSM(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$fsm$StatePush(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectButton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectCheckButton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectDialog(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectEntry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectEntryScroll(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectFrame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectGui(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectGuiBase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectGuiGlobals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectLabel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectOptionMenu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectRadioButton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectScrollBar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectScrolledFrame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectScrolledList(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectSlider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$DirectWaitBar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$OnscreenGeom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$OnscreenImage(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$gui$OnscreenText(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$ActorInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$FunctionInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$IndirectInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$Interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$IntervalGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$IntervalManager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$LerpBlendHelpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$LerpInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$MetaInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$MopathInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$ParticleInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$ProjectileInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$SoundInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$interval$TestInterval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$particles(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$particles$ParticleManagerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$AppRunnerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$BufferViewer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$BulletinBoard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$BulletinBoardGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$DConfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$DirectObject(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$EventManager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$EventManagerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$ExceptionVarDump(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$GarbageReport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$Job(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$JobManager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$JobManagerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$Loader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$Messenger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$MessengerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$OnScreenDebug(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$PhysicsManagerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$ProfileSession(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$PythonUtil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$SfxPlayer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$ShowBase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$ShowBaseGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$TkGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showbase$Transitions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$showutil$TexMemWatcher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$stdpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$stdpy$file(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$stdpy$thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$stdpy$threading(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$task(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$task$FrameProfiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$task$Task(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$task$TaskManagerGlobal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$task$TaskProfiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$DirectSessionPanel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$FSMInspector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$Inspector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$NotifyPanel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$Placer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkpanels$TaskManagerPanel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$AppShell(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$Dial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$EntryScale(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$Floater(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$MemoryExplorer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$ProgressBar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$SceneGraphExplorer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$Slider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$Tree(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$Valuator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$VectorWidgets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_direct$tkwidgets$WidgetPropertiesDialog(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gltf(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gltf$_converter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gltf$_loader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gltf$parseutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gltf$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modloader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_array_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_char_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_dtype_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nbit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_inspect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_panda3d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyperclip(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$cygwin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$drm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$osx(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$windows(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$xinerama(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$enumerators$xrandr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$screeninfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_screeninfo$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$application(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$audio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$boxcast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$camera(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$collider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$color(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$curve(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$duplicate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$entity(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$gamepad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$hit_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$input_handler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$lights(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$main(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$mesh(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$mesh_exporter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$mesh_importer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$capsule(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$circle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$cone(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$cube(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$cylinder(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$grid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$pipe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$plane(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$quad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$models$procedural$terrain(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$mouse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$animation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$animator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$button(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$button_group(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$button_list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$cursor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$draggable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$editor_camera(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$first_person_controller(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$frame_animation_3d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$hot_reloader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$input_field(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$panel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sky(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$slider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sprite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sprite_sheet_animation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$text_field(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$tooltip(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$ursina_splash(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$window_panel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$raycast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scene(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$colorize(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$combine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$generate_normals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$grid_layout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$project_uvs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$scrollable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$smooth_follow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$terraincast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$basic_lighting_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$colored_lights_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$lit_with_shadows_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$matcap_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$normals_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_contrast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_grayscale(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_vertical_blur(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$fxaa(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$ssao(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$transition_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$triplanar_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$unlit_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$string_utilities(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$texture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$texture_importer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$ursinamath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$ursinastuff(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$vec2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$vec3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$vec4(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"Objects", modulecode_Objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\117\142\152\145\143\164\163\56\160\171"
#endif
},
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\170\151\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\155\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\127\151\156\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\144\145\160\162\145\143\141\164\145\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"PyQt5", modulecode_PyQt5, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\121\164\65\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"VoxelTypes", modulecode_VoxelTypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\126\157\170\145\154\124\171\160\145\163\56\160\171"
#endif
},
    {"WorldGeneration", modulecode_WorldGeneration, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\127\157\162\154\144\107\145\156\145\162\141\164\151\157\156\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\160\171\156\143\162\141\146\164\56\160\171"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\160\171\156\143\162\141\146\164\56\160\171"
#endif
},
    {"dill", modulecode_dill, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dill.__info__", modulecode_dill$__info__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\137\137\151\156\146\157\137\137\56\160\171"
#endif
},
    {"dill._dill", modulecode_dill$_dill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\137\144\151\154\154\56\160\171"
#endif
},
    {"dill._objects", modulecode_dill$_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\137\157\142\152\145\143\164\163\56\160\171"
#endif
},
    {"dill._shims", modulecode_dill$_shims, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\137\163\150\151\155\163\56\160\171"
#endif
},
    {"dill.detect", modulecode_dill$detect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\144\145\164\145\143\164\56\160\171"
#endif
},
    {"dill.logger", modulecode_dill$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\154\157\147\147\145\162\56\160\171"
#endif
},
    {"dill.objtypes", modulecode_dill$objtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\157\142\152\164\171\160\145\163\56\160\171"
#endif
},
    {"dill.pointers", modulecode_dill$pointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\160\157\151\156\164\145\162\163\56\160\171"
#endif
},
    {"dill.session", modulecode_dill$session, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\163\145\163\163\151\157\156\56\160\171"
#endif
},
    {"dill.settings", modulecode_dill$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"dill.source", modulecode_dill$source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\163\157\165\162\143\145\56\160\171"
#endif
},
    {"dill.temp", modulecode_dill$temp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\154\154\134\164\145\155\160\56\160\171"
#endif
},
    {"direct", modulecode_direct, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.cluster", modulecode_direct$cluster, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\143\154\165\163\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.cluster.ClusterClient", modulecode_direct$cluster$ClusterClient, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\143\154\165\163\164\145\162\134\103\154\165\163\164\145\162\103\154\151\145\156\164\56\160\171"
#endif
},
    {"direct.cluster.ClusterConfig", modulecode_direct$cluster$ClusterConfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\143\154\165\163\164\145\162\134\103\154\165\163\164\145\162\103\157\156\146\151\147\56\160\171"
#endif
},
    {"direct.cluster.ClusterMsgs", modulecode_direct$cluster$ClusterMsgs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\143\154\165\163\164\145\162\134\103\154\165\163\164\145\162\115\163\147\163\56\160\171"
#endif
},
    {"direct.cluster.ClusterServer", modulecode_direct$cluster$ClusterServer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\143\154\165\163\164\145\162\134\103\154\165\163\164\145\162\123\145\162\166\145\162\56\160\171"
#endif
},
    {"direct.directdevices", modulecode_direct$directdevices, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\144\145\166\151\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.directdevices.DirectDeviceManager", modulecode_direct$directdevices$DirectDeviceManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\144\145\166\151\143\145\163\134\104\151\162\145\143\164\104\145\166\151\143\145\115\141\156\141\147\145\162\56\160\171"
#endif
},
    {"direct.directdevices.DirectFastrak", modulecode_direct$directdevices$DirectFastrak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\144\145\166\151\143\145\163\134\104\151\162\145\143\164\106\141\163\164\162\141\153\56\160\171"
#endif
},
    {"direct.directdevices.DirectJoybox", modulecode_direct$directdevices$DirectJoybox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\144\145\166\151\143\145\163\134\104\151\162\145\143\164\112\157\171\142\157\170\56\160\171"
#endif
},
    {"direct.directdevices.DirectRadamec", modulecode_direct$directdevices$DirectRadamec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\144\145\166\151\143\145\163\134\104\151\162\145\143\164\122\141\144\141\155\145\143\56\160\171"
#endif
},
    {"direct.directnotify", modulecode_direct$directnotify, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.directnotify.DirectNotify", modulecode_direct$directnotify$DirectNotify, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\104\151\162\145\143\164\116\157\164\151\146\171\56\160\171"
#endif
},
    {"direct.directnotify.DirectNotifyGlobal", modulecode_direct$directnotify$DirectNotifyGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\104\151\162\145\143\164\116\157\164\151\146\171\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.directnotify.Logger", modulecode_direct$directnotify$Logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\114\157\147\147\145\162\56\160\171"
#endif
},
    {"direct.directnotify.LoggerGlobal", modulecode_direct$directnotify$LoggerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\114\157\147\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.directnotify.Notifier", modulecode_direct$directnotify$Notifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\156\157\164\151\146\171\134\116\157\164\151\146\151\145\162\56\160\171"
#endif
},
    {"direct.directtools", modulecode_direct$directtools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.directtools.DirectCameraControl", modulecode_direct$directtools$DirectCameraControl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\103\141\155\145\162\141\103\157\156\164\162\157\154\56\160\171"
#endif
},
    {"direct.directtools.DirectGeometry", modulecode_direct$directtools$DirectGeometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\107\145\157\155\145\164\162\171\56\160\171"
#endif
},
    {"direct.directtools.DirectGlobals", modulecode_direct$directtools$DirectGlobals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\107\154\157\142\141\154\163\56\160\171"
#endif
},
    {"direct.directtools.DirectGrid", modulecode_direct$directtools$DirectGrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\107\162\151\144\56\160\171"
#endif
},
    {"direct.directtools.DirectLights", modulecode_direct$directtools$DirectLights, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\114\151\147\150\164\163\56\160\171"
#endif
},
    {"direct.directtools.DirectManipulation", modulecode_direct$directtools$DirectManipulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\115\141\156\151\160\165\154\141\164\151\157\156\56\160\171"
#endif
},
    {"direct.directtools.DirectSelection", modulecode_direct$directtools$DirectSelection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\123\145\154\145\143\164\151\157\156\56\160\171"
#endif
},
    {"direct.directtools.DirectSession", modulecode_direct$directtools$DirectSession, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\123\145\163\163\151\157\156\56\160\171"
#endif
},
    {"direct.directtools.DirectUtil", modulecode_direct$directtools$DirectUtil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\164\157\157\154\163\134\104\151\162\145\143\164\125\164\151\154\56\160\171"
#endif
},
    {"direct.directutil", modulecode_direct$directutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.directutil.DeltaProfiler", modulecode_direct$directutil$DeltaProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\162\145\143\164\165\164\151\154\134\104\145\154\164\141\120\162\157\146\151\154\145\162\56\160\171"
#endif
},
    {"direct.distributed", modulecode_direct$distributed, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\163\164\162\151\142\165\164\145\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.distributed.ClockDelta", modulecode_direct$distributed$ClockDelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\163\164\162\151\142\165\164\145\144\134\103\154\157\143\153\104\145\154\164\141\56\160\171"
#endif
},
    {"direct.distributed.MsgTypes", modulecode_direct$distributed$MsgTypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\163\164\162\151\142\165\164\145\144\134\115\163\147\124\171\160\145\163\56\160\171"
#endif
},
    {"direct.distributed.PyDatagram", modulecode_direct$distributed$PyDatagram, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\163\164\162\151\142\165\164\145\144\134\120\171\104\141\164\141\147\162\141\155\56\160\171"
#endif
},
    {"direct.distributed.PyDatagramIterator", modulecode_direct$distributed$PyDatagramIterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\144\151\163\164\162\151\142\165\164\145\144\134\120\171\104\141\164\141\147\162\141\155\111\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"direct.extensions_native", modulecode_direct$extensions_native, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\145\170\164\145\156\163\151\157\156\163\137\156\141\164\151\166\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.extensions_native.CInterval_extensions", modulecode_direct$extensions_native$CInterval_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\145\170\164\145\156\163\151\157\156\163\137\156\141\164\151\166\145\134\103\111\156\164\145\162\166\141\154\137\145\170\164\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"direct.extensions_native.HTTPChannel_extensions", modulecode_direct$extensions_native$HTTPChannel_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\145\170\164\145\156\163\151\157\156\163\137\156\141\164\151\166\145\134\110\124\124\120\103\150\141\156\156\145\154\137\145\170\164\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"direct.extensions_native.NodePath_extensions", modulecode_direct$extensions_native$NodePath_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\145\170\164\145\156\163\151\157\156\163\137\156\141\164\151\166\145\134\116\157\144\145\120\141\164\150\137\145\170\164\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"direct.extensions_native.extension_native_helpers", modulecode_direct$extensions_native$extension_native_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\145\170\164\145\156\163\151\157\156\163\137\156\141\164\151\166\145\134\145\170\164\145\156\163\151\157\156\137\156\141\164\151\166\145\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"direct.filter", modulecode_direct$filter, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\146\151\154\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.filter.FilterManager", modulecode_direct$filter$FilterManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\146\151\154\164\145\162\134\106\151\154\164\145\162\115\141\156\141\147\145\162\56\160\171"
#endif
},
    {"direct.fsm", modulecode_direct$fsm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\146\163\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.fsm.ClassicFSM", modulecode_direct$fsm$ClassicFSM, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\146\163\155\134\103\154\141\163\163\151\143\106\123\115\56\160\171"
#endif
},
    {"direct.fsm.StatePush", modulecode_direct$fsm$StatePush, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\146\163\155\134\123\164\141\164\145\120\165\163\150\56\160\171"
#endif
},
    {"direct.gui", modulecode_direct$gui, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.gui.DirectButton", modulecode_direct$gui$DirectButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\102\165\164\164\157\156\56\160\171"
#endif
},
    {"direct.gui.DirectCheckButton", modulecode_direct$gui$DirectCheckButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\103\150\145\143\153\102\165\164\164\157\156\56\160\171"
#endif
},
    {"direct.gui.DirectDialog", modulecode_direct$gui$DirectDialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\104\151\141\154\157\147\56\160\171"
#endif
},
    {"direct.gui.DirectEntry", modulecode_direct$gui$DirectEntry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\105\156\164\162\171\56\160\171"
#endif
},
    {"direct.gui.DirectEntryScroll", modulecode_direct$gui$DirectEntryScroll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\105\156\164\162\171\123\143\162\157\154\154\56\160\171"
#endif
},
    {"direct.gui.DirectFrame", modulecode_direct$gui$DirectFrame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\106\162\141\155\145\56\160\171"
#endif
},
    {"direct.gui.DirectGui", modulecode_direct$gui$DirectGui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\107\165\151\56\160\171"
#endif
},
    {"direct.gui.DirectGuiBase", modulecode_direct$gui$DirectGuiBase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\107\165\151\102\141\163\145\56\160\171"
#endif
},
    {"direct.gui.DirectGuiGlobals", modulecode_direct$gui$DirectGuiGlobals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\107\165\151\107\154\157\142\141\154\163\56\160\171"
#endif
},
    {"direct.gui.DirectLabel", modulecode_direct$gui$DirectLabel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\114\141\142\145\154\56\160\171"
#endif
},
    {"direct.gui.DirectOptionMenu", modulecode_direct$gui$DirectOptionMenu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\117\160\164\151\157\156\115\145\156\165\56\160\171"
#endif
},
    {"direct.gui.DirectRadioButton", modulecode_direct$gui$DirectRadioButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\122\141\144\151\157\102\165\164\164\157\156\56\160\171"
#endif
},
    {"direct.gui.DirectScrollBar", modulecode_direct$gui$DirectScrollBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\123\143\162\157\154\154\102\141\162\56\160\171"
#endif
},
    {"direct.gui.DirectScrolledFrame", modulecode_direct$gui$DirectScrolledFrame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\123\143\162\157\154\154\145\144\106\162\141\155\145\56\160\171"
#endif
},
    {"direct.gui.DirectScrolledList", modulecode_direct$gui$DirectScrolledList, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\123\143\162\157\154\154\145\144\114\151\163\164\56\160\171"
#endif
},
    {"direct.gui.DirectSlider", modulecode_direct$gui$DirectSlider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\123\154\151\144\145\162\56\160\171"
#endif
},
    {"direct.gui.DirectWaitBar", modulecode_direct$gui$DirectWaitBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\104\151\162\145\143\164\127\141\151\164\102\141\162\56\160\171"
#endif
},
    {"direct.gui.OnscreenGeom", modulecode_direct$gui$OnscreenGeom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\117\156\163\143\162\145\145\156\107\145\157\155\56\160\171"
#endif
},
    {"direct.gui.OnscreenImage", modulecode_direct$gui$OnscreenImage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\117\156\163\143\162\145\145\156\111\155\141\147\145\56\160\171"
#endif
},
    {"direct.gui.OnscreenText", modulecode_direct$gui$OnscreenText, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\147\165\151\134\117\156\163\143\162\145\145\156\124\145\170\164\56\160\171"
#endif
},
    {"direct.interval", modulecode_direct$interval, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.interval.ActorInterval", modulecode_direct$interval$ActorInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\101\143\164\157\162\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.FunctionInterval", modulecode_direct$interval$FunctionInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\106\165\156\143\164\151\157\156\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.IndirectInterval", modulecode_direct$interval$IndirectInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\111\156\144\151\162\145\143\164\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.Interval", modulecode_direct$interval$Interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.IntervalGlobal", modulecode_direct$interval$IntervalGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\111\156\164\145\162\166\141\154\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.interval.IntervalManager", modulecode_direct$interval$IntervalManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\111\156\164\145\162\166\141\154\115\141\156\141\147\145\162\56\160\171"
#endif
},
    {"direct.interval.LerpBlendHelpers", modulecode_direct$interval$LerpBlendHelpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\114\145\162\160\102\154\145\156\144\110\145\154\160\145\162\163\56\160\171"
#endif
},
    {"direct.interval.LerpInterval", modulecode_direct$interval$LerpInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\114\145\162\160\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.MetaInterval", modulecode_direct$interval$MetaInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\115\145\164\141\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.MopathInterval", modulecode_direct$interval$MopathInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\115\157\160\141\164\150\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.ParticleInterval", modulecode_direct$interval$ParticleInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\120\141\162\164\151\143\154\145\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.ProjectileInterval", modulecode_direct$interval$ProjectileInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\120\162\157\152\145\143\164\151\154\145\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.SoundInterval", modulecode_direct$interval$SoundInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\123\157\165\156\144\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.interval.TestInterval", modulecode_direct$interval$TestInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\151\156\164\145\162\166\141\154\134\124\145\163\164\111\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"direct.particles", modulecode_direct$particles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\160\141\162\164\151\143\154\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.particles.ParticleManagerGlobal", modulecode_direct$particles$ParticleManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\160\141\162\164\151\143\154\145\163\134\120\141\162\164\151\143\154\145\115\141\156\141\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase", modulecode_direct$showbase, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.showbase.AppRunnerGlobal", modulecode_direct$showbase$AppRunnerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\101\160\160\122\165\156\156\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.BufferViewer", modulecode_direct$showbase$BufferViewer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\102\165\146\146\145\162\126\151\145\167\145\162\56\160\171"
#endif
},
    {"direct.showbase.BulletinBoard", modulecode_direct$showbase$BulletinBoard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\102\165\154\154\145\164\151\156\102\157\141\162\144\56\160\171"
#endif
},
    {"direct.showbase.BulletinBoardGlobal", modulecode_direct$showbase$BulletinBoardGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\102\165\154\154\145\164\151\156\102\157\141\162\144\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.DConfig", modulecode_direct$showbase$DConfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\104\103\157\156\146\151\147\56\160\171"
#endif
},
    {"direct.showbase.DirectObject", modulecode_direct$showbase$DirectObject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\104\151\162\145\143\164\117\142\152\145\143\164\56\160\171"
#endif
},
    {"direct.showbase.EventManager", modulecode_direct$showbase$EventManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\105\166\145\156\164\115\141\156\141\147\145\162\56\160\171"
#endif
},
    {"direct.showbase.EventManagerGlobal", modulecode_direct$showbase$EventManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\105\166\145\156\164\115\141\156\141\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.ExceptionVarDump", modulecode_direct$showbase$ExceptionVarDump, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\105\170\143\145\160\164\151\157\156\126\141\162\104\165\155\160\56\160\171"
#endif
},
    {"direct.showbase.GarbageReport", modulecode_direct$showbase$GarbageReport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\107\141\162\142\141\147\145\122\145\160\157\162\164\56\160\171"
#endif
},
    {"direct.showbase.Job", modulecode_direct$showbase$Job, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\112\157\142\56\160\171"
#endif
},
    {"direct.showbase.JobManager", modulecode_direct$showbase$JobManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\112\157\142\115\141\156\141\147\145\162\56\160\171"
#endif
},
    {"direct.showbase.JobManagerGlobal", modulecode_direct$showbase$JobManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\112\157\142\115\141\156\141\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.Loader", modulecode_direct$showbase$Loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\114\157\141\144\145\162\56\160\171"
#endif
},
    {"direct.showbase.Messenger", modulecode_direct$showbase$Messenger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\115\145\163\163\145\156\147\145\162\56\160\171"
#endif
},
    {"direct.showbase.MessengerGlobal", modulecode_direct$showbase$MessengerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\115\145\163\163\145\156\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.OnScreenDebug", modulecode_direct$showbase$OnScreenDebug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\117\156\123\143\162\145\145\156\104\145\142\165\147\56\160\171"
#endif
},
    {"direct.showbase.PhysicsManagerGlobal", modulecode_direct$showbase$PhysicsManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\120\150\171\163\151\143\163\115\141\156\141\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.ProfileSession", modulecode_direct$showbase$ProfileSession, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\120\162\157\146\151\154\145\123\145\163\163\151\157\156\56\160\171"
#endif
},
    {"direct.showbase.PythonUtil", modulecode_direct$showbase$PythonUtil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\120\171\164\150\157\156\125\164\151\154\56\160\171"
#endif
},
    {"direct.showbase.SfxPlayer", modulecode_direct$showbase$SfxPlayer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\123\146\170\120\154\141\171\145\162\56\160\171"
#endif
},
    {"direct.showbase.ShowBase", modulecode_direct$showbase$ShowBase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\123\150\157\167\102\141\163\145\56\160\171"
#endif
},
    {"direct.showbase.ShowBaseGlobal", modulecode_direct$showbase$ShowBaseGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\123\150\157\167\102\141\163\145\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.TkGlobal", modulecode_direct$showbase$TkGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\124\153\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.showbase.Transitions", modulecode_direct$showbase$Transitions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\142\141\163\145\134\124\162\141\156\163\151\164\151\157\156\163\56\160\171"
#endif
},
    {"direct.showutil", modulecode_direct$showutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.showutil.TexMemWatcher", modulecode_direct$showutil$TexMemWatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\150\157\167\165\164\151\154\134\124\145\170\115\145\155\127\141\164\143\150\145\162\56\160\171"
#endif
},
    {"direct.stdpy", modulecode_direct$stdpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\164\144\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.stdpy.file", modulecode_direct$stdpy$file, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\164\144\160\171\134\146\151\154\145\56\160\171"
#endif
},
    {"direct.stdpy.thread", modulecode_direct$stdpy$thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\164\144\160\171\134\164\150\162\145\141\144\56\160\171"
#endif
},
    {"direct.stdpy.threading", modulecode_direct$stdpy$threading, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\163\164\144\160\171\134\164\150\162\145\141\144\151\156\147\56\160\171"
#endif
},
    {"direct.task", modulecode_direct$task, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\141\163\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.task.FrameProfiler", modulecode_direct$task$FrameProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\141\163\153\134\106\162\141\155\145\120\162\157\146\151\154\145\162\56\160\171"
#endif
},
    {"direct.task.Task", modulecode_direct$task$Task, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\141\163\153\134\124\141\163\153\56\160\171"
#endif
},
    {"direct.task.TaskManagerGlobal", modulecode_direct$task$TaskManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\141\163\153\134\124\141\163\153\115\141\156\141\147\145\162\107\154\157\142\141\154\56\160\171"
#endif
},
    {"direct.task.TaskProfiler", modulecode_direct$task$TaskProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\141\163\153\134\124\141\163\153\120\162\157\146\151\154\145\162\56\160\171"
#endif
},
    {"direct.tkpanels", modulecode_direct$tkpanels, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.tkpanels.DirectSessionPanel", modulecode_direct$tkpanels$DirectSessionPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\104\151\162\145\143\164\123\145\163\163\151\157\156\120\141\156\145\154\56\160\171"
#endif
},
    {"direct.tkpanels.FSMInspector", modulecode_direct$tkpanels$FSMInspector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\106\123\115\111\156\163\160\145\143\164\157\162\56\160\171"
#endif
},
    {"direct.tkpanels.Inspector", modulecode_direct$tkpanels$Inspector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\111\156\163\160\145\143\164\157\162\56\160\171"
#endif
},
    {"direct.tkpanels.NotifyPanel", modulecode_direct$tkpanels$NotifyPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\116\157\164\151\146\171\120\141\156\145\154\56\160\171"
#endif
},
    {"direct.tkpanels.Placer", modulecode_direct$tkpanels$Placer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\120\154\141\143\145\162\56\160\171"
#endif
},
    {"direct.tkpanels.TaskManagerPanel", modulecode_direct$tkpanels$TaskManagerPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\160\141\156\145\154\163\134\124\141\163\153\115\141\156\141\147\145\162\120\141\156\145\154\56\160\171"
#endif
},
    {"direct.tkwidgets", modulecode_direct$tkwidgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"direct.tkwidgets.AppShell", modulecode_direct$tkwidgets$AppShell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\101\160\160\123\150\145\154\154\56\160\171"
#endif
},
    {"direct.tkwidgets.Dial", modulecode_direct$tkwidgets$Dial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\104\151\141\154\56\160\171"
#endif
},
    {"direct.tkwidgets.EntryScale", modulecode_direct$tkwidgets$EntryScale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\105\156\164\162\171\123\143\141\154\145\56\160\171"
#endif
},
    {"direct.tkwidgets.Floater", modulecode_direct$tkwidgets$Floater, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\106\154\157\141\164\145\162\56\160\171"
#endif
},
    {"direct.tkwidgets.MemoryExplorer", modulecode_direct$tkwidgets$MemoryExplorer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\115\145\155\157\162\171\105\170\160\154\157\162\145\162\56\160\171"
#endif
},
    {"direct.tkwidgets.ProgressBar", modulecode_direct$tkwidgets$ProgressBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\120\162\157\147\162\145\163\163\102\141\162\56\160\171"
#endif
},
    {"direct.tkwidgets.SceneGraphExplorer", modulecode_direct$tkwidgets$SceneGraphExplorer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\123\143\145\156\145\107\162\141\160\150\105\170\160\154\157\162\145\162\56\160\171"
#endif
},
    {"direct.tkwidgets.Slider", modulecode_direct$tkwidgets$Slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\123\154\151\144\145\162\56\160\171"
#endif
},
    {"direct.tkwidgets.Tree", modulecode_direct$tkwidgets$Tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\124\162\145\145\56\160\171"
#endif
},
    {"direct.tkwidgets.Valuator", modulecode_direct$tkwidgets$Valuator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\126\141\154\165\141\164\157\162\56\160\171"
#endif
},
    {"direct.tkwidgets.VectorWidgets", modulecode_direct$tkwidgets$VectorWidgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\126\145\143\164\157\162\127\151\144\147\145\164\163\56\160\171"
#endif
},
    {"direct.tkwidgets.WidgetPropertiesDialog", modulecode_direct$tkwidgets$WidgetPropertiesDialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\151\162\145\143\164\134\164\153\167\151\144\147\145\164\163\134\127\151\144\147\145\164\120\162\157\160\145\162\164\151\145\163\104\151\141\154\157\147\56\160\171"
#endif
},
    {"exceptions", modulecode_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"gltf", modulecode_gltf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\147\154\164\146\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"gltf._converter", modulecode_gltf$_converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\147\154\164\146\134\137\143\157\156\166\145\162\164\145\162\56\160\171"
#endif
},
    {"gltf._loader", modulecode_gltf$_loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\147\154\164\146\134\137\154\157\141\144\145\162\56\160\171"
#endif
},
    {"gltf.parseutils", modulecode_gltf$parseutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\147\154\164\146\134\160\141\162\163\145\165\164\151\154\163\56\160\171"
#endif
},
    {"gltf.version", modulecode_gltf$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\147\154\164\146\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\151\144\145\156\164\151\146\151\145\162\56\160\171"
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\141\163\171\156\143\137\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\142\143\143\141\143\150\145\56\160\171"
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\155\160\151\154\145\162\56\160\171"
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\142\165\147\56\160\171"
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\146\141\165\154\164\163\56\160\171"
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\156\166\151\162\157\156\155\145\156\164\56\160\171"
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\151\144\164\162\141\143\153\151\156\147\56\160\171"
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\145\170\145\162\56\160\171"
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\157\141\144\145\162\163\56\160\171"
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\156\157\144\145\163\56\160\171"
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\157\160\164\151\155\151\172\145\162\56\160\171"
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\162\165\156\164\151\155\145\56\160\171"
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\164\145\163\164\163\56\160\171"
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\166\151\163\151\164\157\162\56\160\171"
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\156\141\164\151\166\145\56\160\171"
#endif
},
    {"modloader", modulecode_modloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\155\157\144\154\157\141\144\145\162\56\160\171"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\162\145\114\157\141\144\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._typing", modulecode_numpy$_typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._typing._array_like", modulecode_numpy$_typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\141\162\162\141\171\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._char_codes", modulecode_numpy$_typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\143\150\141\162\137\143\157\144\145\163\56\160\171"
#endif
},
    {"numpy._typing._dtype_like", modulecode_numpy$_typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\144\164\171\160\145\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._nbit", modulecode_numpy$_typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\142\151\164\56\160\171"
#endif
},
    {"numpy._typing._nested_sequence", modulecode_numpy$_typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\145\163\164\145\144\137\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"numpy._typing._scalars", modulecode_numpy$_typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy._typing._shape", modulecode_numpy$_typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\150\141\160\145\56\160\171"
#endif
},
    {"numpy._utils", modulecode_numpy$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._utils._inspect", modulecode_numpy$_utils$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.dtypes", modulecode_numpy$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.exceptions", modulecode_numpy$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"panda3d", modulecode_panda3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\63\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\145\162\143\154\151\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"screeninfo", modulecode_screeninfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"screeninfo.common", modulecode_screeninfo$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"screeninfo.enumerators", modulecode_screeninfo$enumerators, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"screeninfo.enumerators.cygwin", modulecode_screeninfo$enumerators$cygwin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\143\171\147\167\151\156\56\160\171"
#endif
},
    {"screeninfo.enumerators.drm", modulecode_screeninfo$enumerators$drm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\144\162\155\56\160\171"
#endif
},
    {"screeninfo.enumerators.osx", modulecode_screeninfo$enumerators$osx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\157\163\170\56\160\171"
#endif
},
    {"screeninfo.enumerators.windows", modulecode_screeninfo$enumerators$windows, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\167\151\156\144\157\167\163\56\160\171"
#endif
},
    {"screeninfo.enumerators.xinerama", modulecode_screeninfo$enumerators$xinerama, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\170\151\156\145\162\141\155\141\56\160\171"
#endif
},
    {"screeninfo.enumerators.xrandr", modulecode_screeninfo$enumerators$xrandr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\145\156\165\155\145\162\141\164\157\162\163\134\170\162\141\156\144\162\56\160\171"
#endif
},
    {"screeninfo.screeninfo", modulecode_screeninfo$screeninfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\163\143\162\145\145\156\151\156\146\157\56\160\171"
#endif
},
    {"screeninfo.util", modulecode_screeninfo$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\143\162\145\145\156\151\156\146\157\134\165\164\151\154\56\160\171"
#endif
},
    {"ursina", modulecode_ursina, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.application", modulecode_ursina$application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"ursina.audio", modulecode_ursina$audio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\141\165\144\151\157\56\160\171"
#endif
},
    {"ursina.boxcast", modulecode_ursina$boxcast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\142\157\170\143\141\163\164\56\160\171"
#endif
},
    {"ursina.camera", modulecode_ursina$camera, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\143\141\155\145\162\141\56\160\171"
#endif
},
    {"ursina.collider", modulecode_ursina$collider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\143\157\154\154\151\144\145\162\56\160\171"
#endif
},
    {"ursina.color", modulecode_ursina$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\143\157\154\157\162\56\160\171"
#endif
},
    {"ursina.curve", modulecode_ursina$curve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\143\165\162\166\145\56\160\171"
#endif
},
    {"ursina.duplicate", modulecode_ursina$duplicate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\144\165\160\154\151\143\141\164\145\56\160\171"
#endif
},
    {"ursina.entity", modulecode_ursina$entity, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\145\156\164\151\164\171\56\160\171"
#endif
},
    {"ursina.gamepad", modulecode_ursina$gamepad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\147\141\155\145\160\141\144\56\160\171"
#endif
},
    {"ursina.hit_info", modulecode_ursina$hit_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\150\151\164\137\151\156\146\157\56\160\171"
#endif
},
    {"ursina.input_handler", modulecode_ursina$input_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\151\156\160\165\164\137\150\141\156\144\154\145\162\56\160\171"
#endif
},
    {"ursina.lights", modulecode_ursina$lights, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\154\151\147\150\164\163\56\160\171"
#endif
},
    {"ursina.main", modulecode_ursina$main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\141\151\156\56\160\171"
#endif
},
    {"ursina.mesh", modulecode_ursina$mesh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\145\163\150\56\160\171"
#endif
},
    {"ursina.mesh_exporter", modulecode_ursina$mesh_exporter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\145\163\150\137\145\170\160\157\162\164\145\162\56\160\171"
#endif
},
    {"ursina.mesh_importer", modulecode_ursina$mesh_importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\145\163\150\137\151\155\160\157\162\164\145\162\56\160\171"
#endif
},
    {"ursina.models", modulecode_ursina$models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.models.procedural", modulecode_ursina$models$procedural, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.models.procedural.capsule", modulecode_ursina$models$procedural$capsule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\143\141\160\163\165\154\145\56\160\171"
#endif
},
    {"ursina.models.procedural.circle", modulecode_ursina$models$procedural$circle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\143\151\162\143\154\145\56\160\171"
#endif
},
    {"ursina.models.procedural.cone", modulecode_ursina$models$procedural$cone, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\143\157\156\145\56\160\171"
#endif
},
    {"ursina.models.procedural.cube", modulecode_ursina$models$procedural$cube, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\143\165\142\145\56\160\171"
#endif
},
    {"ursina.models.procedural.cylinder", modulecode_ursina$models$procedural$cylinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\143\171\154\151\156\144\145\162\56\160\171"
#endif
},
    {"ursina.models.procedural.grid", modulecode_ursina$models$procedural$grid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\147\162\151\144\56\160\171"
#endif
},
    {"ursina.models.procedural.pipe", modulecode_ursina$models$procedural$pipe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\160\151\160\145\56\160\171"
#endif
},
    {"ursina.models.procedural.plane", modulecode_ursina$models$procedural$plane, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\160\154\141\156\145\56\160\171"
#endif
},
    {"ursina.models.procedural.quad", modulecode_ursina$models$procedural$quad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\161\165\141\144\56\160\171"
#endif
},
    {"ursina.models.procedural.terrain", modulecode_ursina$models$procedural$terrain, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\144\145\154\163\134\160\162\157\143\145\144\165\162\141\154\134\164\145\162\162\141\151\156\56\160\171"
#endif
},
    {"ursina.mouse", modulecode_ursina$mouse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\155\157\165\163\145\56\160\171"
#endif
},
    {"ursina.prefabs", modulecode_ursina$prefabs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.prefabs.animation", modulecode_ursina$prefabs$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\141\156\151\155\141\164\151\157\156\56\160\171"
#endif
},
    {"ursina.prefabs.animator", modulecode_ursina$prefabs$animator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\141\156\151\155\141\164\157\162\56\160\171"
#endif
},
    {"ursina.prefabs.button", modulecode_ursina$prefabs$button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\142\165\164\164\157\156\56\160\171"
#endif
},
    {"ursina.prefabs.button_group", modulecode_ursina$prefabs$button_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\142\165\164\164\157\156\137\147\162\157\165\160\56\160\171"
#endif
},
    {"ursina.prefabs.button_list", modulecode_ursina$prefabs$button_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\142\165\164\164\157\156\137\154\151\163\164\56\160\171"
#endif
},
    {"ursina.prefabs.cursor", modulecode_ursina$prefabs$cursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\143\165\162\163\157\162\56\160\171"
#endif
},
    {"ursina.prefabs.draggable", modulecode_ursina$prefabs$draggable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\144\162\141\147\147\141\142\154\145\56\160\171"
#endif
},
    {"ursina.prefabs.editor_camera", modulecode_ursina$prefabs$editor_camera, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\145\144\151\164\157\162\137\143\141\155\145\162\141\56\160\171"
#endif
},
    {"ursina.prefabs.first_person_controller", modulecode_ursina$prefabs$first_person_controller, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\146\151\162\163\164\137\160\145\162\163\157\156\137\143\157\156\164\162\157\154\154\145\162\56\160\171"
#endif
},
    {"ursina.prefabs.frame_animation_3d", modulecode_ursina$prefabs$frame_animation_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\146\162\141\155\145\137\141\156\151\155\141\164\151\157\156\137\63\144\56\160\171"
#endif
},
    {"ursina.prefabs.hot_reloader", modulecode_ursina$prefabs$hot_reloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\150\157\164\137\162\145\154\157\141\144\145\162\56\160\171"
#endif
},
    {"ursina.prefabs.input_field", modulecode_ursina$prefabs$input_field, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\151\156\160\165\164\137\146\151\145\154\144\56\160\171"
#endif
},
    {"ursina.prefabs.panel", modulecode_ursina$prefabs$panel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\160\141\156\145\154\56\160\171"
#endif
},
    {"ursina.prefabs.sky", modulecode_ursina$prefabs$sky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\163\153\171\56\160\171"
#endif
},
    {"ursina.prefabs.slider", modulecode_ursina$prefabs$slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\163\154\151\144\145\162\56\160\171"
#endif
},
    {"ursina.prefabs.sprite", modulecode_ursina$prefabs$sprite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\163\160\162\151\164\145\56\160\171"
#endif
},
    {"ursina.prefabs.sprite_sheet_animation", modulecode_ursina$prefabs$sprite_sheet_animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\163\160\162\151\164\145\137\163\150\145\145\164\137\141\156\151\155\141\164\151\157\156\56\160\171"
#endif
},
    {"ursina.prefabs.text_field", modulecode_ursina$prefabs$text_field, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\164\145\170\164\137\146\151\145\154\144\56\160\171"
#endif
},
    {"ursina.prefabs.tooltip", modulecode_ursina$prefabs$tooltip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\164\157\157\154\164\151\160\56\160\171"
#endif
},
    {"ursina.prefabs.ursina_splash", modulecode_ursina$prefabs$ursina_splash, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\165\162\163\151\156\141\137\163\160\154\141\163\150\56\160\171"
#endif
},
    {"ursina.prefabs.window_panel", modulecode_ursina$prefabs$window_panel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\160\162\145\146\141\142\163\134\167\151\156\144\157\167\137\160\141\156\145\154\56\160\171"
#endif
},
    {"ursina.raycast", modulecode_ursina$raycast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\162\141\171\143\141\163\164\56\160\171"
#endif
},
    {"ursina.scene", modulecode_ursina$scene, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\145\156\145\56\160\171"
#endif
},
    {"ursina.scripts", modulecode_ursina$scripts, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.scripts.colorize", modulecode_ursina$scripts$colorize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\143\157\154\157\162\151\172\145\56\160\171"
#endif
},
    {"ursina.scripts.combine", modulecode_ursina$scripts$combine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\143\157\155\142\151\156\145\56\160\171"
#endif
},
    {"ursina.scripts.generate_normals", modulecode_ursina$scripts$generate_normals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\147\145\156\145\162\141\164\145\137\156\157\162\155\141\154\163\56\160\171"
#endif
},
    {"ursina.scripts.grid_layout", modulecode_ursina$scripts$grid_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\147\162\151\144\137\154\141\171\157\165\164\56\160\171"
#endif
},
    {"ursina.scripts.project_uvs", modulecode_ursina$scripts$project_uvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\160\162\157\152\145\143\164\137\165\166\163\56\160\171"
#endif
},
    {"ursina.scripts.scrollable", modulecode_ursina$scripts$scrollable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\163\143\162\157\154\154\141\142\154\145\56\160\171"
#endif
},
    {"ursina.scripts.smooth_follow", modulecode_ursina$scripts$smooth_follow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\163\155\157\157\164\150\137\146\157\154\154\157\167\56\160\171"
#endif
},
    {"ursina.scripts.terraincast", modulecode_ursina$scripts$terraincast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\143\162\151\160\164\163\134\164\145\162\162\141\151\156\143\141\163\164\56\160\171"
#endif
},
    {"ursina.sequence", modulecode_ursina$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"ursina.shader", modulecode_ursina$shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders", modulecode_ursina$shaders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ursina.shaders.basic_lighting_shader", modulecode_ursina$shaders$basic_lighting_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\142\141\163\151\143\137\154\151\147\150\164\151\156\147\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.colored_lights_shader", modulecode_ursina$shaders$colored_lights_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\143\157\154\157\162\145\144\137\154\151\147\150\164\163\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.lit_with_shadows_shader", modulecode_ursina$shaders$lit_with_shadows_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\154\151\164\137\167\151\164\150\137\163\150\141\144\157\167\163\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.matcap_shader", modulecode_ursina$shaders$matcap_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\155\141\164\143\141\160\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.normals_shader", modulecode_ursina$shaders$normals_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\156\157\162\155\141\154\163\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.screenspace_shaders", modulecode_ursina$shaders$screenspace_shaders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163"
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_contrast", modulecode_ursina$shaders$screenspace_shaders$camera_contrast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163\134\143\141\155\145\162\141\137\143\157\156\164\162\141\163\164\56\160\171"
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_grayscale", modulecode_ursina$shaders$screenspace_shaders$camera_grayscale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163\134\143\141\155\145\162\141\137\147\162\141\171\163\143\141\154\145\56\160\171"
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_vertical_blur", modulecode_ursina$shaders$screenspace_shaders$camera_vertical_blur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163\134\143\141\155\145\162\141\137\166\145\162\164\151\143\141\154\137\142\154\165\162\56\160\171"
#endif
},
    {"ursina.shaders.screenspace_shaders.fxaa", modulecode_ursina$shaders$screenspace_shaders$fxaa, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163\134\146\170\141\141\56\160\171"
#endif
},
    {"ursina.shaders.screenspace_shaders.ssao", modulecode_ursina$shaders$screenspace_shaders$ssao, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\163\143\162\145\145\156\163\160\141\143\145\137\163\150\141\144\145\162\163\134\163\163\141\157\56\160\171"
#endif
},
    {"ursina.shaders.transition_shader", modulecode_ursina$shaders$transition_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\164\162\141\156\163\151\164\151\157\156\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.triplanar_shader", modulecode_ursina$shaders$triplanar_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\164\162\151\160\154\141\156\141\162\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.shaders.unlit_shader", modulecode_ursina$shaders$unlit_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\150\141\144\145\162\163\134\165\156\154\151\164\137\163\150\141\144\145\162\56\160\171"
#endif
},
    {"ursina.string_utilities", modulecode_ursina$string_utilities, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\163\164\162\151\156\147\137\165\164\151\154\151\164\151\145\163\56\160\171"
#endif
},
    {"ursina.text", modulecode_ursina$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\164\145\170\164\56\160\171"
#endif
},
    {"ursina.texture", modulecode_ursina$texture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\164\145\170\164\165\162\145\56\160\171"
#endif
},
    {"ursina.texture_importer", modulecode_ursina$texture_importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\164\145\170\164\165\162\145\137\151\155\160\157\162\164\145\162\56\160\171"
#endif
},
    {"ursina.ursinamath", modulecode_ursina$ursinamath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\165\162\163\151\156\141\155\141\164\150\56\160\171"
#endif
},
    {"ursina.ursinastuff", modulecode_ursina$ursinastuff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\165\162\163\151\156\141\163\164\165\146\146\56\160\171"
#endif
},
    {"ursina.vec2", modulecode_ursina$vec2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\166\145\143\62\56\160\171"
#endif
},
    {"ursina.vec3", modulecode_ursina$vec3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\166\145\143\63\56\160\171"
#endif
},
    {"ursina.vec4", modulecode_ursina$vec4, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\166\145\143\64\56\160\171"
#endif
},
    {"ursina.window", modulecode_ursina$window, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\163\151\156\141\134\167\151\156\144\157\167\56\160\171"
#endif
},
    {"utils", modulecode_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\117\156\145\104\162\151\166\145\134\104\145\163\153\164\157\160\134\116\145\167\40\146\157\154\144\145\162\134\120\171\156\143\162\141\146\164\134\163\162\143\134\165\164\151\154\163\56\160\171"
#endif
},
    {"multiprocessing", NULL, 0, 1132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing.connection", NULL, 1, 48530, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.context", NULL, 2, 19576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"multiprocessing.dummy", NULL, 3, 6261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 4, 3996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.forkserver", NULL, 5, 17052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\146\157\162\153\163\145\162\166\145\162\56\160\171"
#endif
},
    {"multiprocessing.heap", NULL, 6, 14705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\150\145\141\160\56\160\171"
#endif
},
    {"multiprocessing.managers", NULL, 7, 73552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"multiprocessing.pool", NULL, 8, 47389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\157\154\56\160\171"
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 9, 6519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\160\145\156\137\163\160\141\167\156\137\167\151\156\63\62\56\160\171"
#endif
},
    {"multiprocessing.process", NULL, 10, 19153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"multiprocessing.queues", NULL, 11, 20023, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\161\165\145\165\145\163\56\160\171"
#endif
},
    {"multiprocessing.reduction", NULL, 12, 15004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\144\165\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 13, 10002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\163\150\141\162\145\162\56\160\171"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 14, 11432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\164\162\141\143\153\145\162\56\160\171"
#endif
},
    {"multiprocessing.shared_memory", NULL, 15, 24563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\137\155\145\155\157\162\171\56\160\171"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 16, 12087, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\143\164\171\160\145\163\56\160\171"
#endif
},
    {"multiprocessing.spawn", NULL, 17, 12546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\160\141\167\156\56\160\171"
#endif
},
    {"multiprocessing.synchronize", NULL, 18, 22195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\171\156\143\150\162\157\156\151\172\145\56\160\171"
#endif
},
    {"multiprocessing.util", NULL, 19, 20404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"numpy.testing", NULL, 20, 3971, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging", NULL, 21, 551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging._structures", NULL, 22, 3671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"packaging.version", NULL, 23, 21055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources", NULL, 24, 159357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor", NULL, 25, 199, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 26, 29409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\141\160\160\144\151\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 27, 833, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 28, 10750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 29, 4277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 30, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 31, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\151\164\145\162\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 32, 6493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\154\145\147\141\143\171\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 33, 7494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\141\142\143\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 34, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 35, 206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 36, 9429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 37, 20292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\146\165\156\143\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 38, 26609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\164\145\170\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 39, 300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 40, 167961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\155\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 41, 26952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\162\145\143\151\160\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 42, 571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 43, 650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 44, 13237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\141\156\171\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 45, 8005, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\165\163\154\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 46, 3693, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 47, 16542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 48, 7657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\162\145\161\165\151\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 49, 34371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\163\160\145\143\151\146\151\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 50, 21356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\164\141\147\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 51, 6691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 52, 21883, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 53, 8344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.actions", NULL, 54, 8470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.common", NULL, 55, 14792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.core", NULL, 56, 277644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.diagram", NULL, 57, 28007, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.exceptions", NULL, 58, 12934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.helpers", NULL, 59, 53635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.results", NULL, 60, 36318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.testing", NULL, 61, 19514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.unicode", NULL, 62, 15372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.util", NULL, 63, 14271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"pkg_resources.extern", NULL, 64, 4318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\170\141\156\144\145\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\145\170\164\145\162\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

