// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.PictureResult.h>
#include <Fuse.Camera.TakePictureOptions.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.FuseJS.Base64.h>
#include <Fuse.Reactive.FuseJS.Camera.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Environment.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <Fuse.Reactive.FuseJS.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.GeoLocation.h>
#include <Fuse.Reactive.FuseJS.Globals.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Lifecycle.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.RaiseEvent.h>
#include <Fuse.Reactive.FuseJS.Storage.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.FuseJS.UserEvents.h>
#include <Fuse.Reactive.FuseJS.Vibration.h>
#include <Fuse.Reactive.Marshal.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IDispatcher.h>
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.TaskPriority.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[83];
static uType* TYPES[74];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(683)
// --------------------------------------------------------------------

// internal sealed class Base64 :683
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Base64", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[0] = uString::Const("encodeAscii");
    ::STRINGS[1] = uString::Const("decodeAscii");
    ::STRINGS[2] = uString::Const("encodeUtf8");
    ::STRINGS[3] = uString::Const("decodeUtf8");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Base64() :685
void Base64__ctor_1_fn(Base64* __this)
{
    __this->ctor_1();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :704
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :726
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :693
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :715
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :685
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

// public Base64() [instance] :685
void Base64::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"encodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"decodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"encodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"decodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :704
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "DecodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :726
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "DecodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :693
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "EncodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :715
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "EncodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :685
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(448)
// --------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :448
// {
uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    ::TYPES[6] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _context), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _func), 0);
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :454
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :461
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// private void DispatchedCallback() :466
void TimerModule__CallbackClosure__DispatchedCallback_fn(TimerModule__CallbackClosure* __this)
{
    __this->DispatchedCallback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :454
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :454
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", ".ctor(Fuse.Scripting.Context,Fuse.Scripting.Function,object[])");
    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :461
void TimerModule__CallbackClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", "Callback()");
    ::g::Fuse::Scripting::IDispatcher::Dispatch(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::g::Fuse::Scripting::IDispatcher_typeof()), 0, uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)TimerModule__CallbackClosure__DispatchedCallback_fn, this));
}

// private void DispatchedCallback() [instance] :466
void TimerModule__CallbackClosure::DispatchedCallback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", "DispatchedCallback()");
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :454
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(53)
// -------------------------------------------------------------------

// internal static class Camera :53
// {
uClassType* Camera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Camera", options);
    ::STRINGS[4] = uString::Const("File");
    ::STRINGS[5] = uString::Const("path");
    ::STRINGS[6] = uString::Const("name");
    ::STRINGS[7] = uString::Const("takePicture");
    ::STRINGS[8] = uString::Const("targetWidth");
    ::STRINGS[9] = uString::Const("targetHeight");
    ::STRINGS[10] = uString::Const("correctOrientation");
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Camera::PictureResult_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    ::TYPES[14] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[15] = ::g::Uno::String_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Camera::TakePictureOptions_typeof();
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) :91
void Camera__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Camera::Converter(context, result);
}

// public static Fuse.Scripting.IModule CreateModule() :55
void Camera__CreateModule_fn(uObject** __retval)
{
    *__retval = Camera::CreateModule();
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) :61
void Camera__TakePicture_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture(args);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) [static] :91
::g::Fuse::Scripting::Object* Camera::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "Converter(Fuse.Scripting.Context,Fuse.Camera.PictureResult)");
    ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[4/*"File"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Scripting::Object* file = uPtr(func)->Construct(uArray::New(::TYPES[3/*object[]*/], 0));
    uPtr(file)->Item(::STRINGS[5/*"path"*/], uPtr(result)->Path());
    file->Item(::STRINGS[6/*"name"*/], ::g::Uno::IO::Path::GetFileName(result->Path()));
    return file;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :55
uObject* Camera::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], ::STRINGS[7/*"takePicture"*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Fuse.Camera.PictureResult>*/], (void*)Camera__TakePicture_fn), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], (void*)Camera__Converter_fn))));
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) [static] :61
::g::Uno::Threading::Future1* Camera::TakePicture(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "TakePicture(object[])");
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Camera::TakePictureOptions* options = ::g::Fuse::Camera::TakePictureOptions::New1();

    if (uPtr(args)->Length() > 0)
    {
        ::g::Fuse::Scripting::Object* arg = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[9/*Fuse.Scripting.Object*/]);

        if (arg != NULL)

            for (array1 = uPtr(arg)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);

                if (::g::Uno::String::op_Equality(k, ::STRINGS[8/*"targetWidth"*/]))
                    uPtr(options)->TargetWidth(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[9/*"targetHeight"*/]))
                    uPtr(options)->TargetHeight(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[10/*"correctOrie...*/]))
                    uPtr(options)->CorrectOrientation(::g::Fuse::Reactive::Marshal::ToBool(uPtr(arg)->Item(k)));
            }
    }

    return ::g::Fuse::Camera::Camera::TakePicture1(options);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(270)
