
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

#if 446 > 0
static unsigned char *bytecode_data[446];
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
extern PyObject *modulecode_panda3d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyperclip(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$ironpython_clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$no_clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$win32_clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ansi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ironpython_console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$error(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$ironpython_keysyms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$keysyms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$winconstants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$history(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$lineobj(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$wordmatcher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$basemode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$emacs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$notemacs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$vi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$py3k_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$release(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$rlmain(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$unicode_helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_readline(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_ursina$build(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$camera(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$collider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$color(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$curve(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$duplicate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$level_editor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$test2$$91$1$$44$0$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$1$$44$1$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$1$$44$2$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$2$$44$0$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$2$$44$3$$93$(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_ursina$prefabs$checkbox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$color_picker(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$conversation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$cursor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$draggable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$dropdown_menu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$editor_camera(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$file_browser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$file_browser_save(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$first_person_controller(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$frame_animation_3d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$grid_editor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$health_bar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$hot_reloader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$input_field(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$made_with_ursina(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$memory_counter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$panel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$platformer_controller_2d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$primitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$radial_menu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sky(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$slider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sprite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$sprite_sheet_animation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$text_field(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$tilemap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$tooltip(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$trail_renderer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$ursfx(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$ursina_splash(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$vec_field(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$video_recorder(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$prefabs$window_panel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$raycast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scene(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$_blend_export(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$_blender_scene_to_ursina(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$chunk_mesh(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$colorize(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$combine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$generate_normals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$grid_layout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$merge_vertices(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$noclip_mode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$position_limiter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$project_uvs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$scrollable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$smooth_follow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$scripts$terraincast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$basic_lighting_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$colored_lights_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$fresnel_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$geom_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$instancing_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$lit_with_shadows_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$matcap_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$noise_fog_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$normals_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$projector_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_contrast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_empty(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_grayscale(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_outline_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$camera_vertical_blur(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$fxaa(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$pixelation_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$screenspace_shaders$ssao(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$texture_blend_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$transition_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$triplanar_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$shaders$unlit_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$string_utilities(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$texture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$texture_importer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ursina$trigger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
, NULL
#endif
},
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingcms", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._webp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"VoxelTypes", modulecode_VoxelTypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"WorldGeneration", modulecode_WorldGeneration, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill", modulecode_dill, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.__info__", modulecode_dill$__info__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill._dill", modulecode_dill$_dill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill._objects", modulecode_dill$_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill._shims", modulecode_dill$_shims, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.detect", modulecode_dill$detect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.logger", modulecode_dill$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.objtypes", modulecode_dill$objtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.pointers", modulecode_dill$pointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.session", modulecode_dill$session, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.settings", modulecode_dill$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.source", modulecode_dill$source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.temp", modulecode_dill$temp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct", modulecode_direct, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.cluster", modulecode_direct$cluster, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.cluster.ClusterClient", modulecode_direct$cluster$ClusterClient, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.cluster.ClusterConfig", modulecode_direct$cluster$ClusterConfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.cluster.ClusterMsgs", modulecode_direct$cluster$ClusterMsgs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.cluster.ClusterServer", modulecode_direct$cluster$ClusterServer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directdevices", modulecode_direct$directdevices, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directdevices.DirectDeviceManager", modulecode_direct$directdevices$DirectDeviceManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directdevices.DirectFastrak", modulecode_direct$directdevices$DirectFastrak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directdevices.DirectJoybox", modulecode_direct$directdevices$DirectJoybox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directdevices.DirectRadamec", modulecode_direct$directdevices$DirectRadamec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify", modulecode_direct$directnotify, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify.DirectNotify", modulecode_direct$directnotify$DirectNotify, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify.DirectNotifyGlobal", modulecode_direct$directnotify$DirectNotifyGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify.Logger", modulecode_direct$directnotify$Logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify.LoggerGlobal", modulecode_direct$directnotify$LoggerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directnotify.Notifier", modulecode_direct$directnotify$Notifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools", modulecode_direct$directtools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectCameraControl", modulecode_direct$directtools$DirectCameraControl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectGeometry", modulecode_direct$directtools$DirectGeometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectGlobals", modulecode_direct$directtools$DirectGlobals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectGrid", modulecode_direct$directtools$DirectGrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectLights", modulecode_direct$directtools$DirectLights, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectManipulation", modulecode_direct$directtools$DirectManipulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectSelection", modulecode_direct$directtools$DirectSelection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectSession", modulecode_direct$directtools$DirectSession, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directtools.DirectUtil", modulecode_direct$directtools$DirectUtil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directutil", modulecode_direct$directutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.directutil.DeltaProfiler", modulecode_direct$directutil$DeltaProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.distributed", modulecode_direct$distributed, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.distributed.ClockDelta", modulecode_direct$distributed$ClockDelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.distributed.MsgTypes", modulecode_direct$distributed$MsgTypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.distributed.PyDatagram", modulecode_direct$distributed$PyDatagram, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.distributed.PyDatagramIterator", modulecode_direct$distributed$PyDatagramIterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.extensions_native", modulecode_direct$extensions_native, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.extensions_native.CInterval_extensions", modulecode_direct$extensions_native$CInterval_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.extensions_native.HTTPChannel_extensions", modulecode_direct$extensions_native$HTTPChannel_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.extensions_native.NodePath_extensions", modulecode_direct$extensions_native$NodePath_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.extensions_native.extension_native_helpers", modulecode_direct$extensions_native$extension_native_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.filter", modulecode_direct$filter, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.filter.FilterManager", modulecode_direct$filter$FilterManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.fsm", modulecode_direct$fsm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.fsm.ClassicFSM", modulecode_direct$fsm$ClassicFSM, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.fsm.StatePush", modulecode_direct$fsm$StatePush, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui", modulecode_direct$gui, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectButton", modulecode_direct$gui$DirectButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectCheckButton", modulecode_direct$gui$DirectCheckButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectDialog", modulecode_direct$gui$DirectDialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectEntry", modulecode_direct$gui$DirectEntry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectEntryScroll", modulecode_direct$gui$DirectEntryScroll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectFrame", modulecode_direct$gui$DirectFrame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectGui", modulecode_direct$gui$DirectGui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectGuiBase", modulecode_direct$gui$DirectGuiBase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectGuiGlobals", modulecode_direct$gui$DirectGuiGlobals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectLabel", modulecode_direct$gui$DirectLabel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectOptionMenu", modulecode_direct$gui$DirectOptionMenu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectRadioButton", modulecode_direct$gui$DirectRadioButton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectScrollBar", modulecode_direct$gui$DirectScrollBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectScrolledFrame", modulecode_direct$gui$DirectScrolledFrame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectScrolledList", modulecode_direct$gui$DirectScrolledList, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectSlider", modulecode_direct$gui$DirectSlider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.DirectWaitBar", modulecode_direct$gui$DirectWaitBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.OnscreenGeom", modulecode_direct$gui$OnscreenGeom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.OnscreenImage", modulecode_direct$gui$OnscreenImage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.gui.OnscreenText", modulecode_direct$gui$OnscreenText, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval", modulecode_direct$interval, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.ActorInterval", modulecode_direct$interval$ActorInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.FunctionInterval", modulecode_direct$interval$FunctionInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.IndirectInterval", modulecode_direct$interval$IndirectInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.Interval", modulecode_direct$interval$Interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.IntervalGlobal", modulecode_direct$interval$IntervalGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.IntervalManager", modulecode_direct$interval$IntervalManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.LerpBlendHelpers", modulecode_direct$interval$LerpBlendHelpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.LerpInterval", modulecode_direct$interval$LerpInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.MetaInterval", modulecode_direct$interval$MetaInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.MopathInterval", modulecode_direct$interval$MopathInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.ParticleInterval", modulecode_direct$interval$ParticleInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.ProjectileInterval", modulecode_direct$interval$ProjectileInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.SoundInterval", modulecode_direct$interval$SoundInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.interval.TestInterval", modulecode_direct$interval$TestInterval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.particles", modulecode_direct$particles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.particles.ParticleManagerGlobal", modulecode_direct$particles$ParticleManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase", modulecode_direct$showbase, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.AppRunnerGlobal", modulecode_direct$showbase$AppRunnerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.BufferViewer", modulecode_direct$showbase$BufferViewer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.BulletinBoard", modulecode_direct$showbase$BulletinBoard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.BulletinBoardGlobal", modulecode_direct$showbase$BulletinBoardGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.DConfig", modulecode_direct$showbase$DConfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.DirectObject", modulecode_direct$showbase$DirectObject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.EventManager", modulecode_direct$showbase$EventManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.EventManagerGlobal", modulecode_direct$showbase$EventManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.ExceptionVarDump", modulecode_direct$showbase$ExceptionVarDump, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.GarbageReport", modulecode_direct$showbase$GarbageReport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.Job", modulecode_direct$showbase$Job, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.JobManager", modulecode_direct$showbase$JobManager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.JobManagerGlobal", modulecode_direct$showbase$JobManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.Loader", modulecode_direct$showbase$Loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.Messenger", modulecode_direct$showbase$Messenger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.MessengerGlobal", modulecode_direct$showbase$MessengerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.OnScreenDebug", modulecode_direct$showbase$OnScreenDebug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.PhysicsManagerGlobal", modulecode_direct$showbase$PhysicsManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.ProfileSession", modulecode_direct$showbase$ProfileSession, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.PythonUtil", modulecode_direct$showbase$PythonUtil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.SfxPlayer", modulecode_direct$showbase$SfxPlayer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.ShowBase", modulecode_direct$showbase$ShowBase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.ShowBaseGlobal", modulecode_direct$showbase$ShowBaseGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.TkGlobal", modulecode_direct$showbase$TkGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showbase.Transitions", modulecode_direct$showbase$Transitions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showutil", modulecode_direct$showutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.showutil.TexMemWatcher", modulecode_direct$showutil$TexMemWatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.stdpy", modulecode_direct$stdpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.stdpy.file", modulecode_direct$stdpy$file, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.stdpy.thread", modulecode_direct$stdpy$thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.stdpy.threading", modulecode_direct$stdpy$threading, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.task", modulecode_direct$task, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.task.FrameProfiler", modulecode_direct$task$FrameProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.task.Task", modulecode_direct$task$Task, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.task.TaskManagerGlobal", modulecode_direct$task$TaskManagerGlobal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.task.TaskProfiler", modulecode_direct$task$TaskProfiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels", modulecode_direct$tkpanels, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.DirectSessionPanel", modulecode_direct$tkpanels$DirectSessionPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.FSMInspector", modulecode_direct$tkpanels$FSMInspector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.Inspector", modulecode_direct$tkpanels$Inspector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.NotifyPanel", modulecode_direct$tkpanels$NotifyPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.Placer", modulecode_direct$tkpanels$Placer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkpanels.TaskManagerPanel", modulecode_direct$tkpanels$TaskManagerPanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets", modulecode_direct$tkwidgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.AppShell", modulecode_direct$tkwidgets$AppShell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.Dial", modulecode_direct$tkwidgets$Dial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.EntryScale", modulecode_direct$tkwidgets$EntryScale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.Floater", modulecode_direct$tkwidgets$Floater, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.MemoryExplorer", modulecode_direct$tkwidgets$MemoryExplorer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.ProgressBar", modulecode_direct$tkwidgets$ProgressBar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.SceneGraphExplorer", modulecode_direct$tkwidgets$SceneGraphExplorer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.Slider", modulecode_direct$tkwidgets$Slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.Tree", modulecode_direct$tkwidgets$Tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.Valuator", modulecode_direct$tkwidgets$Valuator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.VectorWidgets", modulecode_direct$tkwidgets$VectorWidgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"direct.tkwidgets.WidgetPropertiesDialog", modulecode_direct$tkwidgets$WidgetPropertiesDialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptions", modulecode_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gltf", modulecode_gltf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gltf._converter", modulecode_gltf$_converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gltf._loader", modulecode_gltf$_loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gltf.parseutils", modulecode_gltf$parseutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gltf.version", modulecode_gltf$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modloader", modulecode_modloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d", modulecode_panda3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d.bullet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d.core", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d.direct", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d.physics", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"panda3d.vrpn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3", modulecode_pyreadline3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.clipboard", modulecode_pyreadline3$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.clipboard.ironpython_clipboard", modulecode_pyreadline3$clipboard$ironpython_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.clipboard.no_clipboard", modulecode_pyreadline3$clipboard$no_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.clipboard.win32_clipboard", modulecode_pyreadline3$clipboard$win32_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.console", modulecode_pyreadline3$console, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.console.ansi", modulecode_pyreadline3$console$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.console.console", modulecode_pyreadline3$console$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.console.event", modulecode_pyreadline3$console$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.console.ironpython_console", modulecode_pyreadline3$console$ironpython_console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.error", modulecode_pyreadline3$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.keysyms", modulecode_pyreadline3$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.keysyms.common", modulecode_pyreadline3$keysyms$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.keysyms.ironpython_keysyms", modulecode_pyreadline3$keysyms$ironpython_keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.keysyms.keysyms", modulecode_pyreadline3$keysyms$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.keysyms.winconstants", modulecode_pyreadline3$keysyms$winconstants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.lineeditor", modulecode_pyreadline3$lineeditor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.lineeditor.history", modulecode_pyreadline3$lineeditor$history, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.lineeditor.lineobj", modulecode_pyreadline3$lineeditor$lineobj, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.lineeditor.wordmatcher", modulecode_pyreadline3$lineeditor$wordmatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.logger", modulecode_pyreadline3$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.modes", modulecode_pyreadline3$modes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.modes.basemode", modulecode_pyreadline3$modes$basemode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.modes.emacs", modulecode_pyreadline3$modes$emacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.modes.notemacs", modulecode_pyreadline3$modes$notemacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.modes.vi", modulecode_pyreadline3$modes$vi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.py3k_compat", modulecode_pyreadline3$py3k_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.release", modulecode_pyreadline3$release, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.rlmain", modulecode_pyreadline3$rlmain, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline3.unicode_helper", modulecode_pyreadline3$unicode_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"readline", modulecode_readline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo", modulecode_screeninfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.common", modulecode_screeninfo$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators", modulecode_screeninfo$enumerators, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.cygwin", modulecode_screeninfo$enumerators$cygwin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.drm", modulecode_screeninfo$enumerators$drm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.osx", modulecode_screeninfo$enumerators$osx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.windows", modulecode_screeninfo$enumerators$windows, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.xinerama", modulecode_screeninfo$enumerators$xinerama, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.enumerators.xrandr", modulecode_screeninfo$enumerators$xrandr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.screeninfo", modulecode_screeninfo$screeninfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"screeninfo.util", modulecode_screeninfo$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina", modulecode_ursina, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.application", modulecode_ursina$application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.audio", modulecode_ursina$audio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.boxcast", modulecode_ursina$boxcast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.build", modulecode_ursina$build, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.camera", modulecode_ursina$camera, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.collider", modulecode_ursina$collider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.color", modulecode_ursina$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.curve", modulecode_ursina$curve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.duplicate", modulecode_ursina$duplicate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor", modulecode_ursina$editor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.level_editor", modulecode_ursina$editor$level_editor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes", modulecode_ursina$editor$scenes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.test2[1,0]", modulecode_ursina$editor$scenes$test2$$91$1$$44$0$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.untitled_scene[0,0]", modulecode_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.untitled_scene[1,1]", modulecode_ursina$editor$scenes$untitled_scene$$91$1$$44$1$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.untitled_scene[1,2]", modulecode_ursina$editor$scenes$untitled_scene$$91$1$$44$2$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.untitled_scene[2,0]", modulecode_ursina$editor$scenes$untitled_scene$$91$2$$44$0$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.editor.scenes.untitled_scene[2,3]", modulecode_ursina$editor$scenes$untitled_scene$$91$2$$44$3$$93$, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.entity", modulecode_ursina$entity, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.gamepad", modulecode_ursina$gamepad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.hit_info", modulecode_ursina$hit_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.input_handler", modulecode_ursina$input_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.lights", modulecode_ursina$lights, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.main", modulecode_ursina$main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.mesh", modulecode_ursina$mesh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.mesh_exporter", modulecode_ursina$mesh_exporter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.mesh_importer", modulecode_ursina$mesh_importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models", modulecode_ursina$models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural", modulecode_ursina$models$procedural, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.capsule", modulecode_ursina$models$procedural$capsule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.circle", modulecode_ursina$models$procedural$circle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.cone", modulecode_ursina$models$procedural$cone, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.cube", modulecode_ursina$models$procedural$cube, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.cylinder", modulecode_ursina$models$procedural$cylinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.grid", modulecode_ursina$models$procedural$grid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.pipe", modulecode_ursina$models$procedural$pipe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.plane", modulecode_ursina$models$procedural$plane, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.quad", modulecode_ursina$models$procedural$quad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.models.procedural.terrain", modulecode_ursina$models$procedural$terrain, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.mouse", modulecode_ursina$mouse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs", modulecode_ursina$prefabs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.animation", modulecode_ursina$prefabs$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.animator", modulecode_ursina$prefabs$animator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.button", modulecode_ursina$prefabs$button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.button_group", modulecode_ursina$prefabs$button_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.button_list", modulecode_ursina$prefabs$button_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.checkbox", modulecode_ursina$prefabs$checkbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.color_picker", modulecode_ursina$prefabs$color_picker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.conversation", modulecode_ursina$prefabs$conversation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.cursor", modulecode_ursina$prefabs$cursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.draggable", modulecode_ursina$prefabs$draggable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.dropdown_menu", modulecode_ursina$prefabs$dropdown_menu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.editor_camera", modulecode_ursina$prefabs$editor_camera, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.file_browser", modulecode_ursina$prefabs$file_browser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.file_browser_save", modulecode_ursina$prefabs$file_browser_save, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.first_person_controller", modulecode_ursina$prefabs$first_person_controller, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.frame_animation_3d", modulecode_ursina$prefabs$frame_animation_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.grid_editor", modulecode_ursina$prefabs$grid_editor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.health_bar", modulecode_ursina$prefabs$health_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.hot_reloader", modulecode_ursina$prefabs$hot_reloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.input_field", modulecode_ursina$prefabs$input_field, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.made_with_ursina", modulecode_ursina$prefabs$made_with_ursina, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.memory_counter", modulecode_ursina$prefabs$memory_counter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.panel", modulecode_ursina$prefabs$panel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.platformer_controller_2d", modulecode_ursina$prefabs$platformer_controller_2d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.primitives", modulecode_ursina$prefabs$primitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.radial_menu", modulecode_ursina$prefabs$radial_menu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.sky", modulecode_ursina$prefabs$sky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.slider", modulecode_ursina$prefabs$slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.sprite", modulecode_ursina$prefabs$sprite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.sprite_sheet_animation", modulecode_ursina$prefabs$sprite_sheet_animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.text_field", modulecode_ursina$prefabs$text_field, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.tilemap", modulecode_ursina$prefabs$tilemap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.tooltip", modulecode_ursina$prefabs$tooltip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.trail_renderer", modulecode_ursina$prefabs$trail_renderer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.ursfx", modulecode_ursina$prefabs$ursfx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.ursina_splash", modulecode_ursina$prefabs$ursina_splash, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.vec_field", modulecode_ursina$prefabs$vec_field, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.video_recorder", modulecode_ursina$prefabs$video_recorder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.prefabs.window_panel", modulecode_ursina$prefabs$window_panel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.raycast", modulecode_ursina$raycast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scene", modulecode_ursina$scene, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts", modulecode_ursina$scripts, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts._blend_export", modulecode_ursina$scripts$_blend_export, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts._blender_scene_to_ursina", modulecode_ursina$scripts$_blender_scene_to_ursina, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.chunk_mesh", modulecode_ursina$scripts$chunk_mesh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.colorize", modulecode_ursina$scripts$colorize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.combine", modulecode_ursina$scripts$combine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.generate_normals", modulecode_ursina$scripts$generate_normals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.grid_layout", modulecode_ursina$scripts$grid_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.merge_vertices", modulecode_ursina$scripts$merge_vertices, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.noclip_mode", modulecode_ursina$scripts$noclip_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.position_limiter", modulecode_ursina$scripts$position_limiter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.project_uvs", modulecode_ursina$scripts$project_uvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.scrollable", modulecode_ursina$scripts$scrollable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.smooth_follow", modulecode_ursina$scripts$smooth_follow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.scripts.terraincast", modulecode_ursina$scripts$terraincast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.sequence", modulecode_ursina$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shader", modulecode_ursina$shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders", modulecode_ursina$shaders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.basic_lighting_shader", modulecode_ursina$shaders$basic_lighting_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.colored_lights_shader", modulecode_ursina$shaders$colored_lights_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.fresnel_shader", modulecode_ursina$shaders$fresnel_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.geom_shader", modulecode_ursina$shaders$geom_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.instancing_shader", modulecode_ursina$shaders$instancing_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.lit_with_shadows_shader", modulecode_ursina$shaders$lit_with_shadows_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.matcap_shader", modulecode_ursina$shaders$matcap_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.noise_fog_shader", modulecode_ursina$shaders$noise_fog_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.normals_shader", modulecode_ursina$shaders$normals_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.projector_shader", modulecode_ursina$shaders$projector_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders", modulecode_ursina$shaders$screenspace_shaders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_contrast", modulecode_ursina$shaders$screenspace_shaders$camera_contrast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_empty", modulecode_ursina$shaders$screenspace_shaders$camera_empty, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_grayscale", modulecode_ursina$shaders$screenspace_shaders$camera_grayscale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_outline_shader", modulecode_ursina$shaders$screenspace_shaders$camera_outline_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.camera_vertical_blur", modulecode_ursina$shaders$screenspace_shaders$camera_vertical_blur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.fxaa", modulecode_ursina$shaders$screenspace_shaders$fxaa, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.pixelation_shader", modulecode_ursina$shaders$screenspace_shaders$pixelation_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.screenspace_shaders.ssao", modulecode_ursina$shaders$screenspace_shaders$ssao, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.texture_blend_shader", modulecode_ursina$shaders$texture_blend_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.transition_shader", modulecode_ursina$shaders$transition_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.triplanar_shader", modulecode_ursina$shaders$triplanar_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.shaders.unlit_shader", modulecode_ursina$shaders$unlit_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.string_utilities", modulecode_ursina$string_utilities, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.text", modulecode_ursina$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.texture", modulecode_ursina$texture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.texture_importer", modulecode_ursina$texture_importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.trigger", modulecode_ursina$trigger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.ursinamath", modulecode_ursina$ursinamath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.ursinastuff", modulecode_ursina$ursinastuff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.vec2", modulecode_ursina$vec2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.vec3", modulecode_ursina$vec3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.vec4", modulecode_ursina$vec4, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ursina.window", modulecode_ursina$window, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"utils", modulecode_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__future__", NULL, 0, 4875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__hello__", NULL, 1, 1039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__", NULL, 2, 384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.ham", NULL, 3, 110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.ham.eggs", NULL, 4, 115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.spam", NULL, 5, 389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_aix_support", NULL, 6, 4328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bootsubprocess", NULL, 7, 4421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compat_pickle", NULL, 8, 7477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compression", NULL, 9, 8011, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_markupbase", NULL, 10, 14043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_osx_support", NULL, 11, 19832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_py_abc", NULL, 12, 7839, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pydecimal", NULL, 13, 244222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyio", NULL, 14, 120011, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 15, 5385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_strptime", NULL, 16, 27888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_threading_local", NULL, 17, 9166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_weakrefset", NULL, 18, 13101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"argparse", NULL, 19, 113381, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ast", NULL, 20, 108938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio", NULL, 21, 1297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_events", NULL, 22, 90474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_futures", NULL, 23, 3350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_subprocess", NULL, 24, 16665, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_tasks", NULL, 25, 4138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.constants", NULL, 26, 923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.coroutines", NULL, 27, 3959, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.events", NULL, 28, 37749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.exceptions", NULL, 29, 3605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.format_helpers", NULL, 30, 4093, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.futures", NULL, 31, 18472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.locks", NULL, 32, 29169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.log", NULL, 33, 256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.mixins", NULL, 34, 1158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.proactor_events", NULL, 35, 47698, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.protocols", NULL, 36, 9407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.queues", NULL, 37, 12788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.runners", NULL, 38, 10195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.selector_events", NULL, 39, 64144, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.sslproto", NULL, 40, 43478, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.staggered", NULL, 41, 6598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.streams", NULL, 42, 33639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.subprocess", NULL, 43, 12620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.taskgroups", NULL, 44, 8056, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.tasks", NULL, 45, 40968, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.threads", NULL, 46, 1255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.timeouts", NULL, 47, 7745, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.transports", NULL, 48, 15131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.trsock", NULL, 49, 5346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_events", NULL, 50, 46474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_utils", NULL, 51, 7718, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"base64", NULL, 52, 28408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bdb", NULL, 53, 38635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bisect", NULL, 54, 3662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bz2", NULL, 55, 16124, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"calendar", NULL, 56, 44716, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgi", NULL, 57, 43823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgitb", NULL, 58, 18843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chunk", NULL, 59, 7388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cmd", NULL, 60, 20559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"code", NULL, 61, 13863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codeop", NULL, 62, 7383, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections", NULL, 63, 77992, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections.abc", NULL, 64, 258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorsys", NULL, 65, 4903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent", NULL, 66, 106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures", NULL, 67, 1412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 68, 37214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 69, 37984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 70, 11034, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"configparser", NULL, 71, 71656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextlib", NULL, 72, 32575, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextvars", NULL, 73, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copy", NULL, 74, 11149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copyreg", NULL, 75, 8142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"csv", NULL, 76, 20018, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes", NULL, 77, 26754, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._endian", NULL, 78, 3944, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.util", NULL, 79, 18514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.wintypes", NULL, 80, 8395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataclasses", NULL, 81, 47132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"datetime", NULL, 82, 101472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dbm", NULL, 83, 6919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dbm.ndbm", NULL, 84, 197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"decimal", NULL, 85, 505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"difflib", NULL, 86, 81609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dis", NULL, 87, 36688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email", NULL, 88, 2063, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._encoded_words", NULL, 89, 9079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 90, 149429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._parseaddr", NULL, 91, 24262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._policybase", NULL, 92, 19201, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.base64mime", NULL, 93, 4313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.charset", NULL, 94, 15983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.contentmanager", NULL, 95, 13792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.encoders", NULL, 96, 2348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.errors", NULL, 97, 8407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.feedparser", NULL, 98, 21425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.generator", NULL, 99, 21561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.header", NULL, 100, 26938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.headerregistry", NULL, 101, 33715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.iterators", NULL, 102, 3125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.message", NULL, 103, 58857, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.parser", NULL, 104, 7346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.policy", NULL, 105, 12395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.quoprimime", NULL, 106, 11199, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.utils", NULL, 107, 15438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings", NULL, 108, 6412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.aliases", NULL, 109, 12611, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ascii", NULL, 110, 2672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 111, 3285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5", NULL, 112, 2097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 113, 2107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 114, 4809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.charmap", NULL, 115, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp037", NULL, 116, 3348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 117, 3424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 118, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 119, 14216, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 120, 3338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 121, 3375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 122, 3372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 123, 3375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 124, 3388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 125, 3377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 126, 3396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 127, 3374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 128, 3382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 129, 3380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp273", NULL, 130, 3334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp424", NULL, 131, 3378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp437", NULL, 132, 13849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp500", NULL, 133, 3348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp720", NULL, 134, 3445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp737", NULL, 135, 14251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp775", NULL, 136, 13889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp850", NULL, 137, 13430, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp852", NULL, 138, 13905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp855", NULL, 139, 14218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp856", NULL, 140, 3410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp857", NULL, 141, 13225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp858", NULL, 142, 13400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp860", NULL, 143, 13820, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp861", NULL, 144, 13845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp862", NULL, 145, 14078, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp863", NULL, 146, 13841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp864", NULL, 147, 13880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp865", NULL, 148, 13845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp866", NULL, 149, 14258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp869", NULL, 150, 13782, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp874", NULL, 151, 3476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp875", NULL, 152, 3345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp932", NULL, 153, 2099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp949", NULL, 154, 2099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp950", NULL, 155, 2099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 156, 2113, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 157, 2113, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 158, 2101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 159, 2101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 160, 2103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 161, 2101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gbk", NULL, 162, 2095, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 163, 3272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 164, 3549, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hz", NULL, 165, 2093, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.idna", NULL, 166, 11507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 167, 2114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 168, 2118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 169, 2118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 170, 2125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 171, 2118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 172, 2123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 173, 2114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 174, 3347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 175, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 176, 3446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 177, 3355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 178, 3373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 179, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 180, 3354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 181, 3347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 182, 3354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 183, 3347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 184, 3348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 185, 3392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 186, 3355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 187, 3386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 188, 3347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.johab", NULL, 189, 2099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 190, 3399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 191, 3310, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 192, 3385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 193, 3362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 194, 2684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 195, 13735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 196, 3394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 197, 3384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 198, 3328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 199, 3368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 200, 3387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 201, 3528, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 202, 3385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 203, 3395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 204, 3388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mbcs", NULL, 205, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.oem", NULL, 206, 2133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.palmos", NULL, 207, 3375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 208, 3469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.punycode", NULL, 209, 10724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 210, 3576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 211, 2814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 212, 4796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 213, 2107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 214, 2118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 215, 2118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 216, 3437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.undefined", NULL, 217, 2787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 218, 2794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 219, 8008, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 220, 2300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 221, 2300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 222, 7903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 223, 2193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 224, 2193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 225, 2221, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 226, 2280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 227, 7274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 228, 5231, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 229, 4706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"enum", NULL, 230, 87319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"filecmp", NULL, 231, 15672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fileinput", NULL, 232, 21130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fnmatch", NULL, 233, 7433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fractions", NULL, 234, 29195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ftplib", NULL, 235, 47130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"functools", NULL, 236, 46597, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getopt", NULL, 237, 9694, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gettext", NULL, 238, 23435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"glob", NULL, 239, 11106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"graphlib", NULL, 240, 11030, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gzip", NULL, 241, 33681, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hashlib", NULL, 242, 12300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"heapq", NULL, 243, 20538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hmac", NULL, 244, 11434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html", NULL, 245, 4762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.entities", NULL, 246, 99407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.parser", NULL, 247, 19340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http", NULL, 248, 8686, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.client", NULL, 249, 60180, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imaplib", NULL, 250, 68558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imghdr", NULL, 251, 7803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imp", NULL, 252, 16422, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib", NULL, 253, 6615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._abc", NULL, 254, 2307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 255, 57765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 256, 72160, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.abc", NULL, 257, 14455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.machinery", NULL, 258, 1264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata", NULL, 259, 58884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._adapters", NULL, 260, 3756, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._collections", NULL, 261, 2103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._functools", NULL, 262, 3543, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._itertools", NULL, 263, 2506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._meta", NULL, 264, 2874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._text", NULL, 265, 4301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.readers", NULL, 266, 493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources", NULL, 267, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._adapters", NULL, 268, 10655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._common", NULL, 269, 4201, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._itertools", NULL, 270, 1300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._legacy", NULL, 271, 6398, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.abc", NULL, 272, 8462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.readers", NULL, 273, 8261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.simple", NULL, 274, 6825, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.simple", NULL, 275, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"inspect", NULL, 276, 141877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ipaddress", NULL, 277, 93994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json", NULL, 278, 14175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.decoder", NULL, 279, 15151, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.encoder", NULL, 280, 16773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.scanner", NULL, 281, 3611, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"keyword", NULL, 282, 1032, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"linecache", NULL, 283, 7433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"locale", NULL, 284, 64255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging", NULL, 285, 98829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging.handlers", NULL, 286, 70401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lzma", NULL, 287, 16681, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mailcap", NULL, 288, 12747, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mimetypes", NULL, 289, 25816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modulefinder", NULL, 290, 30982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing", NULL, 291, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 292, 48471, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 293, 19517, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 294, 6193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 295, 3937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 296, 16993, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 297, 14646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 298, 73493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 299, 47330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 300, 6460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 301, 19132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 302, 19964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 303, 14945, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 304, 9943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_tracker", NULL, 305, 11373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.shared_memory", NULL, 306, 24504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 307, 12028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 308, 12487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 309, 22136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 310, 20345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"netrc", NULL, 311, 9852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"nturl2path", NULL, 312, 3452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numbers", NULL, 313, 15214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"opcode", NULL, 314, 13816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"operator", NULL, 315, 18723, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"optparse", NULL, 316, 73680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging", NULL, 317, 469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging._structures", NULL, 318, 3598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging.version", NULL, 319, 20982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib", NULL, 320, 67684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pdb", NULL, 321, 85330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickle", NULL, 322, 86597, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickletools", NULL, 323, 86237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pipes", NULL, 324, 11930, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources", NULL, 325, 159275, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor", NULL, 326, 117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 327, 29336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 328, 751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 329, 10677, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 330, 4204, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 331, 5489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 332, 1322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 333, 6420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 334, 7421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 335, 8295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 336, 124, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 337, 9356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 338, 20219, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 339, 26527, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 340, 218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 341, 167888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 342, 26879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 343, 489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 344, 577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 345, 13164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 346, 7932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 347, 3620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 348, 16469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 349, 7584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 350, 34298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 351, 21283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 352, 6618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 353, 21810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 354, 8262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.actions", NULL, 355, 8397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.common", NULL, 356, 14719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.core", NULL, 357, 277571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.diagram", NULL, 358, 27925, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.exceptions", NULL, 359, 12861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.helpers", NULL, 360, 53562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.results", NULL, 361, 36245, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.testing", NULL, 362, 19441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.unicode", NULL, 363, 15299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing.util", NULL, 364, 14198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources.extern", NULL, 365, 4236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkgutil", NULL, 366, 31542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"platform", NULL, 367, 43194, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"poplib", NULL, 368, 20932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pprint", NULL, 369, 33434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"profile", NULL, 370, 23914, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pstats", NULL, 371, 41831, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"py_compile", NULL, 372, 10738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyclbr", NULL, 373, 15842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"queue", NULL, 374, 16417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"quopri", NULL, 375, 10821, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"random", NULL, 376, 34488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re", NULL, 377, 19269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._casefix", NULL, 378, 1810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._compiler", NULL, 379, 31784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._constants", NULL, 380, 5914, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._parser", NULL, 381, 49836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"reprlib", NULL, 382, 9642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rlcompleter", NULL, 383, 8974, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"runpy", NULL, 384, 16080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sched", NULL, 385, 8366, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"secrets", NULL, 386, 2826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"selectors", NULL, 387, 28309, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shelve", NULL, 388, 13837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shlex", NULL, 389, 14667, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shutil", NULL, 390, 70660, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"signal", NULL, 391, 4981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"smtplib", NULL, 392, 54084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sndhdr", NULL, 393, 12390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socket", NULL, 394, 45441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socketserver", NULL, 395, 37020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3", NULL, 396, 1811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3.dbapi2", NULL, 397, 4896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_compile", NULL, 398, 777, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_constants", NULL, 399, 780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_parse", NULL, 400, 773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ssl", NULL, 401, 72323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"statistics", NULL, 402, 58367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"string", NULL, 403, 12602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stringprep", NULL, 404, 26491, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"struct", NULL, 405, 344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"subprocess", NULL, 406, 84644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symtable", NULL, 407, 19471, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sysconfig", NULL, 408, 31648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tarfile", NULL, 409, 129908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tempfile", NULL, 410, 40614, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"textwrap", NULL, 411, 19559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"threading", NULL, 412, 69797, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"timeit", NULL, 413, 16402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter", NULL, 414, 258343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.colorchooser", NULL, 415, 2990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.commondialog", NULL, 416, 2084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.constants", NULL, 417, 1902, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.dialog", NULL, 418, 2323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.filedialog", NULL, 419, 24683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.messagebox", NULL, 420, 4700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.simpledialog", NULL, 421, 19407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"token", NULL, 422, 3687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tokenize", NULL, 423, 30322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib", NULL, 424, 290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._parser", NULL, 425, 30765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._re", NULL, 426, 4407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._types", NULL, 427, 320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"trace", NULL, 428, 35996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"traceback", NULL, 429, 46052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tracemalloc", NULL, 430, 29048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"types", NULL, 431, 14783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing", NULL, 432, 159497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib", NULL, 433, 102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.parse", NULL, 434, 54553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uu", NULL, 435, 8759, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"warnings", NULL, 436, 24996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"weakref", NULL, 437, 34921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"webbrowser", NULL, 438, 32708, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xdrlib", NULL, 439, 13106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml", NULL, 440, 679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers", NULL, 441, 289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 442, 380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc", NULL, 443, 102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 444, 56913, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile", NULL, 445, 117946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
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
    {"ast", 20, 108938},
    {"collections", 63, -77992},
    {"collections.abc", 64, 258},
    {"contextlib", 72, 32575},
    {"copyreg", 75, 8142},
    {"dis", 87, 36688},
    {"encodings", 108, -6412},
    {"encodings.aliases", 109, 12611},
    {"encodings.ascii", 110, 2672},
    {"encodings.big5", 112, 2097},
    {"encodings.big5hkscs", 113, 2107},
    {"encodings.charmap", 115, 4083},
    {"encodings.cp037", 116, 3348},
    {"encodings.cp1006", 117, 3424},
    {"encodings.cp1026", 118, 3352},
    {"encodings.cp1125", 119, 14216},
    {"encodings.cp1140", 120, 3338},
    {"encodings.cp1250", 121, 3375},
    {"encodings.cp1251", 122, 3372},
    {"encodings.cp1252", 123, 3375},
    {"encodings.cp1253", 124, 3388},
    {"encodings.cp1254", 125, 3377},
    {"encodings.cp1255", 126, 3396},
    {"encodings.cp1256", 127, 3374},
    {"encodings.cp1257", 128, 3382},
    {"encodings.cp1258", 129, 3380},
    {"encodings.cp273", 130, 3334},
    {"encodings.cp424", 131, 3378},
    {"encodings.cp437", 132, 13849},
    {"encodings.cp500", 133, 3348},
    {"encodings.cp720", 134, 3445},
    {"encodings.cp737", 135, 14251},
    {"encodings.cp775", 136, 13889},
    {"encodings.cp850", 137, 13430},
    {"encodings.cp852", 138, 13905},
    {"encodings.cp855", 139, 14218},
    {"encodings.cp856", 140, 3410},
    {"encodings.cp857", 141, 13225},
    {"encodings.cp858", 142, 13400},
    {"encodings.cp860", 143, 13820},
    {"encodings.cp861", 144, 13845},
    {"encodings.cp862", 145, 14078},
    {"encodings.cp863", 146, 13841},
    {"encodings.cp864", 147, 13880},
    {"encodings.cp865", 148, 13845},
    {"encodings.cp866", 149, 14258},
    {"encodings.cp869", 150, 13782},
    {"encodings.cp874", 151, 3476},
    {"encodings.cp875", 152, 3345},
    {"encodings.cp932", 153, 2099},
    {"encodings.cp949", 154, 2099},
    {"encodings.cp950", 155, 2099},
    {"encodings.euc_jis_2004", 156, 2113},
    {"encodings.euc_jisx0213", 157, 2113},
    {"encodings.euc_jp", 158, 2101},
    {"encodings.euc_kr", 159, 2101},
    {"encodings.gb18030", 160, 2103},
    {"encodings.gb2312", 161, 2101},
    {"encodings.gbk", 162, 2095},
    {"encodings.hp_roman8", 164, 3549},
    {"encodings.hz", 165, 2093},
    {"encodings.iso2022_jp", 167, 2114},
    {"encodings.iso2022_jp_1", 168, 2118},
    {"encodings.iso2022_jp_2", 169, 2118},
    {"encodings.iso2022_jp_2004", 170, 2125},
    {"encodings.iso2022_jp_3", 171, 2118},
    {"encodings.iso2022_jp_ext", 172, 2123},
    {"encodings.iso2022_kr", 173, 2114},
    {"encodings.iso8859_1", 174, 3347},
    {"encodings.iso8859_10", 175, 3352},
    {"encodings.iso8859_11", 176, 3446},
    {"encodings.iso8859_13", 177, 3355},
    {"encodings.iso8859_14", 178, 3373},
    {"encodings.iso8859_15", 179, 3352},
    {"encodings.iso8859_16", 180, 3354},
    {"encodings.iso8859_2", 181, 3347},
    {"encodings.iso8859_3", 182, 3354},
    {"encodings.iso8859_4", 183, 3347},
    {"encodings.iso8859_5", 184, 3348},
    {"encodings.iso8859_6", 185, 3392},
    {"encodings.iso8859_7", 186, 3355},
    {"encodings.iso8859_8", 187, 3386},
    {"encodings.iso8859_9", 188, 3347},
    {"encodings.johab", 189, 2099},
    {"encodings.koi8_r", 190, 3399},
    {"encodings.koi8_t", 191, 3310},
    {"encodings.koi8_u", 192, 3385},
    {"encodings.kz1048", 193, 3362},
    {"encodings.latin_1", 194, 2684},
    {"encodings.mac_arabic", 195, 13735},
    {"encodings.mac_croatian", 196, 3394},
    {"encodings.mac_cyrillic", 197, 3384},
    {"encodings.mac_farsi", 198, 3328},
    {"encodings.mac_greek", 199, 3368},
    {"encodings.mac_iceland", 200, 3387},
    {"encodings.mac_latin2", 201, 3528},
    {"encodings.mac_roman", 202, 3385},
    {"encodings.mac_romanian", 203, 3395},
    {"encodings.mac_turkish", 204, 3388},
    {"encodings.mbcs", 205, 2320},
    {"encodings.oem", 206, 2133},
    {"encodings.palmos", 207, 3375},
    {"encodings.ptcp154", 208, 3469},
    {"encodings.punycode", 209, 10724},
    {"encodings.quopri_codec", 210, 3576},
    {"encodings.raw_unicode_escape", 211, 2814},
    {"encodings.shift_jis", 213, 2107},
    {"encodings.shift_jis_2004", 214, 2118},
    {"encodings.shift_jisx0213", 215, 2118},
    {"encodings.tis_620", 216, 3437},
    {"encodings.undefined", 217, 2787},
    {"encodings.unicode_escape", 218, 2794},
    {"encodings.utf_16", 219, 8008},
    {"encodings.utf_16_be", 220, 2300},
    {"encodings.utf_16_le", 221, 2300},
    {"encodings.utf_32", 222, 7903},
    {"encodings.utf_32_be", 223, 2193},
    {"encodings.utf_32_le", 224, 2193},
    {"encodings.utf_7", 225, 2221},
    {"encodings.utf_8", 226, 2280},
    {"encodings.utf_8_sig", 227, 7274},
    {"encodings.uu_codec", 228, 5231},
    {"encodings.zlib_codec", 229, 4706},
    {"enum", 230, 87319},
    {"functools", 236, 46597},
    {"importlib", 253, -6615},
    {"importlib._bootstrap", 255, 57765},
    {"importlib._bootstrap_external", 256, 72160},
    {"importlib.machinery", 258, 1264},
    {"inspect", 276, 141877},
    {"keyword", 282, 1032},
    {"linecache", 283, 7433},
    {"locale", 284, 64255},
    {"opcode", 314, 13816},
    {"operator", 315, 18723},
    {"quopri", 375, 10821},
    {"re", 377, -19269},
    {"re._casefix", 378, 1810},
    {"re._compiler", 379, 31784},
    {"re._constants", 380, 5914},
    {"re._parser", 381, 49836},
    {"reprlib", 382, 9642},
    {"token", 422, 3687},
    {"tokenize", 423, 30322},
    {"types", 431, 14783},
    {"warnings", 436, 24996},
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