// --------------------------------------------------------------------

// public sealed class Email :270
// {
uType* Email_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Email);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Email", options);
    type->fp_ctor_ = (void*)Email__New1_fn;
    ::STRINGS[11] = uString::Const("compose");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Compose", NULL, (void*)Email__Compose_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Email__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Email__New1_fn, 0, true, Email_typeof(), 0));
    return type;
}

// public generated Email() :270
void Email__ctor__fn(Email* __this)
{
    __this->ctor_();
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) :277
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Email::Compose(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :272
void Email__CreateModule_fn(uObject** __retval)
{
    *__retval = Email::CreateModule();
}

// public generated Email New() :270
void Email__New1_fn(Email** __retval)
{
    *__retval = Email::New1();
}

// public generated Email() [instance] :270
void Email::ctor_()
{
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) [static] :277
uObject* Email::Compose(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Email", "Compose(Fuse.Scripting.Context,object[])");
    uString* to = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* cc = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    uString* bcc = uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[4/*string*/]);
    uString* subject = uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[4/*string*/]);
    uString* message = uCast<uString*>(args->Strong<uObject*>(4), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchEmail(to, cc, bcc, subject, message);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :272
uObject* Email::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Email", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[11/*"compose"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Email__Compose_fn))));
}

// public generated Email New() [static] :270
Email* Email::New1()
{
    Email* obj1 = (Email*)uNew(Email_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(300)
// --------------------------------------------------------------------

// internal sealed class Environment :300
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Environment", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[12] = uString::Const("android");
    ::STRINGS[13] = uString::Const("iOS");
    ::STRINGS[14] = uString::Const("mobile");
    ::STRINGS[15] = uString::Const("desktop");
    ::STRINGS[16] = uString::Const("preview");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Environment() :302
void Environment__ctor_1_fn(Environment* __this)
{
    __this->ctor_1();
}

// public Environment New() :302
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

// public Environment() [instance] :302
void Environment::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Environment", ".ctor()");
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[17/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[12/*"android"*/], uCRef(true), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[17/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[13/*"iOS"*/], uCRef(false), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[17/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[14/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[17/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[15/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[17/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[16/*"preview"*/], uCRef(true), &ret6), ret6));
}

// public Environment New() [static] :302
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(834)
// --------------------------------------------------------------------

// internal static class FileReaderImpl :834
// {
uClassType* FileReaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FileReaderImpl", options);
    ::STRINGS[17] = uString::Const("readAsDataURL");
    ::STRINGS[18] = uString::Const("readAsText");
    ::STRINGS[19] = uString::Const("PNG");
    ::STRINGS[20] = uString::Const("png");
    ::STRINGS[21] = uString::Const("jpeg");
    ::STRINGS[22] = uString::Const("data:image/");
    ::STRINGS[23] = uString::Const(";base64,");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::String_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :836
void FileReaderImpl__CreateModule_fn(uObject** __retval)
{
    *__retval = FileReaderImpl::CreateModule();
}

// private static string readAsDataURL(object[] args) :843
void FileReaderImpl__readAsDataURL_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static string readAsText(object[] args) :852
void FileReaderImpl__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :836
uObject* FileReaderImpl::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[18/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[17/*"readAsDataURL"*/], uDelegate::New(::TYPES[19/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[18/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[18/*"readAsText"*/], uDelegate::New(::TYPES[19/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL)));
}

// private static string readAsDataURL(object[] args) [static] :843
uString* FileReaderImpl::readAsDataURL(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "readAsDataURL(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(path))), ::STRINGS[19/*"PNG"*/]) ? ::STRINGS[20/*"png"*/] : ::STRINGS[21/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"data:image/"*/], type), ::STRINGS[23/*";base64,"*/]), base64);
}

// private static string readAsText(object[] args) [static] :852
uString* FileReaderImpl::readAsText(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "readAsText(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    return ::g::Uno::IO::File::ReadAllText(path);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(1093)
// ---------------------------------------------------------------------

// internal sealed class FunctionClosure :1093
// {
uType* FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FunctionClosure", options);
    ::TYPES[20] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _context), 0);
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1098
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :1111
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :1104
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1098
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval)
{
    *__retval = FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :1098
void FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", ".ctor(Fuse.Scripting.Context,Uno.Func<Fuse.Scripting.Context, object[], object>)");
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :1111
uDelegate* FunctionClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "get_Callback()");
    return uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :1104
uObject* FunctionClosure::function(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "function(object[])");
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :1098
FunctionClosure* FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    FunctionClosure* obj1 = (FunctionClosure*)uNew(FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(951)
// --------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :951
// {
uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    ::STRINGS[24] = uString::Const("createRequest");
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[22] = ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof();
    ::TYPES[23] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Context_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :958
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :967
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :958
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :953
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :953
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :958
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", ".ctor(Fuse.Scripting.Context)");
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[24/*"createRequest"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :967
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "CreateRequest(object[])");
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher()))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :953
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :953
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :958
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(976)
// --------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :976
// {
uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    ::STRINGS[25] = uString::Const("enableCache");
    ::STRINGS[26] = uString::Const("setTimeout");
    ::STRINGS[27] = uString::Const("sendAsync");
    ::STRINGS[28] = uString::Const("abort");
    ::STRINGS[29] = uString::Const("setHeader");
    ::STRINGS[30] = uString::Const("getResponseHeader");
    ::STRINGS[31] = uString::Const("getResponseHeaders");
    ::STRINGS[32] = uString::Const("getState");
    ::STRINGS[33] = uString::Const("getResponseStatus");
    ::STRINGS[34] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[35] = uString::Const("getResponseContentString");
    ::STRINGS[36] = uString::Const("onaborted");
    ::STRINGS[37] = uString::Const("ondone");
    ::STRINGS[38] = uString::Const("onerror");
    ::STRINGS[39] = uString::Const("onprogress");
    ::STRINGS[40] = uString::Const("onstatechanged");
    ::STRINGS[41] = uString::Const("ontimeout");
    ::TYPES[24] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[26] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[27] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[7] = ::g::Uno::Action_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[31] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[32] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[33] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[34] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[35] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[36] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[37] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :982
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private object EnableCache(object[] args) :1069
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseReasonPhrase(object[] args) :1086
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private object GetState(object[] args) :1081
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :982
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :978
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :978
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) :1010
void Http__FuseJSHttpRequest__OnAborted_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAborted(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :1038
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :1017
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :1045
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :1031
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :1024
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :1052
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :982
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", ".ctor(Fuse.Scripting.Context,Uno.Net.Http.HttpMessageHandlerRequest)");
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAborted_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[26/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[27/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[25/*"enableCache"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[26/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[28/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetTimeout_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[27/*"sendAsync"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[28/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__Abort_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[29/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[30/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[31/*Uno.Action<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[30/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[32/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[33/*Uno.Func<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[31/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeaders_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[32/*"getState"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[33/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[36/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[37/*Uno.Func<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseStatus_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[34/*"getResponse...*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[35/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseContentString_fn, uPtr(_req))));
}

// private object EnableCache(object[] args) [instance] :1069
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "EnableCache(object[])");

    if (uPtr(args)->Length() > 0)
        ;

    return NULL;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :1086
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetResponseReasonPhrase(object[])");
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(uPtr(_req)->GetResponseStatus());
}

// private object GetState(object[] args) [instance] :1081
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetState(object[])");
    return uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State());
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :978
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :978
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1010
void Http__FuseJSHttpRequest::OnAborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnAborted(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[36/*"onaborted"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1038
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnDone(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[37/*"ondone"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :1017
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnError(Uno.Net.Http.HttpMessageHandlerRequest,string)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[38/*"onerror"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :1045
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnProgress(Uno.Net.Http.HttpMessageHandlerRequest,int,int,bool)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[39/*"onprogress"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int>(::TYPES[38/*int*/], current), uBox<int>(::TYPES[38/*int*/], total), uBox(::TYPES[69/*bool*/], hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1031
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[40/*"onstatechan...*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1024
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[41/*"ontimeout"*/]), ::TYPES[8/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private object SendAsync(object[] args) [instance] :1052
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "SendAsync(object[])");
    uPtr(_req)->SetResponseType(0);

    if (uPtr(args)->Length() > 0)
    {
        uString* data = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(data, NULL))
        {
            uPtr(_req)->SendAsync2(data);
            return NULL;
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :982
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(597)
// --------------------------------------------------------------------

// internal sealed class GeoLocation :597
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[42] = uString::Const("auhtorizationRequest");
    ::STRINGS[43] = uString::Const("startListening");
    ::STRINGS[44] = uString::Const("stopListening");
    ::STRINGS[45] = uString::Const("onChanged");
    ::STRINGS[46] = uString::Const("location");
    ::STRINGS[47] = uString::Const("getLocation");
    ::STRINGS[48] = uString::Const("latitude");
    ::STRINGS[49] = uString::Const("longitude");
    ::STRINGS[50] = uString::Const("accuracy");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[40] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[41] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[42] = ::g::Fuse::GeoLocation::LocationTracker_typeof();
    ::TYPES[43] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[44] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[45] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[46] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[47] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[48] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[49] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[50] = ::g::Fuse::GeoLocation::GeoCoordinates_typeof();
    ::TYPES[51] = ::g::Fuse::GeoLocation::Location_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[52] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _onChangedEvent), 0);
    return type;
}

// public GeoLocation() :602
void GeoLocation__ctor_1_fn(GeoLocation* __this)
{
    __this->ctor_1();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :634
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :660
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :644
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :649
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :654
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :628
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// public GeoLocation New() :602
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :639
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :616
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :622
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

// public GeoLocation() [instance] :602
void GeoLocation::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[39/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[42/*"auhtorizati...*/], uDelegate::New(::TYPES[40/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[41/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[43/*"startListen...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[44/*"stopListening"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[45/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[43/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[44/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[46/*"location"*/], uDelegate::New(::TYPES[45/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[46/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[47/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[47/*"getLocation"*/], uDelegate::New(::TYPES[48/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[49/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :644
int GeoLocation::GetAuhtorizationRequest()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetAuhtorizationRequest()");
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :649
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetLocation()");
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :654
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetLocationAsync(object[])");
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :628
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "LocationChanged(Fuse.GeoLocation.Location)");
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void SetAuhtorizationRequest(int value) [instance] :639
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "SetAuhtorizationRequest(int)");
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :616
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "StartListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StartListening(0, 0.0);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :622
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "StopListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :634
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "AuthorizationRequestConverter(Fuse.Scripting.Context,Fuse.GeoLocation.GeoLocationAuthorizationType)");
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :660
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "Converter(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[48/*"latitude"*/], uBox(::TYPES[64/*double*/], uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[49/*"longitude"*/], uBox(::TYPES[64/*double*/], uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[50/*"accuracy"*/], uBox(::TYPES[64/*double*/], location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :602
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(10)
// -------------------------------------------------------------------

// internal static class Globals :10
// {
uClassType* Globals_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Globals", options);
    ::STRINGS[18] = uString::Const("readAsText");
    ::STRINGS[51] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[52] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[53] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[54] = uString::Const("' not found");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[53] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[54] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :12
void Globals__CreateModule_fn(uObject** __retval)
{
    *__retval = Globals::CreateModule();
}

// private static bool FileSourceAcceptor(object obj) :35
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// private static string readAsText(object[] args) :18
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :12
uObject* Globals::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[18/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[18/*"readAsText"*/], uDelegate::New(::TYPES[19/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL)));
}

// private static bool FileSourceAcceptor(object obj) [static] :35
bool Globals::FileSourceAcceptor(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "FileSourceAcceptor(object)");
    return uIs(obj, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
}

// private static string readAsText(object[] args) [static] :18
uString* Globals::readAsText(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "readAsText(object[])");

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[52/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[54/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[53/*"Globals.rea...*/], key), ::STRINGS[54/*"' not found"*/])));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(939)
// --------------------------------------------------------------------

// internal sealed class Http :939
// {
uType* Http_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    ::STRINGS[55] = uString::Const("HttpClient");
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[55] = ::g::Fuse::Reactive::FuseJS::FunctionClosure_typeof();
    ::TYPES[20] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[56] = Http__FuseJSHttpClient_typeof();
    return type;
}

// public Http(Fuse.Scripting.Context context) :941
void Http__ctor__fn(Http* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :946
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public Http New(Fuse.Scripting.Context context) :941
void Http__New1_fn(::g::Fuse::Scripting::Context* context, Http** __retval)
{
    *__retval = Http::New1(context);
}

// public Http(Fuse.Scripting.Context context) [instance] :941
void Http::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", ".ctor(Fuse.Scripting.Context)");
    uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[55/*"HttpClient"*/], ::g::Fuse::Reactive::FuseJS::FunctionClosure::New1(context, uDelegate::New(::TYPES[20/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, this))->Callback());
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :946
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", "CreateClient(Fuse.Scripting.Context,object[])");
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New(Fuse.Scripting.Context context) [static] :941
Http* Http::New1(::g::Fuse::Scripting::Context* context)
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(321)
// --------------------------------------------------------------------

// public sealed class InterApp :321
// {
// static InterApp() :327
static void InterApp__cctor__fn(uType* __type)
{
    InterApp::_cachedUris_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[57/*Uno.Collections.List<string>*/]));
    ::g::Uno::Platform2::Application::add_ReceivedURI(uDelegate::New(::TYPES[59/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedUri_fn));
}

uType* InterApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InterApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.InterApp", options);
    type->fp_ctor_ = (void*)InterApp__New1_fn;
    type->fp_cctor_ = InterApp__cctor__fn;
    ::STRINGS[56] = uString::Const("onReceivedUri");
    ::STRINGS[57] = uString::Const("launchUri");
    ::TYPES[57] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[59] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[62] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_cachedUris_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_jsInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_onReceivedUri_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)InterApp__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction("LaunchUri", NULL, (void*)InterApp__LaunchUri_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)InterApp__New1_fn, 0, true, InterApp_typeof(), 0));
    return type;
}

// public generated InterApp() :321
void InterApp__ctor__fn(InterApp* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :332
void InterApp__CreateModule_fn(uObject** __retval)
{
    *__retval = InterApp::CreateModule();
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) :361
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = InterApp::LaunchUri(context, args);
}

// public generated InterApp New() :321
void InterApp__New1_fn(InterApp** __retval)
{
    *__retval = InterApp::New1();
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :344
void InterApp__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp::OnJsInitialized(sender, args);
}

// private static void OnReceivedUri(object sender, string uri) :353
void InterApp__OnReceivedUri_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedUri(sender, uri);
}

uSStrong< ::g::Uno::Collections::List*> InterApp::_cachedUris_;
bool InterApp::_jsInitialized_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> InterApp::_onReceivedUri_;

// public generated InterApp() [instance] :321
void InterApp::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :332
uObject* InterApp::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "CreateModule()");
    InterApp_typeof()->Init();
    InterApp::_onReceivedUri() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[56/*"onReceivedUri"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativeEvent*)InterApp::_onReceivedUri(), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[57/*"launchUri"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)InterApp__LaunchUri_fn))));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)InterApp__OnJsInitialized_fn));
    return (uObject*)module;
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) [static] :361
uObject* InterApp::LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "LaunchUri(Fuse.Scripting.Context,object[])");
    InterApp_typeof()->Init();
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/])));
    return NULL;
}

// public generated InterApp New() [static] :321
InterApp* InterApp::New1()
{
    InterApp* obj2 = (InterApp*)uNew(InterApp_typeof());
    obj2->ctor_();
    return obj2;
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :344
void InterApp::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "OnJsInitialized(object,Uno.EventArgs)");
    InterApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;

    if (InterApp::_cachedUris() != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(InterApp::_cachedUris()), &ret3), ret3); enum1.MoveNext(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* uri = enum1.Current(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
        }

    InterApp::_cachedUris() = NULL;
    InterApp::_jsInitialized() = true;
}

// private static void OnReceivedUri(object sender, string uri) [static] :353
void InterApp::OnReceivedUri(uObject* sender, uString* uri)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "OnReceivedUri(object,string)");
    InterApp_typeof()->Init();

    if (InterApp::_jsInitialized())
        uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(InterApp::_cachedUris()), uri);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(109)
// --------------------------------------------------------------------

// public sealed class Lifecycle :109
// {
uType* Lifecycle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Lifecycle", options);
    type->fp_ctor_ = (void*)Lifecycle__New1_fn;
    ::STRINGS[58] = uString::Const("onEnteringForeground");
    ::STRINGS[59] = uString::Const("onEnteringInteractive");
    ::STRINGS[60] = uString::Const("onExitedInteractive");
    ::STRINGS[61] = uString::Const("onEnteringBackground");
    ::STRINGS[62] = uString::Const("onTerminating");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[63] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringBackground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringForeground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_exitedInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_terminating_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("CreateModule", NULL, (void*)Lifecycle__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Lifecycle__New1_fn, 0, true, Lifecycle_typeof(), 0));
    return type;
}

// public generated Lifecycle() :109
void Lifecycle__ctor__fn(Lifecycle* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :123
void Lifecycle__CreateModule_fn(uObject** __retval)
{
    *__retval = Lifecycle::CreateModule();
}

// public generated Lifecycle New() :109
void Lifecycle__New1_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New1();
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :174
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :153
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :160
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :167
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :144
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Lifecycle::OnJsInitialized(sender, args);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :181
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringBackground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringForeground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_exitedInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_terminating_;

// public generated Lifecycle() [instance] :109
void Lifecycle::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :123
uObject* Lifecycle::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "CreateModule()");
    Lifecycle::_enteringForeground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[58/*"onEnteringF...*/], true);
    Lifecycle::_enteringInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[59/*"onEnteringI...*/], true);
    Lifecycle::_exitedInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[60/*"onExitedInt...*/], true);
    Lifecycle::_enteringBackground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[61/*"onEnteringB...*/], true);
    Lifecycle::_terminating() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[62/*"onTerminating"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringForeground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_exitedInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringBackground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_terminating()));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)Lifecycle__OnJsInitialized_fn));
    return (uObject*)module;
}

// public generated Lifecycle New() [static] :109
Lifecycle* Lifecycle::New1()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :174
void Lifecycle::OnEnteringBackground(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringBackground(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringBackground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringBackground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :153
void Lifecycle::OnEnteringForeground(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringForeground(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringForeground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringForeground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :160
void Lifecycle::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringInteractive(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :167
void Lifecycle::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnExitedInteractive(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_exitedInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_exitedInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :144
void Lifecycle::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnJsInitialized(object,Uno.EventArgs)");
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :181
void Lifecycle::OnTerminating(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnTerminating(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_terminating();

    if (handler != NULL)
        uPtr(Lifecycle::_terminating())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(200)
// --------------------------------------------------------------------

// public sealed class Maps :200
// {
uType* Maps_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Maps);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Maps", options);
    type->fp_ctor_ = (void*)Maps__New1_fn;
    ::STRINGS[63] = uString::Const("openAt");
    ::STRINGS[64] = uString::Const("searchNearby");
    ::STRINGS[65] = uString::Const("searchNear");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("CreateModule", NULL, (void*)Maps__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Maps__New1_fn, 0, true, Maps_typeof(), 0),
        new uFunction("OpenAt", NULL, (void*)Maps__OpenAt_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNear", NULL, (void*)Maps__SearchNear_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNearby", NULL, (void*)Maps__SearchNearby_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated Maps() :200
void Maps__ctor__fn(Maps* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :202
void Maps__CreateModule_fn(uObject** __retval)
{
    *__retval = Maps::CreateModule();
}

// public generated Maps New() :200
void Maps__New1_fn(Maps** __retval)
{
    *__retval = Maps::New1();
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) :226
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::OpenAt(context, args);
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) :217
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNear(context, args);
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) :210
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNearby(context, args);
}

// public generated Maps() [instance] :200
void Maps::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :202
uObject* Maps::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 3, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[63/*"openAt"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__OpenAt_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[64/*"searchNearby"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNearby_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[65/*"searchNear"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNear_fn))));
}

// public generated Maps New() [static] :200
Maps* Maps::New1()
{
    Maps* obj1 = (Maps*)uNew(Maps_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) [static] :226
uObject* Maps::OpenAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "OpenAt(Fuse.Scripting.Context,object[])");
    double latitude = uUnbox<double>(::TYPES[64/*double*/], uPtr(args)->Strong<uObject*>(0));
    double longitude = uUnbox<double>(::TYPES[64/*double*/], args->Strong<uObject*>(1));
    ::g::Fuse::Launcher::LaunchMaps(latitude, longitude);
    return NULL;
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) [static] :217
uObject* Maps::SearchNear(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "SearchNear(Fuse.Scripting.Context,object[])");
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) [static] :210
uObject* Maps::SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "SearchNearby(Fuse.Scripting.Context,object[])");
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(245)
// --------------------------------------------------------------------

// public sealed class Phone :245
// {
uType* Phone_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Phone);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Phone", options);
    type->fp_ctor_ = (void*)Phone__New1_fn;
    ::STRINGS[66] = uString::Const("call");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Call", NULL, (void*)Phone__Call_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Phone__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Phone__New1_fn, 0, true, Phone_typeof(), 0));
    return type;
}

// public generated Phone() :245
void Phone__ctor__fn(Phone* __this)
{
    __this->ctor_();
}

// public static object Call(Fuse.Scripting.Context context, object[] args) :252
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Phone::Call(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :247
void Phone__CreateModule_fn(uObject** __retval)
{
    *__retval = Phone::CreateModule();
}

// public generated Phone New() :245
void Phone__New1_fn(Phone** __retval)
{
    *__retval = Phone::New1();
}

// public generated Phone() [instance] :245
void Phone::ctor_()
{
}

// public static object Call(Fuse.Scripting.Context context, object[] args) [static] :252
uObject* Phone::Call(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Phone", "Call(Fuse.Scripting.Context,object[])");
    uString* callString = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchCall(callString);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :247
uObject* Phone::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Phone", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[66/*"call"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Phone__Call_fn))));
}

// public generated Phone New() [static] :245
Phone* Phone::New1()
{
    Phone* obj1 = (Phone*)uNew(Phone_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(868)
// --------------------------------------------------------------------

// internal sealed class RaiseEvent :868
// {
uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.RaiseEvent", options);
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    ::STRINGS[67] = uString::Const("Cannot find message with name: ");
    ::STRINGS[68] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno");
    ::STRINGS[69] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Source), 0);
    return type;
}

// public generated RaiseEvent() :868
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :868
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :875
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :868
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :875
void RaiseEvent::Raise()
{
    uStackFrame __("Fuse.Reactive.FuseJS.RaiseEvent", "Raise()");
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(Name);

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[67/*"Cannot find...*/], Name), NULL, ::STRINGS[68/*"/usr/local/...*/], 880, ::STRINGS[69/*"Raise"*/]);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :868
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(748)
// --------------------------------------------------------------------

// internal static class Storage :748
// {
uClassType* Storage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Storage", options);
    ::STRINGS[70] = uString::Const("writeSync");
    ::STRINGS[71] = uString::Const("readSync");
    ::STRINGS[72] = uString::Const("deleteSync");
    ::STRINGS[73] = uString::Const("write");
    ::STRINGS[74] = uString::Const("read");
    ::STRINGS[75] = uString::Const("");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[66] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[18] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[67] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :750
void Storage__CreateModule_fn(uObject** __retval)
{
    *__retval = Storage::CreateModule();
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) :783
void Storage__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Delete(c, args);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :805
void Storage__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :773
void Storage__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::ReadAsync(args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) :793
void Storage__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) :761
void Storage__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::WriteAsync(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :750
uObject* Storage::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[70/*"writeSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Write_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[71/*"readSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Read_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[72/*"deleteSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Delete_fn)), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[65/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[73/*"write"*/], uDelegate::New(::TYPES[66/*Fuse.Scripting.FutureFactory<bool>*/], (void*)Storage__WriteAsync_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[18/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[74/*"read"*/], uDelegate::New(::TYPES[67/*Fuse.Scripting.FutureFactory<string>*/], (void*)Storage__ReadAsync_fn), NULL)));
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) [static] :783
uObject* Storage::Delete(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Delete(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::TYPES[69/*bool*/], false);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :805
uObject* Storage::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Read(Fuse.Scripting.Context,object[])");

    try
    {
        if (uPtr(args)->Length() > 0)
        {
            uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
            return ::g::Fuse::Storage::ApplicationDir::Read((filename != NULL) ? filename : ::STRINGS[75/*""*/]);
        }

        return ::g::Fuse::Storage::ApplicationDir::Read(::STRINGS[75/*""*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[75/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :773
::g::Uno::Threading::Future1* Storage::ReadAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "ReadAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[75/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[75/*""*/]);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static] :793
uObject* Storage::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Write(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[75/*""*/], (value != NULL) ? value : ::STRINGS[75/*""*/]));
    }

    return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[75/*""*/], ::STRINGS[75/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static] :761
::g::Uno::Threading::Future1* Storage::WriteAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "WriteAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[75/*""*/], (value != NULL) ? value : ::STRINGS[75/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[75/*""*/], ::STRINGS[75/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(516)
// --------------------------------------------------------------------

// private sealed class TimerManager.Timer :516
// {
uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    ::TYPES[68] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[69] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _startTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _timeout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerManager__Timer::_id_, uFieldFlagsStatic);
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :530
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// private double GetMilliseconds() :577
void TimerManager__Timer__GetMilliseconds_fn(TimerManager__Timer* __this, double* __retval)
{
    *__retval = __this->GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :530
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :539
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :546
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// private void Update() :554
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this)
{
    __this->Update();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :530
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", ".ctor(double,Uno.Action,bool)");
    ID = (TimerManager__Timer::_id()++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private double GetMilliseconds() [instance] :577
double TimerManager__Timer::GetMilliseconds()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "GetMilliseconds()");
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// private void Start() [instance] :539
void TimerManager__Timer::Start()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Start()");
    _startTime = GetMilliseconds();
    _isRunning = true;
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)TimerManager__Timer__Update_fn, this), 0);
}

// public void Stop() [instance] :546
void TimerManager__Timer::Stop()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Stop()");
    _isRunning = false;
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)TimerManager__Timer__Update_fn, this), 0);

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// private void Update() [instance] :554
void TimerManager__Timer::Update()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Update()");

    if (!_isRunning)
        return;

    double now = GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout < elapsed)
    {
        try
        {
            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            if (_repeat)
                _startTime = now;
            else
                Stop();

            throw __t;
        }
        // finally

        if (_repeat)
            _startTime = now;
        else
            Stop();
    }
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :530
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(474)
// --------------------------------------------------------------------

// internal sealed class TimerManager :474
// {
uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    ::TYPES[70] = ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof());
    ::TYPES[71] = TimerManager__Timer_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager, _timers), 0);
    return type;
}

// public generated TimerManager() :474
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :478
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public bool DeleteTimer(int id) :486
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :506
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :474
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :497
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public generated TimerManager() [instance] :474
void TimerManager::ctor_()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", ".ctor()");
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[70/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/]));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :478
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "AddTimer(double,Uno.Action,[bool])");
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public bool DeleteTimer(int id) [instance] :486
bool TimerManager::DeleteTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "DeleteTimer(int)");
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :506
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "GetTimer(int)");
    TimerManager__Timer* ret2;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :497
void TimerManager::RemoveTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "RemoveTimer(int)");
    TimerManager__Timer* ret3;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret3), ret3))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public generated TimerManager New() [static] :474
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(408)
// --------------------------------------------------------------------

// internal sealed class TimerModule :408
// {
::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[76] = uString::Const("create");
    ::STRINGS[77] = uString::Const("delete");
    ::STRINGS[78] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[79] = uString::Const("create(): first argument must be a function");
    ::STRINGS[80] = uString::Const("delete(): requires one argument");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[69] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule, _tm), 0);
    return type;
}

// public TimerModule() :412
void TimerModule__ctor_1_fn(TimerModule* __this)
{
    __this->ctor_1();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :419
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :438
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :412
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// public TimerModule() [instance] :412
void TimerModule::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[76/*"create"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[77/*"delete"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :419
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Create(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[78/*"create(): r...*/]));

    if (!uIs(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[79/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::TYPES[69/*bool*/], args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        innerArgs->Strong<uObject*>(i) = args->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[38/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :438
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Delete(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[80/*"delete(): r...*/]));

    uPtr(_tm)->DeleteTimer(::g::Fuse::Reactive::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// public TimerModule New() [static] :412
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(889)
// --------------------------------------------------------------------

// public sealed class UserEvents :889
// {
uType* UserEvents_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.UserEvents", options);
    type->fp_ctor_ = (void*)UserEvents__New1_fn;
    ::STRINGS[81] = uString::Const("raise");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[9] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[72] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[15] = ::g::Uno::String_typeof()->Array();
    ::TYPES[73] = ::g::Fuse::Reactive::FuseJS::RaiseEvent_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)UserEvents__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UserEvents__New1_fn, 0, true, UserEvents_typeof(), 0),
        new uFunction("Raise", NULL, (void*)UserEvents__Raise_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated UserEvents() :889
void UserEvents__ctor__fn(UserEvents* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :891
void UserEvents__CreateModule_fn(uObject** __retval)
{
    *__retval = UserEvents::CreateModule();
}

// public generated UserEvents New() :889
void UserEvents__New1_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New1();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :902
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

// public generated UserEvents() [instance] :889
void UserEvents::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :891
uObject* UserEvents::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.UserEvents", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[81/*"raise"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn))));
}

// public generated UserEvents New() [static] :889
UserEvents* UserEvents::New1()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :902
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.UserEvents", "Raise(Fuse.Scripting.Context,object[])");
    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[9/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[72/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::Fuse::Reactive::FuseJS::RaiseEvent* re = ::g::Fuse::Reactive::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)::g::Fuse::Reactive::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno(381)
// --------------------------------------------------------------------

// internal static class Vibration :381
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Vibration", options);
    ::STRINGS[82] = uString::Const("vibrate");
    ::TYPES[11] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :383
void Vibration__CreateModule_fn(uObject** __retval)
{
    *__retval = Vibration::CreateModule();
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) :388
void Vibration__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval)
{
    *__retval = Vibration::Vibrate(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :383
uObject* Vibration::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Vibration", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[82/*"vibrate"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Vibration__Vibrate_fn))));
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) [static] :388
uArray* Vibration::Vibrate(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Vibration", "Vibrate(Fuse.Scripting.Context,object[])");
    double ms = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 200.0;
    ::g::Fuse::Vibration::Vibration::Vibrate(ms);
    return NULL;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
