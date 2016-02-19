// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseReactive_bundle.h>
#include <Fuse.Behavior.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.AsyncArray.h>
#include <Fuse.Reactive.AsyncFunction.h>
#include <Fuse.Reactive.AsyncObject.h>
#include <Fuse.Reactive.Binding.h>
#include <Fuse.Reactive.CallEventHandler.h>
#include <Fuse.Reactive.CallFunction.h>
#include <Fuse.Reactive.CallObjectEventHandler.h>
#include <Fuse.Reactive.CascadingPathSubscription.BindAttempt.h>
#include <Fuse.Reactive.CascadingPathSubscription.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.CrossThreadExceptionHandler.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Dispatcher.Arg2Dispatch-2.h>
#include <Fuse.Reactive.Dispatcher.ArgDispatch-1.h>
#include <Fuse.Reactive.Dispatcher.h>
#include <Fuse.Reactive.Dispatcher.UIThreadDispatcher.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EnumArray.h>
#include <Fuse.Reactive.EnumObservable.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FileSourceTell.h>
#include <Fuse.Reactive.FuseJS.Base64.h>
#include <Fuse.Reactive.FuseJS.Camera.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Environment.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <Fuse.Reactive.FuseJS.GeoLocation.h>
#include <Fuse.Reactive.FuseJS.Globals.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Lifecycle.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.Storage.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.FuseJS.UserEvents.h>
#include <Fuse.Reactive.FuseJS.Vibration.h>
#include <Fuse.Reactive.IAsyncArray.h>
#include <Fuse.Reactive.IAsyncFunction.h>
#include <Fuse.Reactive.InternalPathSubscription.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.JSFileSource.h>
#include <Fuse.Reactive.Marshal.Float2Enum.h>
#include <Fuse.Reactive.Marshal.Float3Enum.h>
#include <Fuse.Reactive.Marshal.h>
#include <Fuse.Reactive.Marshal.VectorEnum.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.ObservableSubscription.h>
#include <Fuse.Reactive.ScriptEventArgs.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.SubscriptionSetExclusive.h>
#include <Fuse.Reactive.TellObject.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.NameRegistry.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.TaskPriority.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Color.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[93];
static uType* TYPES[102];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(898)
// -------------------------------------------------------------

// private sealed class Dispatcher.Arg2Dispatch<T1, T2> :898
// {
uType* Dispatcher__Arg2Dispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dispatcher__Arg2Dispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Dispatcher.Arg2Dispatch`2", options);
    ::TYPES[0] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Reactive::Dispatcher__Arg2Dispatch, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Arg2Dispatch(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :903
void Dispatcher__Arg2Dispatch__ctor__fn(Dispatcher__Arg2Dispatch* __this, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher.Arg2Dispatch`2", ".ctor(Uno.Action<T1, T2>,T1,T2)");
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Dispatch New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :903
void Dispatcher__Arg2Dispatch__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, Dispatcher__Arg2Dispatch** __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    Dispatcher__Arg2Dispatch* obj1 = (Dispatcher__Arg2Dispatch*)uNew(__type);
    Dispatcher__Arg2Dispatch__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :909
void Dispatcher__Arg2Dispatch__Run_fn(Dispatcher__Arg2Dispatch* __this)
{
    __this->Run();
}

// public void Run() [instance] :909
void Dispatcher__Arg2Dispatch::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T1, T2>*/),
        __type->T(0),
        __type->T(1),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher.Arg2Dispatch`2", "Run()");
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(886)
// -------------------------------------------------------------

// private sealed class Dispatcher.ArgDispatch<T> :886
// {
uType* Dispatcher__ArgDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dispatcher__ArgDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Dispatcher.ArgDispatch`1", options);
    ::TYPES[1] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::Dispatcher__ArgDispatch, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public ArgDispatch(Uno.Action<T> action, T arg) :890
void Dispatcher__ArgDispatch__ctor__fn(Dispatcher__ArgDispatch* __this, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher.ArgDispatch`1", ".ctor(Uno.Action<T>,T)");
    __this->_action = action;
    __this->_arg() = arg;
}

// public ArgDispatch New(Uno.Action<T> action, T arg) :890
void Dispatcher__ArgDispatch__New1_fn(uType* __type, uDelegate* action, void* arg, Dispatcher__ArgDispatch** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Dispatcher__ArgDispatch* obj1 = (Dispatcher__ArgDispatch*)uNew(__type);
    Dispatcher__ArgDispatch__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :895
void Dispatcher__ArgDispatch__Run_fn(Dispatcher__ArgDispatch* __this)
{
    __this->Run();
}

// public void Run() [instance] :895
void Dispatcher__ArgDispatch::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher.ArgDispatch`1", "Run()");
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(8)
// -----------------------------------------------------------

// internal sealed class AsyncArray :8
// {
AsyncArray_type* AsyncArray_typeof()
{
    static uSStrong<AsyncArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AsyncArray);
    options.TypeSize = sizeof(AsyncArray_type);
    type = (AsyncArray_type*)uClassType::New("Fuse.Reactive.AsyncArray", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncArray__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncArray__GetHashCode_fn;
    type->interface0.fp_Enum = (void(*)(uObject*, ::g::Fuse::Reactive::Dispatcher*, uDelegate*))AsyncArray__Enum_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))AsyncArray__Dispose_fn;
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IAsyncArray_typeof(), offsetof(AsyncArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AsyncArray_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Array_typeof(), offsetof(::g::Fuse::Reactive::AsyncArray, _arr), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncArray, _worker), 0);
    return type;
}

// public AsyncArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :14
void AsyncArray__ctor__fn(AsyncArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_(worker, arr);
}

// internal Fuse.Scripting.Array get_Array() :12
void AsyncArray__get_Array_fn(AsyncArray* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->Array();
}

// public void Dispose() :25
void AsyncArray__Dispose_fn(AsyncArray* __this)
{
    __this->Dispose();
}

// private void DoDispose() :30
void AsyncArray__DoDispose_fn(AsyncArray* __this)
{
    __this->DoDispose();
}

// public void Enum(Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :20
void AsyncArray__Enum_fn(AsyncArray* __this, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    __this->Enum(thread, callback);
}

// public override sealed bool Equals(object obj) :35
void AsyncArray__Equals_fn(AsyncArray* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "Equals(object)");
    AsyncArray* ao = uAs<AsyncArray*>(obj, AsyncArray_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_arr)->Equals2(uPtr(ao)->_arr), void();
}

// public override sealed int GetHashCode() :42
void AsyncArray__GetHashCode_fn(AsyncArray* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "GetHashCode()");
    return *__retval = uPtr(__this->_arr)->GetHashCode(), void();
}

// public AsyncArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :14
void AsyncArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, AsyncArray** __retval)
{
    *__retval = AsyncArray::New1(worker, arr);
}

// public AsyncArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :14
void AsyncArray::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array)");
    _worker = worker;
    _arr = arr;
}

// internal Fuse.Scripting.Array get_Array() [instance] :12
::g::Fuse::Scripting::Array* AsyncArray::Array()
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "get_Array()");
    return _arr;
}

// public void Dispose() [instance] :25
void AsyncArray::Dispose()
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "Dispose()");
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)AsyncArray__DoDispose_fn, this));
}

// private void DoDispose() [instance] :30
void AsyncArray::DoDispose()
{
}

// public void Enum(Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [instance] :20
void AsyncArray::Enum(::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "Enum(Fuse.Reactive.Dispatcher,Uno.Action<object[]>)");
    uPtr(_worker)->Dispatch(1, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::EnumArray__Run_fn, ::g::Fuse::Reactive::EnumArray::New1(_worker, _arr, thread, callback)));
}

// public AsyncArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :14
AsyncArray* AsyncArray::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    AsyncArray* obj1 = (AsyncArray*)uNew(AsyncArray_typeof());
    obj1->ctor_(worker, arr);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(93)
// ------------------------------------------------------------

// internal sealed class AsyncFunction :93
// {
AsyncFunction_type* AsyncFunction_typeof()
{
    static uSStrong<AsyncFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AsyncFunction);
    options.TypeSize = sizeof(AsyncFunction_type);
    type = (AsyncFunction_type*)uClassType::New("Fuse.Reactive.AsyncFunction", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncFunction__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncFunction__GetHashCode_fn;
    type->interface0.fp_Call = (void(*)(uObject*, ::g::Fuse::Reactive::ScriptEventArgs*))AsyncFunction__Call_fn;
    type->interface0.fp_Call1 = (void(*)(uObject*, uArray*))AsyncFunction__Call1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))AsyncFunction__Dispose_fn;
    ::STRINGS[0] = uString::Const("worker was null in AsyncFunction");
    ::STRINGS[1] = uString::Const("func was null in AsyncFunction");
    ::STRINGS[2] = uString::Const("args was null in AsyncFunction");
    ::STRINGS[3] = uString::Const("args.Sender was null in AsyncFunction");
    ::TYPES[3] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IAsyncFunction_typeof(), offsetof(AsyncFunction_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AsyncFunction_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::AsyncFunction, _function), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncFunction, _worker), 0);
    return type;
}

// public AsyncFunction(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) :98
void AsyncFunction__ctor__fn(AsyncFunction* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_(worker, func);
}

// public void Call(Fuse.Reactive.ScriptEventArgs args) :114
void AsyncFunction__Call_fn(AsyncFunction* __this, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->Call(args);
}

// public void Call(object[] args) :107
void AsyncFunction__Call1_fn(AsyncFunction* __this, uArray* args)
{
    __this->Call1(args);
}

// public void Dispose() :122
void AsyncFunction__Dispose_fn(AsyncFunction* __this)
{
    __this->Dispose();
}

// private void DoDispose() :127
void AsyncFunction__DoDispose_fn(AsyncFunction* __this)
{
    __this->DoDispose();
}

// public override sealed bool Equals(object obj) :132
void AsyncFunction__Equals_fn(AsyncFunction* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Equals(object)");
    AsyncFunction* ao = uAs<AsyncFunction*>(obj, AsyncFunction_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_function)->Equals2(uPtr(ao)->_function), void();
}

// public override sealed int GetHashCode() :139
void AsyncFunction__GetHashCode_fn(AsyncFunction* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "GetHashCode()");
    return *__retval = uPtr(__this->_function)->GetHashCode(), void();
}

// public AsyncFunction New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) :98
void AsyncFunction__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func, AsyncFunction** __retval)
{
    *__retval = AsyncFunction::New1(worker, func);
}

// public AsyncFunction(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) [instance] :98
void AsyncFunction::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Function)");

    if (worker == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"worker was ...*/]));

    if (func == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"func was nu...*/]));

    _function = func;
    _worker = worker;
}

// public void Call(Fuse.Reactive.ScriptEventArgs args) [instance] :114
void AsyncFunction::Call(::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Call(Fuse.Reactive.ScriptEventArgs)");

    if (args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"args was nu...*/]));

    if (uPtr(args)->Sender() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"args.Sender...*/]));

    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::CallEventHandler__Run_fn, ::g::Fuse::Reactive::CallEventHandler::New1(_worker, _function, args)));
}

// public void Call(object[] args) [instance] :107
void AsyncFunction::Call1(uArray* args)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Call(object[])");

    if (args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"args was nu...*/]));

    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::CallFunction__Run_fn, ::g::Fuse::Reactive::CallFunction::New1(_function, args)));
}

// public void Dispose() [instance] :122
void AsyncFunction::Dispose()
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Dispose()");
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)AsyncFunction__DoDispose_fn, this));
}

// private void DoDispose() [instance] :127
void AsyncFunction::DoDispose()
{
}

// public AsyncFunction New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) [static] :98
AsyncFunction* AsyncFunction::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    AsyncFunction* obj1 = (AsyncFunction*)uNew(AsyncFunction_typeof());
    obj1->ctor_(worker, func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(268)
// -------------------------------------------------------------

// internal sealed class AsyncObject :268
// {
AsyncObject_type* AsyncObject_typeof()
{
    static uSStrong<AsyncObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AsyncObject);
    options.TypeSize = sizeof(AsyncObject_type);
    type = (AsyncObject_type*)uClassType::New("Fuse.Reactive.AsyncObject", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncObject__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncObject__GetHashCode_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))AsyncObject__Dispose_fn;
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AsyncObject_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::AsyncObject, _obj), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncObject, _worker), 0);
    return type;
}

// public AsyncObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :274
void AsyncObject__ctor__fn(AsyncObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(worker, obj);
}

// public void Dispose() :309
void AsyncObject__Dispose_fn(AsyncObject* __this)
{
    __this->Dispose();
}

// private void DoDispose() :314
void AsyncObject__DoDispose_fn(AsyncObject* __this)
{
    __this->DoDispose();
}

// public override sealed bool Equals(object obj) :319
void AsyncObject__Equals_fn(AsyncObject* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "Equals(object)");
    AsyncObject* ao = uAs<AsyncObject*>(obj, AsyncObject_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_obj)->Equals2(uPtr(ao)->_obj), void();
}

// public override sealed int GetHashCode() :326
void AsyncObject__GetHashCode_fn(AsyncObject* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "GetHashCode()");
    return *__retval = uPtr(__this->_obj)->GetHashCode(), void();
}

// public AsyncObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :274
void AsyncObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, AsyncObject** __retval)
{
    *__retval = AsyncObject::New1(worker, obj);
}

// internal Fuse.Scripting.Object get_Object() :272
void AsyncObject__get_Object_fn(AsyncObject* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// public void Tell(string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :280
void AsyncObject__Tell_fn(AsyncObject* __this, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback)
{
    __this->Tell(key, thread, callback, failCallback);
}

// public bool TryTellSync(string key, object& result) :285
void AsyncObject__TryTellSync_fn(AsyncObject* __this, uString* key, uObject** result, bool* __retval)
{
    *__retval = __this->TryTellSync(key, result);
}

// public AsyncObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :274
void AsyncObject::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object)");
    _worker = worker;
    _obj = obj;
}

// public void Dispose() [instance] :309
void AsyncObject::Dispose()
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "Dispose()");
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)AsyncObject__DoDispose_fn, this));
}

// private void DoDispose() [instance] :314
void AsyncObject::DoDispose()
{
}

// internal Fuse.Scripting.Object get_Object() [instance] :272
::g::Fuse::Scripting::Object* AsyncObject::Object()
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "get_Object()");
    return _obj;
}

// public void Tell(string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [instance] :280
void AsyncObject::Tell(uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "Tell(string,Fuse.Reactive.Dispatcher,Uno.Action<object>,Uno.Action)");
    uPtr(_worker)->Dispatch(1, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::TellObject__Run_fn, ::g::Fuse::Reactive::TellObject::New1(_worker, _obj, key, thread, callback, failCallback)));
}

// public bool TryTellSync(string key, object& result) [instance] :285
bool AsyncObject::TryTellSync(uString* key, uObject** result)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "TryTellSync(string,object&)");
    uPtr(_worker)->ForceSuspend();
    bool success = false;
    *result = NULL;

    try
    {
        if (uPtr(_obj)->ContainsKey(key))
        {
            *result = uPtr(_obj)->Item(key);
            success = true;
        }
        else
            ;
    }
    catch (const uThrowable& __t)
    {
        uPtr(_worker)->Resume();
        throw __t;
    }
    // finally
    uPtr(_worker)->Resume();
    return success;
}

// public AsyncObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :274
AsyncObject* AsyncObject::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    AsyncObject* obj1 = (AsyncObject*)uNew(AsyncObject_typeof());
    obj1->ctor_(worker, obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2444)
// --------------------------------------------------------------

// private sealed class CascadingPathSubscription.BindAttempt :2444
// {
uType* CascadingPathSubscription__BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(CascadingPathSubscription__BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.CascadingPathSubscription.BindAttempt", options);
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::CascadingPathSubscription_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::CascadingPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cps), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cur), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _dcChangeds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _isDisposed), 0,
        ::g::Fuse::Reactive::InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _ps), 0);
    return type;
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) :2451
void CascadingPathSubscription__BindAttempt__ctor__fn(CascadingPathSubscription__BindAttempt* __this, ::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    __this->ctor_(cps);
}

// public void Dispose() :2502
void CascadingPathSubscription__BindAttempt__Dispose_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Dispose();
}

// private void Fail() :2471
void CascadingPathSubscription__BindAttempt__Fail_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Fail();
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) :2451
void CascadingPathSubscription__BindAttempt__New1_fn(::g::Fuse::Reactive::CascadingPathSubscription* cps, CascadingPathSubscription__BindAttempt** __retval)
{
    *__retval = CascadingPathSubscription__BindAttempt::New1(cps);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :2494
void CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn(CascadingPathSubscription__BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// private void TryBind() :2458
void CascadingPathSubscription__BindAttempt__TryBind_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) [instance] :2451
void CascadingPathSubscription__BindAttempt::ctor_(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", ".ctor(Fuse.Reactive.CascadingPathSubscription)");
    _dcChangeds = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Node>*/]));
    _cps = cps;
    _cur = uPtr(cps)->_n;
    TryBind();
}

// public void Dispose() [instance] :2502
void CascadingPathSubscription__BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Dispose()");
    ::g::Fuse::Node* ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    for (int i = 0; i < uPtr(_dcChangeds)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dcChangeds), uCRef<int>(i), &ret2), ret2))->remove_DataContextChanged(uDelegate::New(::TYPES[8/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));
}

// private void Fail() [instance] :2471
void CascadingPathSubscription__BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    uObject* curdc = uPtr(_cur)->DataContext();

    while (_cur != NULL)
    {
        uObject* dc = uPtr(_cur)->DataContext();

        if ((dc != NULL) && (dc != curdc))
        {
            TryBind();
            return;
        }

        _cur = uPtr(_cur)->Parent();
    }
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :2494
void CascadingPathSubscription__BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");

    if (_isDisposed)
        return;

    uPtr(_cps)->RestartBinding();
}

// private void TryBind() [instance] :2458
void CascadingPathSubscription__BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "TryBind()");
    uObject* dc = uPtr(_cur)->DataContext();
    ::g::Uno::Collections::List__Add_fn(uPtr(_dcChangeds), _cur);
    uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[8/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));

    if (dc != NULL)
    {
        _ps = ::g::Fuse::Reactive::InternalPathSubscription::New2(uPtr(_cps)->_b, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)CascadingPathSubscription__BindAttempt__Fail_fn, this));
        uPtr(_ps)->Init(uPtr(_cur)->DataContext(), uPtr(_cps)->_path);
    }
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) [static] :2451
CascadingPathSubscription__BindAttempt* CascadingPathSubscription__BindAttempt::New1(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    CascadingPathSubscription__BindAttempt* obj1 = (CascadingPathSubscription__BindAttempt*)uNew(CascadingPathSubscription__BindAttempt_typeof());
    obj1->ctor_(cps);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(485)
// -------------------------------------------------------------

// public abstract class Binding :485
// {
Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Reactive.Binding", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnUnrooted_fn;
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    type->SetFields(3,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Binding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Binding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)Binding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// protected Binding(string key) :492
void Binding__ctor_1_fn(Binding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :488
void Binding__get_Key_fn(Binding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :488
void Binding__set_Key_fn(Binding* __this, uString* value)
{
    __this->Key(value);
}

// protected Fuse.Node get_Node() :490
void Binding__get_Node_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// protected override void OnRooted(Fuse.Node n) :499
void Binding__OnRooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::CascadingPathSubscription::New1(__this, __this->Node(), __this->Key());
}

// protected override void OnUnrooted(Fuse.Node n) :505
void Binding__OnUnrooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnUnrooted(Fuse.Node)");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[9/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// protected Binding(string key) [instance] :492
void Binding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.Binding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :488
uString* Binding::Key()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :488
void Binding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.Binding", "set_Key(string)");
    _Key = value;
}

// protected Fuse.Node get_Node() [instance] :490
::g::Fuse::Node* Binding::Node()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Node()");
    return ParentNode();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(162)
// -------------------------------------------------------------

// internal sealed class CallEventHandler :162
// {
CallEventHandler_type* CallEventHandler_typeof()
{
    static uSStrong<CallEventHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CallEventHandler);
    options.TypeSize = sizeof(CallEventHandler_type);
    type = (CallEventHandler_type*)uClassType::New("Fuse.Reactive.CallEventHandler", options);
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))CallEventHandler__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))CallEventHandler__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))CallEventHandler__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))CallEventHandler__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))CallEventHandler__AddObject_fn;
    ::STRINGS[4] = uString::Const("_args was null");
    ::STRINGS[5] = uString::Const("_args.Sender was null");
    ::STRINGS[6] = uString::Const("data");
    ::STRINGS[7] = uString::Const("sender");
    ::STRINGS[8] = uString::Const("setValueExclusive");
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(CallEventHandler_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ScriptEventArgs_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _args), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _func), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _function), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _obj), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _worker), 0);
    return type;
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) :176
void CallEventHandler__ctor__fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->ctor_(worker, function, args);
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) :169
void CallEventHandler__ctor_1_fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->ctor_1(worker, function, args);
}

// public void AddBool(string key, bool value) :252
void CallEventHandler__AddBool_fn(CallEventHandler* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :247
void CallEventHandler__AddDouble_fn(CallEventHandler* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :242
void CallEventHandler__AddInt_fn(CallEventHandler* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :232
void CallEventHandler__AddObject_fn(CallEventHandler* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :237
void CallEventHandler__AddString_fn(CallEventHandler* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) :176
void CallEventHandler__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval)
{
    *__retval = CallEventHandler::New1(worker, function, args);
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) :169
void CallEventHandler__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval)
{
    *__retval = CallEventHandler::New2(worker, function, args);
}

// public void Run() :183
void CallEventHandler__Run_fn(CallEventHandler* __this)
{
    __this->Run();
}

// private void SetObservable(Fuse.Scripting.Object obs, object value) :225
void CallEventHandler__SetObservable_fn(CallEventHandler* __this, ::g::Fuse::Scripting::Object* obs, uObject* value)
{
    __this->SetObservable(obs, value);
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) [instance] :176
void CallEventHandler::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Function,Fuse.Reactive.ScriptEventArgs)");
    _worker = worker;
    _func = function;
    _args = args;
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) [instance] :169
void CallEventHandler::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", ".ctor(Fuse.Reactive.ThreadWorker,string,Fuse.Reactive.ScriptEventArgs)");
    _worker = worker;
    _function = function;
    _args = args;
}

// public void AddBool(string key, bool value) [instance] :252
void CallEventHandler::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddBool(string,bool)");
    uPtr(_obj)->Item(key, uBox(::TYPES[17/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :247
void CallEventHandler::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddDouble(string,double)");
    uPtr(_obj)->Item(key, uBox(::TYPES[12/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :242
void CallEventHandler::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddInt(string,int)");
    uPtr(_obj)->Item(key, uBox(::TYPES[12/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :232
void CallEventHandler::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddObject(string,object)");
    uPtr(_obj)->Item(key, uPtr(_worker)->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :237
void CallEventHandler::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddString(string,string)");
    uPtr(_obj)->Item(key, value);
}

// public void Run() [instance] :183
void CallEventHandler::Run()
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "Run()");

    if (_args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"_args was n...*/]));

    if (uPtr(_args)->Sender() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"_args.Sende...*/]));

    uObject* dc = uPtr(uPtr(_args)->Sender())->DataContext();

    if (::g::Uno::String::op_Inequality(_function, NULL) && uPtr(uPtr(_worker)->GlobalObject())->ContainsKey(_function))
    {
        uObject* obj = uPtr(uPtr(_worker)->GlobalObject())->Item(_function);
        ::g::Fuse::Scripting::Object* obs = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[4/*Fuse.Scripting.Object*/]);

        if (obs != NULL)
        {
            SetObservable(obs, dc);
            return;
        }

        _func = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[14/*Fuse.Scripting.Function*/]);
    }

    if (_func == NULL)
        return;

    _obj = uPtr(uPtr(_worker)->Context())->NewObject();
    uPtr(_obj)->Item(::STRINGS[6/*"data"*/], uPtr(_worker)->Unwrap(dc));

    if (::g::Uno::String::op_Inequality(uPtr(uPtr(_args)->Sender())->Name(), NULL))
        uPtr(_obj)->Item(::STRINGS[7/*"sender"*/], uPtr(uPtr(_args)->Sender())->Name());

    if (uPtr(_args)->Args() != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(uPtr(_args)->Args()), ::TYPES[54/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);

    uPtr(_func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (::g::Fuse::Scripting::Object*)_obj));

    if (::g::Uno::String::op_Inequality(_function, NULL))
        ;
}

// private void SetObservable(Fuse.Scripting.Object obs, object value) [instance] :225
void CallEventHandler::SetObservable(::g::Fuse::Scripting::Object* obs, uObject* value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "SetObservable(Fuse.Scripting.Object,object)");
    uPtr(obs)->CallMethod(::STRINGS[8/*"setValueExc...*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uObject*)uPtr(_worker)->Unwrap(value)));
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) [static] :176
CallEventHandler* CallEventHandler::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    CallEventHandler* obj2 = (CallEventHandler*)uNew(CallEventHandler_typeof());
    obj2->ctor_(worker, function, args);
    return obj2;
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) [static] :169
CallEventHandler* CallEventHandler::New2(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    CallEventHandler* obj1 = (CallEventHandler*)uNew(CallEventHandler_typeof());
    obj1->ctor_1(worker, function, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(145)
// -------------------------------------------------------------

// internal sealed class CallFunction :145
// {
uType* CallFunction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallFunction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.CallFunction", options);
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::CallFunction, _args), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::CallFunction, _function), 0);
    return type;
}

// public CallFunction(Fuse.Scripting.Function function, object[] args) :150
void CallFunction__ctor__fn(CallFunction* __this, ::g::Fuse::Scripting::Function* function, uArray* args)
{
    __this->ctor_(function, args);
}

// public CallFunction New(Fuse.Scripting.Function function, object[] args) :150
void CallFunction__New1_fn(::g::Fuse::Scripting::Function* function, uArray* args, CallFunction** __retval)
{
    *__retval = CallFunction::New1(function, args);
}

// public void Run() :156
void CallFunction__Run_fn(CallFunction* __this)
{
    __this->Run();
}

// public CallFunction(Fuse.Scripting.Function function, object[] args) [instance] :150
void CallFunction::ctor_(::g::Fuse::Scripting::Function* function, uArray* args)
{
    uStackFrame __("Fuse.Reactive.CallFunction", ".ctor(Fuse.Scripting.Function,object[])");
    _function = function;
    _args = args;
}

// public void Run() [instance] :156
void CallFunction::Run()
{
    uStackFrame __("Fuse.Reactive.CallFunction", "Run()");
    uPtr(_function)->Call(_args);
}

// public CallFunction New(Fuse.Scripting.Function function, object[] args) [static] :150
CallFunction* CallFunction::New1(::g::Fuse::Scripting::Function* function, uArray* args)
{
    CallFunction* obj1 = (CallFunction*)uNew(CallFunction_typeof());
    obj1->ctor_(function, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(386)
// -------------------------------------------------------------

// internal sealed class CallObjectEventHandler :386
// {
CallObjectEventHandler_type* CallObjectEventHandler_typeof()
{
    static uSStrong<CallObjectEventHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CallObjectEventHandler);
    options.TypeSize = sizeof(CallObjectEventHandler_type);
    type = (CallObjectEventHandler_type*)uClassType::New("Fuse.Reactive.CallObjectEventHandler", options);
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))CallObjectEventHandler__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))CallObjectEventHandler__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))CallObjectEventHandler__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))CallObjectEventHandler__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))CallObjectEventHandler__AddObject_fn;
    ::STRINGS[9] = uString::Const("worker");
    ::STRINGS[10] = uString::Const("obj");
    ::STRINGS[11] = uString::Const("args");
    ::STRINGS[4] = uString::Const("_args was null");
    ::STRINGS[5] = uString::Const("_args.Sender was null");
    ::STRINGS[12] = uString::Const("Callback not found: ");
    ::STRINGS[6] = uString::Const("data");
    ::STRINGS[8] = uString::Const("setValueExclusive");
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(CallObjectEventHandler_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ScriptEventArgs_typeof(), offsetof(::g::Fuse::Reactive::CallObjectEventHandler, _args), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::CallObjectEventHandler, _obj), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::CallObjectEventHandler, _worker), 0);
    return type;
}

// public CallObjectEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.ScriptEventArgs args) :392
void CallObjectEventHandler__ctor__fn(CallObjectEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->ctor_(worker, obj, args);
}

// public void AddBool(string key, bool value) :468
void CallObjectEventHandler__AddBool_fn(CallObjectEventHandler* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :463
void CallObjectEventHandler__AddDouble_fn(CallObjectEventHandler* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :458
void CallObjectEventHandler__AddInt_fn(CallObjectEventHandler* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :448
void CallObjectEventHandler__AddObject_fn(CallObjectEventHandler* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :453
void CallObjectEventHandler__AddString_fn(CallObjectEventHandler* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public CallObjectEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.ScriptEventArgs args) :392
void CallObjectEventHandler__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args, CallObjectEventHandler** __retval)
{
    *__retval = CallObjectEventHandler::New1(worker, obj, args);
}

// public void Run() :406
void CallObjectEventHandler__Run_fn(CallObjectEventHandler* __this)
{
    __this->Run();
}

// private void SetObservable(Fuse.Scripting.Object obs, object value) :443
void CallObjectEventHandler__SetObservable_fn(CallObjectEventHandler* __this, ::g::Fuse::Scripting::Object* obs, uObject* value)
{
    __this->SetObservable(obs, value);
}

// public CallObjectEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.ScriptEventArgs args) [instance] :392
void CallObjectEventHandler::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Fuse.Reactive.ScriptEventArgs)");

    if (worker == NULL)
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[9/*"worker"*/]));

    if (obj == NULL)
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[10/*"obj"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[11/*"args"*/]));

    _worker = worker;
    _obj = obj;
    _args = args;
}

// public void AddBool(string key, bool value) [instance] :468
void CallObjectEventHandler::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "AddBool(string,bool)");
    uPtr(_obj)->Item(key, uBox(::TYPES[17/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :463
void CallObjectEventHandler::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "AddDouble(string,double)");
    uPtr(_obj)->Item(key, uBox(::TYPES[12/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :458
void CallObjectEventHandler::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "AddInt(string,int)");
    uPtr(_obj)->Item(key, uBox(::TYPES[12/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :448
void CallObjectEventHandler::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "AddObject(string,object)");
    uPtr(_obj)->Item(key, uPtr(_worker)->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :453
void CallObjectEventHandler::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "AddString(string,string)");
    uPtr(_obj)->Item(key, value);
}

// public void Run() [instance] :406
void CallObjectEventHandler::Run()
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "Run()");
    uString* f = uPtr(_args)->Name();

    if (_args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"_args was n...*/]));

    if (uPtr(_args)->Sender() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"_args.Sende...*/]));

    uObject* dc = uPtr(uPtr(_args)->Sender())->DataContext();

    if (!uPtr(_obj)->ContainsKey(f))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[12/*"Callback no...*/], f)));

    uObject* obj = uPtr(_obj)->Item(f);
    ::g::Fuse::Scripting::Object* obs = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[4/*Fuse.Scripting.Object*/]);

    if (obs != NULL)
    {
        SetObservable(obs, dc);
        return;
    }

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[14/*Fuse.Scripting.Function*/]);

    if (func == NULL)
        return;

    if (uPtr(_args)->Args() != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(uPtr(_args)->Args()), ::TYPES[54/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);

    _obj = uPtr(uPtr(_worker)->Context())->NewObject();
    uPtr(_obj)->Item(::STRINGS[6/*"data"*/], uPtr(_worker)->Unwrap(dc));
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (::g::Fuse::Scripting::Object*)_obj));
}

// private void SetObservable(Fuse.Scripting.Object obs, object value) [instance] :443
void CallObjectEventHandler::SetObservable(::g::Fuse::Scripting::Object* obs, uObject* value)
{
    uStackFrame __("Fuse.Reactive.CallObjectEventHandler", "SetObservable(Fuse.Scripting.Object,object)");
    uPtr(obs)->CallMethod(::STRINGS[8/*"setValueExc...*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uObject*)uPtr(_worker)->Unwrap(value)));
}

// public CallObjectEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.ScriptEventArgs args) [static] :392
CallObjectEventHandler* CallObjectEventHandler::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    CallObjectEventHandler* obj1 = (CallObjectEventHandler*)uNew(CallObjectEventHandler_typeof());
    obj1->ctor_(worker, obj, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2416)
// --------------------------------------------------------------

// internal sealed class CascadingPathSubscription :2416
// {
CascadingPathSubscription_type* CascadingPathSubscription_typeof()
{
    static uSStrong<CascadingPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CascadingPathSubscription);
    options.TypeSize = sizeof(CascadingPathSubscription_type);
    type = (CascadingPathSubscription_type*)uClassType::New("Fuse.Reactive.CascadingPathSubscription", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))CascadingPathSubscription__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CascadingPathSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _b), 0,
        CascadingPathSubscription__BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _bindAttempt), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _n), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _path), 0);
    return type;
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) :2424
void CascadingPathSubscription__ctor__fn(CascadingPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :2519
void CascadingPathSubscription__Dispose_fn(CascadingPathSubscription* __this)
{
    __this->Dispose();
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) :2424
void CascadingPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path, CascadingPathSubscription** __retval)
{
    *__retval = CascadingPathSubscription::New1(b, n, path);
}

// private void RestartBinding() :2433
void CascadingPathSubscription__RestartBinding_fn(CascadingPathSubscription* __this)
{
    __this->RestartBinding();
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) [instance] :2424
void CascadingPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", ".ctor(Fuse.Reactive.Binding,Fuse.Node,string)");
    _n = n;
    _b = b;
    _path = path;
    RestartBinding();
}

// public void Dispose() [instance] :2519
void CascadingPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// private void RestartBinding() [instance] :2433
void CascadingPathSubscription::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    _bindAttempt = CascadingPathSubscription__BindAttempt::New1(this);
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) [static] :2424
CascadingPathSubscription* CascadingPathSubscription::New1(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    CascadingPathSubscription* obj1 = (CascadingPathSubscription*)uNew(CascadingPathSubscription_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1885)
// --------------------------------------------------------------

// public sealed class Case :1885
// {
uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_ctor_ = (void*)Case__New1_fn;
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[19] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Case() :1885
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1918
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1919
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :1934
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1945
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1924
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1925
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1885
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1912
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1913
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Factory f) :1940
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Factory* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1906
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1907
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1893
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1894
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1885
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1918
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs(_value, ::TYPES[17/*bool*/]) ? uUnbox<bool>(::TYPES[17/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1919
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[17/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :1934
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[19/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[20/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[20/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1945
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1924
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1925
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1912
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs(_value, ::TYPES[12/*double*/]) ? uUnbox<double>(::TYPES[12/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1913
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[12/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Factory f) [instance] :1940
void Case::OnFactoriesChanged(::g::Uno::UX::Factory* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Factory)");
    Invalidate();
}

// public string get_String() [instance] :1906
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[21/*string*/]);
}

// public void set_String(string value) [instance] :1907
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1893
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1894
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1885
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(760)
// -------------------------------------------------------------

// internal static class Console :760
// {
uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno");
    ::STRINGS[14] = uString::Const("[Function]");
    ::STRINGS[15] = uString::Const("[object]");
    ::STRINGS[16] = uString::Const("[array]");
    ::STRINGS[17] = uString::Const(" - ");
    ::STRINGS[18] = uString::Const("log");
    ::STRINGS[19] = uString::Const("dir");
    ::STRINGS[20] = uString::Const("console");
    ::STRINGS[21] = uString::Const("null");
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[24] = ::g::Uno::String_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Context_typeof();
    return type;
}

// private static object Dir(object[] args) :780
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) :793
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* indent)
{
    Console::Dir1(builder, obj, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :853
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :762
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :770
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :780
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[13/*"/usr/local/...*/], 789);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) [static] :793
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int])");
    uArray* array1;
    int index2;
    int length3;

    if ((((uIs(obj, ::TYPES[22/*int*/]) || uIs(obj, ::TYPES[23/*float*/])) || uIs(obj, ::TYPES[12/*double*/])) || uIs(obj, ::TYPES[17/*bool*/])) || uIs(obj, ::TYPES[21/*string*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[14/*Fuse.Scripting.Function*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::STRINGS[14/*"[Function]"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[4/*Fuse.Scripting.Object*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[15/*"[object]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[4/*Fuse.Scripting.Object*/]);

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->AppendLine(k);
                Console::Dir1(builder, uPtr(o)->Item(k), indent + 1);
            }
        }

        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Array*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[16/*"[array]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[25/*Fuse.Scripting.Array*/]);

            for (int i = 0; i < uPtr(a)->Length(); i++)
                Console::Dir1(builder, uPtr(a)->Item(i), indent);
        }

        return;
    }
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :853
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append1(::STRINGS[17/*" - "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :762
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[18/*"log"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[19/*"dir"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[20/*"console"*/], console);
}

// private static object Log(object[] args) [static] :770
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[21/*"null"*/], 1, ::STRINGS[13/*"/usr/local/...*/], 774);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1602)
// --------------------------------------------------------------

// internal sealed class CrossThreadExceptionHandler :1602
// {
uType* CrossThreadExceptionHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CrossThreadExceptionHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.CrossThreadExceptionHandler", options);
    type->fp_ctor_ = (void*)CrossThreadExceptionHandler__New1_fn;
    ::TYPES[28] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::CrossThreadExceptionHandler, _exceptionQueue), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::CrossThreadExceptionHandler, _mutex), 0);
    return type;
}

// public CrossThreadExceptionHandler() :1607
void CrossThreadExceptionHandler__ctor__fn(CrossThreadExceptionHandler* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :1612
void CrossThreadExceptionHandler__CheckAndThrow_fn(CrossThreadExceptionHandler* __this)
{
    __this->CheckAndThrow();
}

// public CrossThreadExceptionHandler New() :1607
void CrossThreadExceptionHandler__New1_fn(CrossThreadExceptionHandler** __retval)
{
    *__retval = CrossThreadExceptionHandler::New1();
}

// public void SetException(Uno.Exception e) :1628
void CrossThreadExceptionHandler__SetException_fn(CrossThreadExceptionHandler* __this, ::g::Uno::Exception* e)
{
    __this->SetException(e);
}

// public CrossThreadExceptionHandler() [instance] :1607
void CrossThreadExceptionHandler::ctor_()
{
    uStackFrame __("Fuse.Reactive.CrossThreadExceptionHandler", ".ctor()");
    _mutex = ::g::Uno::Threading::Mutex::Create();
    _exceptionQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[28/*Uno.Collections.Queue<Uno.Exception>*/]));
}

// public void CheckAndThrow() [instance] :1612
void CrossThreadExceptionHandler::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.CrossThreadExceptionHandler", "CheckAndThrow()");
    ::g::Uno::Exception* ret2;

    try
    {
        uPtr(_mutex)->Lock();

        if (uPtr(_exceptionQueue)->Count() > 0)
            U_THROW((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_exceptionQueue), &ret2), ret2));
    }
    catch (const uThrowable& __t)
    {
        uPtr(_mutex)->Unlock();
        throw __t;
    }
    // finally
    uPtr(_mutex)->Unlock();
}

// public void SetException(Uno.Exception e) [instance] :1628
void CrossThreadExceptionHandler::SetException(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Reactive.CrossThreadExceptionHandler", "SetException(Uno.Exception)");
    uPtr(_mutex)->Lock();
    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_exceptionQueue), e);
    uPtr(_mutex)->Unlock();
}

// public CrossThreadExceptionHandler New() [static] :1607
CrossThreadExceptionHandler* CrossThreadExceptionHandler::New1()
{
    CrossThreadExceptionHandler* obj1 = (CrossThreadExceptionHandler*)uNew(CrossThreadExceptionHandler_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(526)
// -------------------------------------------------------------

// public class DataBinding<T> :526
// {
DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))DataBinding__FuseScriptingINameListenerOnNameChanged_fn;
    ::STRINGS[22] = uString::Const("Not handled: OnAdd");
    ::STRINGS[23] = uString::Const("Not handled: OnFailed");
    ::STRINGS[24] = uString::Const("Not handled: OnInsertAt");
    ::STRINGS[25] = uString::Const("Not handled: OnNewAll");
    ::STRINGS[26] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[27] = uString::Const("Not handled: OnRemoveAt");
    ::TYPES[29] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[31] = ::g::Uno::UX::Property_typeof();
    ::TYPES[32] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[33] = ::g::Fuse::Scripting::INameListener_typeof();
    ::TYPES[34] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[35] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[36] = ::g::Fuse::Reactive::Marshal_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[31/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[32/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[34/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)),
        ::TYPES[36/*Fuse.Reactive.Marshal*/]->MakeMethod(1, type->T(0)),
        ::TYPES[1/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Scripting::INameListener_typeof(), offsetof(DataBinding_type, interface1));
    type->SetFields(5,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :532
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private bool Acceptor(object obj) :684
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :542
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :552
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnFailed(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[23/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :568
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[24/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :557
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;

    if (length_ > 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[25/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :547
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :563
void DataBinding__FuseReactiveIObserverOnRemove_fn(DataBinding* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :537
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// private void Fuse.Scripting.INameListener.OnNameChanged(object obj, string name) :595
void DataBinding__FuseScriptingINameListenerOnNameChanged_fn(DataBinding* __this, uObject* obj, uString* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.INameListener.OnNameChanged(object,string)");
    __this->PushValue(__this->_currentValue);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :532
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override void NewValue(object value) :610
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[29/*Fuse.Reactive.IObservable*/]))
    {
        if (__this->_subscription != NULL)
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[9/*Uno.IDisposable*/]));
            __this->_subscription = NULL;
        }

        uObject* obs = uAs<uObject*>(value, ::TYPES[29/*Fuse.Reactive.IObservable*/]);

        if (obs != NULL)
            __this->_subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[29/*Fuse.Reactive.IObservable*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :573
void DataBinding__OnRooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted(Fuse.Node)");
    ::g::Fuse::Reactive::Binding__OnRooted_fn(__this, parentNode);
    uPtr(__this->Target())->add_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :581
void DataBinding__OnUnrooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::Scripting::NameRegistry::RemoveListener((uObject*)__this);
    uPtr(__this->Target())->remove_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[9/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    ::g::Fuse::Reactive::Binding__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) :600
void DataBinding__OnValueChanged_fn(DataBinding* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void PushValue(object newValue) :642
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void SetValue(T value) :679
void DataBinding__SetValue_fn(DataBinding* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "SetValue(T)");
    ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), value, __this);
}

// public generated Uno.UX.Property<T> get_Target() :529
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :529
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :532
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
}

// private bool Acceptor(object obj) [instance] :684
bool DataBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) [instance] :600
void DataBinding::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if ((_subscription != NULL) && (uPtr(args)->Origin() != this))
        ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(_subscription), ::TYPES[80/*Fuse.Reactive.ISubscription*/]), uBoxPtr(__types[0], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2)));
}

// private void PushValue(object newValue) [instance] :642
void DataBinding::PushValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(3/*Fuse.Reactive.Marshal.ToType<T>*/),
        __type->GetBase(DataBinding_typeof())->Precalced(4/*Uno.Action<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");
    _currentValue = newValue;

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::Scripting::NameRegistry::RemoveListener((uObject*)this);
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], newValue), this);
        return;
    }

    uString* name = uAs<uString*>(newValue, ::TYPES[21/*string*/]);

    if (::g::Uno::String::op_Inequality(name, NULL) && (ParentNode() != NULL))
    {
        ::g::Fuse::Scripting::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(ParentNode())->FindNodeByName(uCast<uString*>(newValue, ::TYPES[21/*string*/]));

        if (uIs(k, __types[0]))
        {
            ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], k), this);
            return;
        }
        else
        {
            uObject* candidate = uPtr(ParentNode())->FindObjectByName(uCast<uString*>(newValue, ::TYPES[21/*string*/]), uDelegate::New(::TYPES[35/*Uno.Predicate<object>*/], (void*)DataBinding__Acceptor_fn, this));

            if (uIs(candidate, __types[0]))
            {
                ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], candidate), this);
                return;
            }
        }
    }

    ::g::Fuse::Reactive::Marshal::ToType(__types[1], newValue, uDelegate::New(__types[2], (void*)DataBinding__SetValue_fn, this));
}

// public generated Uno.UX.Property<T> get_Target() [instance] :529
::g::Uno::UX::Property* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :529
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :532
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(692)
// -------------------------------------------------------------

// public sealed class DataToResourceBinding<T> :692
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))DataToResourceBinding__NewValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseScriptingINameListenerOnNameChanged_fn;
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[35] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[37] = ::g::Fuse::Reactive::DataBinding_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[37/*Fuse.Reactive.DataBinding`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Scripting::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :695
void DataToResourceBinding__ctor_3_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool AcceptFunction(object obj) :727
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :695
void DataToResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New2(__type, target, key);
}

// internal override sealed void NewValue(object value) :702
void DataToResourceBinding__NewValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "NewValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[21/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// private void OnChanged() :716
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :695
void DataToResourceBinding::ctor_3(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :727
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :716
void DataToResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.DataBinding<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (ParentNode() == NULL)
        return;

    uObject* v;

    if (uPtr(ParentNode())->TryGetResource(_key, uDelegate::New(::TYPES[35/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        ::g::Uno::UX::Property__SetRestState_fn(uPtr((::g::Uno::UX::Property*)Target()), uUnboxAny(__types[1], v), this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :695
DataToResourceBinding* DataToResourceBinding::New2(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(742)
// -------------------------------------------------------------

// internal static class DebugLog :742
// {
uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    ::STRINGS[28] = uString::Const("debug_log");
    ::STRINGS[21] = uString::Const("null");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno");
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :744
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :749
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :744
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[28/*"debug_log"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :749
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[21/*"null"*/], 1, ::STRINGS[13/*"/usr/local/...*/], 753);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(871)
// -------------------------------------------------------------

// public abstract class Dispatcher :871
// {
Dispatcher_type* Dispatcher_typeof()
{
    static uSStrong<Dispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(Dispatcher);
    options.TypeSize = sizeof(Dispatcher_type);
    type = (Dispatcher_type*)uClassType::New("Fuse.Reactive.Dispatcher", options);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[38] = Dispatcher__ArgDispatch_typeof();
    ::TYPES[39] = Dispatcher__Arg2Dispatch_typeof();
    type->SetFields(0,
        Dispatcher_typeof(), (uintptr_t)&::g::Fuse::Reactive::Dispatcher::_uiThread_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("Dispatch", NULL, NULL, offsetof(Dispatcher_type, fp_Dispatch), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("Dispatch1`1", type, (void*)Dispatcher__Dispatch1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), type->U(0)),
        new uFunction("Dispatch2`2", type, (void*)Dispatcher__Dispatch2_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(0), type->U(1)),
        new uFunction("get_UIThread", NULL, (void*)Dispatcher__get_UIThread_fn, 0, true, Dispatcher_typeof(), 0));
    return type;
}

// protected generated Dispatcher() :871
void Dispatcher__ctor__fn(Dispatcher* __this)
{
    __this->ctor_();
}

// public void Dispatch1<T>(Uno.Action<T> action, T arg) :875
void Dispatcher__Dispatch1_fn(Dispatcher* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[38/*Fuse.Reactive.Dispatcher.ArgDispatch`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher", "Dispatch1`1(Uno.Action<T>,T)");
    Dispatcher__ArgDispatch* ret1;
    __this->Dispatch(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Dispatcher__ArgDispatch__Run_fn, (Dispatcher__ArgDispatch__New1_fn(__types[1], action, arg, &ret1), ret1)));
}

// public void Dispatch2<T1, T2>(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :880
void Dispatcher__Dispatch2_fn(Dispatcher* __this, uType* __type, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->U(0),
        __type->U(1),
        ::TYPES[39/*Fuse.Reactive.Dispatcher.Arg2Dispatch`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Fuse.Reactive.Dispatcher", "Dispatch2`2(Uno.Action<T1, T2>,T1,T2)");
    Dispatcher__Arg2Dispatch* ret2;
    __this->Dispatch(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Dispatcher__Arg2Dispatch__Run_fn, (Dispatcher__Arg2Dispatch__New1_fn(__types[2], action, arg1, arg2, &ret2), ret2)));
}

// public static Fuse.Reactive.Dispatcher get_UIThread() :951
void Dispatcher__get_UIThread_fn(Dispatcher** __retval)
{
    *__retval = Dispatcher::UIThread();
}

uSStrong<Dispatcher*> Dispatcher::_uiThread_;

// protected generated Dispatcher() [instance] :871
void Dispatcher::ctor_()
{
}

// public static Fuse.Reactive.Dispatcher get_UIThread() [static] :951
Dispatcher* Dispatcher::UIThread()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_UIThread()");

    if (Dispatcher::_uiThread() == NULL)
        Dispatcher::_uiThread() = Dispatcher__UIThreadDispatcher::New1();

    return Dispatcher::_uiThread();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(970)
// -------------------------------------------------------------

// public sealed class Each :970
// {
Each_type* Each_typeof()
{
    static uSStrong<Each_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(Each_type);
    type = (Each_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Each__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))Each__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Each__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))Each__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[41] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[42] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[11] = uObject_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[44] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[46] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[47] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[48] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[49] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[19] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Each_type, interface0));
    type->SetFields(3,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Each, _container), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Each, _count), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof())), offsetof(::g::Fuse::Reactive::Each, _elements), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Each, _factories), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Each, _items), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _matchKey), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Each, _subscription), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Factories", NULL, (void*)Each__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Each__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Each__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New1_fn, 0, true, Each_typeof(), 0));
    return type;
}

// public generated Each() :970
void Each__ctor_1_fn(Each* __this)
{
    __this->ctor_1();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) :1284
void Each__AddFactory_fn(Each* __this, ::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    __this->AddFactory(f, dataContext, newElements);
}

// private void AddNew(object dataContext) :1241
void Each__AddNew_fn(Each* __this, uObject* dataContext)
{
    __this->AddNew(dataContext);
}

// public int get_Count() :1032
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :1036
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :977
void Each__get_Factories_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1123
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (__this->_container == NULL)
        return;

    __this->AddNew(addedValue);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1116
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (__this->_container == NULL)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1142
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    __this->InsertNew(index_, value);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :1161
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAll(int)");

    if (__this->_container == NULL)
        return;

    __this->Repopulate();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1150
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret12;
    ::g::Uno::Collections::List* ret13;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret13), ret13)), &ret12), ret12); enum2.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[41/*Fuse.IDataContext*/]), value);
    }

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1130
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret14;
    ::g::Uno::Collections::List* ret15;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret15), ret15)), &ret14), ret14); enum1.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* c = enum1.Current(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(__this->_container), ::TYPES[47/*Fuse.IObjectContainer*/]), c);
    }

    uPtr(__this->_elements)->RemoveAt(index_);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1109
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnSet(object)");

    if (__this->_container == NULL)
        return;

    __this->Repopulate();
    __this->SetValid();
}

// private string GetMatchKey(object dataContext) :1227
void Each__GetMatchKey_fn(Each* __this, uObject* dataContext, uString** __retval)
{
    *__retval = __this->GetMatchKey(dataContext);
}

// private void InsertNew(int index, object dataContext) :1246
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext)
{
    __this->InsertNew(*index, dataContext);
}

// private bool IsUnchanged(object[] newDcs) :1192
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval)
{
    *__retval = __this->IsUnchanged(newDcs);
}

// public object get_Items() :1018
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :1019
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public string get_MatchKey() :1216
void Each__get_MatchKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :1217
void Each__set_MatchKey_fn(Each* __this, uString* value)
{
    __this->MatchKey(value);
}

// public generated Each New() :970
void Each__New1_fn(Each** __retval)
{
    *__retval = Each::New1();
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) :984
void Each__OnFactoriesChanged_fn(Each* __this, ::g::Uno::UX::Factory* factory)
{
    __this->OnFactoriesChanged(factory);
}

// private void OnItemsChanged() :1046
void Each__OnItemsChanged_fn(Each* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :992
void Each__OnRooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[47/*Fuse.IObjectContainer*/]);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :999
void Each__OnUnrooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[9/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->RemoveAll();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveAll() :1180
void Each__RemoveAll_fn(Each* __this)
{
    __this->RemoveAll();
}

// private void ReplaceAll(object[] dcs) :1170
void Each__ReplaceAll_fn(Each* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :1064
void Each__Repopulate_fn(Each* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :1098
void Each__SetFailed_fn(Each* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :1089
void Each__SetValid_fn(Each* __this)
{
    __this->SetValid();
}

// public generated Each() [instance] :970
void Each::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>*/]));
    ctor_();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) [instance] :1284
void Each::AddFactory(::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Each", "AddFactory(Uno.UX.Factory,object,Uno.Collections.List<Fuse.IDataContext>)");
    uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[41/*Fuse.IDataContext*/]);

    if (elm != NULL)
    {
        if (dataContext != NULL)
            ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(elm), ::TYPES[41/*Fuse.IDataContext*/]), dataContext);

        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
    }
}

// private void AddNew(object dataContext) [instance] :1241
void Each::AddNew(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "AddNew(object)");
    InsertNew(uPtr(_elements)->Count(), dataContext);
}

// public int get_Count() [instance] :1032
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :1036
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :977
uObject* Each::Factories()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Factories()");
    uObject* ind10 = _factories;
    return (ind10 != NULL) ? ind10 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[19/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[20/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[20/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this))));
}

// private string GetMatchKey(object dataContext) [instance] :1227
uString* Each::GetMatchKey(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(object)");
    ::g::Fuse::Reactive::AsyncObject* ao = uAs< ::g::Fuse::Reactive::AsyncObject*>(dataContext, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]);

    if ((ao != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        uObject* result;

        if (uPtr(ao)->TryTellSync(_matchKey, &result))
            return uAs<uString*>(result, ::TYPES[21/*string*/]);
    }

    return NULL;
}

// private void InsertNew(int index, object dataContext) [instance] :1246
void Each::InsertNew(int index, uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "InsertNew(int,object)");
    ::g::Uno::UX::Factory* ret16;
    ::g::Uno::Collections::List* ret17;
    uObject* ret18;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[44/*Uno.Collections.List<Fuse.IDataContext>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Factory* defaultCase = NULL;
    uString* key = GetMatchKey(dataContext);

    for (uObject* enum9 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[46/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum9), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum9), ::TYPES[45/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret16), ret16);

        if (uPtr(f)->IsDefaultCase())
            defaultCase = f;

        if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Case(), key))
            continue;

        anyMatched = true;
        AddFactory(f, dataContext, newElements);
    }

    if (!anyMatched && (defaultCase != NULL))
        AddFactory(defaultCase, dataContext, newElements);

    int childIndex = 0;

    for (int i = 0; i < index; ++i)
        childIndex = childIndex + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret17), ret17))->Count();

    for (int i1 = 0; i1 < newElements->Count(); ++i1)
        ::g::Fuse::IObjectContainer::Insert(uInterface(uPtr(_container), ::TYPES[47/*Fuse.IObjectContainer*/]), childIndex + i1, (::g::Uno::Collections::List__get_Item_fn(uPtr(newElements), uCRef<int>(i1), &ret18), ret18));

    ::g::Uno::Collections::List__Insert_fn(uPtr(_elements), uCRef<int>(index), newElements);
}

// private bool IsUnchanged(object[] newDcs) [instance] :1192
bool Each::IsUnchanged(uArray* newDcs)
{
    uStackFrame __("Fuse.Reactive.Each", "IsUnchanged(object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret19;
    ::g::Uno::Collections::List* ret20;

    if (newDcs == NULL)
    {
        if (uPtr(_elements)->Count() == 0)
            return true;
        else
            return false;
    }

    if (uPtr(newDcs)->Length() != uPtr(_elements)->Count())
        return false;

    for (int i = 0; i < uPtr(newDcs)->Length(); i++)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret20), ret20)), &ret19), ret19); enum8.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum8.Current(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);

            if (!::g::Uno::Object::Equals(uPtr(uPtr(newDcs)->Strong<uObject*>(i)), ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[41/*Fuse.IDataContext*/]))))
                return false;
        }

    return true;
}

// public object get_Items() [instance] :1018
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :1019
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public string get_MatchKey() [instance] :1216
uString* Each::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :1217
void Each::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) [instance] :984
void Each::OnFactoriesChanged(::g::Uno::UX::Factory* factory)
{
    uStackFrame __("Fuse.Reactive.Each", "OnFactoriesChanged(Uno.UX.Factory)");

    if (_container == NULL)
        return;

    Repopulate();
}

// private void OnItemsChanged() [instance] :1046
void Each::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Each", "OnItemsChanged()");

    if (_container == NULL)
        return;

    uObject* obs = uAs<uObject*>(_items, ::TYPES[29/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[9/*Uno.IDisposable*/]));

        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[29/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Repopulate();
}

// private void RemoveAll() [instance] :1180
void Each::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Each", "RemoveAll()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret22;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret21), ret21); enum6.MoveNext(::TYPES[48/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* es = enum6.Current(::TYPES[48/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(es), &ret22), ret22); enum7.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum7.Current(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
            ::g::Fuse::IObjectContainer::Remove(uInterface(uPtr(_container), ::TYPES[47/*Fuse.IObjectContainer*/]), e);
        }
    }

    uPtr(_elements)->Clear();
}

// private void ReplaceAll(object[] dcs) [instance] :1170
void Each::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Each", "ReplaceAll(object[])");
    uArray* array3;
    int index4;
    int length5;

    if (IsUnchanged(dcs))
        return;

    RemoveAll();

    if (dcs != NULL)

        for (array3 = dcs, index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            uObject* d = uPtr(array3)->Strong<uObject*>(index4);
            AddNew(d);
        }
}

// private void Repopulate() [instance] :1064
void Each::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Each", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[16/*object[]*/]);

    if (e != NULL)
        ReplaceAll(e);
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]);

        if ((a != NULL) && (Factories() != NULL))
            ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(a), ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[51/*Uno.Action<object[]>*/], (void*)Each__ReplaceAll_fn, this));
        else
        {
            RemoveAll();

            for (int i = 0; i < Count(); i++)
                AddNew(NULL);
        }
    }
}

// private void SetFailed(string message) [instance] :1098
void Each::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "SetFailed(string)");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[7/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, true, message);
}

// private void SetValid() [instance] :1089
void Each::SetValid()
{
    uStackFrame __("Fuse.Reactive.Each", "SetValid()");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[7/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, false, NULL);
}

// public generated Each New() [static] :970
Each* Each::New1()
{
    Each* obj11 = (Each*)uNew(Each_typeof());
    obj11->ctor_1();
    return obj11;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(48)
// ------------------------------------------------------------

// internal sealed class EnumArray :48
// {
uType* EnumArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(EnumArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.EnumArray", options);
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[52] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, uObject_typeof()->Array());
    type->SetFields(0,
        ::g::Fuse::Scripting::Array_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _array), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Reactive::EnumArray, _callback), 0,
        ::g::Fuse::Reactive::Dispatcher_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _worker), 0);
    return type;
}

// public EnumArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :55
void EnumArray__ctor__fn(EnumArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    __this->ctor_(worker, array, thread, callback);
}

// public EnumArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :55
void EnumArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, EnumArray** __retval)
{
    *__retval = EnumArray::New1(worker, array, thread, callback);
}

// public void Run() :63
void EnumArray__Run_fn(EnumArray* __this)
{
    __this->Run();
}

// public EnumArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [instance] :55
void EnumArray::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.EnumArray", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array,Fuse.Reactive.Dispatcher,Uno.Action<object[]>)");
    _worker = worker;
    _array = array;
    _thread = thread;
    _callback = callback;
}

// public void Run() [instance] :63
void EnumArray::Run()
{
    uStackFrame __("Fuse.Reactive.EnumArray", "Run()");
    uArray* res = uArray::New(::TYPES[16/*object[]*/], uPtr(_array)->Length());

    for (int i = 0; i < uPtr(_array)->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = uPtr(_worker)->Wrap(uPtr(_array)->Item(i));

    if (!uPtr(_worker)->IsOnWorkerThread())
        uPtr(_callback)->InvokeVoid(res);
    else
        ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[52/*Fuse.Reactive.Dispatcher.Dispatch1<object[]>*/], _callback, res);
}

// public EnumArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [static] :55
EnumArray* EnumArray::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    EnumArray* obj1 = (EnumArray*)uNew(EnumArray_typeof());
    obj1->ctor_(worker, array, thread, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2371)
// --------------------------------------------------------------

// internal sealed class EnumObservable :2371
// {
uType* EnumObservable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(EnumObservable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.EnumObservable", options);
    ::STRINGS[29] = uString::Const("_values");
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[52] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, uObject_typeof()->Array());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Reactive::EnumObservable, _callback), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _observable), 0,
        ::g::Fuse::Reactive::Dispatcher_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _worker), 0);
    return type;
}

// public EnumObservable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :2378
void EnumObservable__ctor__fn(EnumObservable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    __this->ctor_(worker, observable, thread, callback);
}

// public EnumObservable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :2378
void EnumObservable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, EnumObservable** __retval)
{
    *__retval = EnumObservable::New1(worker, observable, thread, callback);
}

// public void Run() :2386
void EnumObservable__Run_fn(EnumObservable* __this)
{
    __this->Run();
}

// public EnumObservable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [instance] :2378
void EnumObservable::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.EnumObservable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Fuse.Reactive.Dispatcher,Uno.Action<object[]>)");
    _worker = worker;
    _observable = observable;
    _thread = thread;
    _callback = callback;
}

// public void Run() [instance] :2386
void EnumObservable::Run()
{
    uStackFrame __("Fuse.Reactive.EnumObservable", "Run()");
    uObject* obj = uPtr(_observable)->Item(::STRINGS[29/*"_values"*/]);
    ::g::Fuse::Scripting::Array* array = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[25/*Fuse.Scripting.Array*/]);
    uArray* res = uArray::New(::TYPES[16/*object[]*/], uPtr(array)->Length());

    if (array != NULL)

        for (int i = 0; i < uPtr(array)->Length(); i++)
            uPtr(res)->Strong<uObject*>(i) = uPtr(_worker)->Wrap(uPtr(array)->Item(i));

    ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[52/*Fuse.Reactive.Dispatcher.Dispatch1<object[]>*/], _callback, res);
}

// public EnumObservable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [static] :2378
EnumObservable* EnumObservable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    EnumObservable* obj1 = (EnumObservable*)uNew(EnumObservable_typeof());
    obj1->ctor_(worker, observable, thread, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1309)
// --------------------------------------------------------------

// public sealed class EventBinding :1309
// {
::g::Fuse::Reactive::Binding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Binding_type);
    type = (::g::Fuse::Reactive::Binding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))EventBinding__NewValue_fn;
    ::STRINGS[30] = uString::Const("Can't call function when sender is unrooted");
    ::TYPES[53] = ::g::Fuse::Reactive::IAsyncFunction_typeof();
    ::TYPES[54] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[55] = ::g::Fuse::Reactive::Binding_typeof();
    type->SetFields(5,
        ::g::Fuse::Reactive::IAsyncFunction_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _func), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
    return type;
}

// public EventBinding(string key) :1312
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :1312
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :1319
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_func = uAs<uObject*>(obj, ::TYPES[53/*Fuse.Reactive.IAsyncFunction*/]);
}

// public void OnEvent(object sender, Uno.EventArgs args) :1324
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// public EventBinding(string key) [instance] :1312
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :1324
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");
    uObject* se = uAs<uObject*>(args, ::TYPES[54/*Fuse.Scripting.IScriptEvent*/]);

    if (ParentNode() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[30/*"Can't call ...*/]));

    if (_func != NULL)
    {
        ::g::Fuse::Reactive::ScriptEventArgs* sea = ::g::Fuse::Reactive::ScriptEventArgs::New2(ParentNode(), Key(), se);
        ::g::Fuse::Reactive::IAsyncFunction::Call(uInterface(uPtr(_func), ::TYPES[53/*Fuse.Reactive.IAsyncFunction*/]), sea);
    }
}

// public EventBinding New(string key) [static] :1312
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1962)
// --------------------------------------------------------------

// internal sealed class FileSourceTell :1962
// {
uType* FileSourceTell_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileSourceTell);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FileSourceTell", options);
    ::STRINGS[31] = uString::Const("path");
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[57] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[58] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof()), offsetof(::g::Fuse::Reactive::FileSourceTell, _callback), 0);
    return type;
}

// public FileSourceTell(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) :1966
void FileSourceTell__ctor__fn(FileSourceTell* __this, ::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    __this->ctor_(ao, callback);
}

// public FileSourceTell New(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) :1966
void FileSourceTell__New1_fn(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback, FileSourceTell** __retval)
{
    *__retval = FileSourceTell::New1(ao, callback);
}

// private void OnPath(object res) :1972
void FileSourceTell__OnPath_fn(FileSourceTell* __this, uObject* res)
{
    __this->OnPath(res);
}

// public FileSourceTell(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) [instance] :1966
void FileSourceTell::ctor_(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.FileSourceTell", ".ctor(Fuse.Reactive.AsyncObject,Uno.Action<Uno.UX.FileSource>)");
    _callback = callback;
    uPtr(ao)->Tell(::STRINGS[31/*"path"*/], ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[56/*Uno.Action<object>*/], (void*)FileSourceTell__OnPath_fn, this), NULL);
}

// private void OnPath(object res) [instance] :1972
void FileSourceTell::OnPath(uObject* res)
{
    uStackFrame __("Fuse.Reactive.FileSourceTell", "OnPath(object)");
    uString* path = uAs<uString*>(res, ::TYPES[21/*string*/]);

    if (::g::Uno::String::op_Inequality(path, NULL))
        uPtr(_callback)->InvokeVoid(::g::Fuse::Reactive::JSFileSource::New1(path));
}

// public FileSourceTell New(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) [static] :1966
FileSourceTell* FileSourceTell::New1(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    FileSourceTell* obj1 = (FileSourceTell*)uNew(FileSourceTell_typeof());
    obj1->ctor_(ao, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2096)
// --------------------------------------------------------------

// private sealed class Marshal.Float2Enum :2096
// {
uType* Marshal__Float2Enum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__Float2Enum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.Float2Enum", options);
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[60] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[61] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Reactive::Marshal__Float2Enum, _callback), 0);
    return type;
}

// public Float2Enum(object obj, Uno.Action<float2> callback) :2100
void Marshal__Float2Enum__ctor__fn(Marshal__Float2Enum* __this, uObject* obj, uDelegate* callback)
{
    __this->ctor_(obj, callback);
}

// private void Convert(float4 v) :2106
void Marshal__Float2Enum__Convert_fn(Marshal__Float2Enum* __this, ::g::Uno::Float4* v)
{
    __this->Convert(*v);
}

// public Float2Enum New(object obj, Uno.Action<float2> callback) :2100
void Marshal__Float2Enum__New1_fn(uObject* obj, uDelegate* callback, Marshal__Float2Enum** __retval)
{
    *__retval = Marshal__Float2Enum::New1(obj, callback);
}

// public Float2Enum(object obj, Uno.Action<float2> callback) [instance] :2100
void Marshal__Float2Enum::ctor_(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float2Enum", ".ctor(object,Uno.Action<float2>)");
    _callback = callback;
    ::g::Fuse::Reactive::Marshal::ToFloat4(obj, uDelegate::New(::TYPES[59/*Uno.Action<float4>*/], (void*)Marshal__Float2Enum__Convert_fn, this));
}

// private void Convert(float4 v) [instance] :2106
void Marshal__Float2Enum::Convert(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float2Enum", "Convert(float4)");
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float2__New2(v.X, v.Y)));
}

// public Float2Enum New(object obj, Uno.Action<float2> callback) [static] :2100
Marshal__Float2Enum* Marshal__Float2Enum::New1(uObject* obj, uDelegate* callback)
{
    Marshal__Float2Enum* obj1 = (Marshal__Float2Enum*)uNew(Marshal__Float2Enum_typeof());
    obj1->ctor_(obj, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2080)
// --------------------------------------------------------------

// private sealed class Marshal.Float3Enum :2080
// {
uType* Marshal__Float3Enum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__Float3Enum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.Float3Enum", options);
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[62] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[61] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof()), offsetof(::g::Fuse::Reactive::Marshal__Float3Enum, _callback), 0);
    return type;
}

// public Float3Enum(object obj, Uno.Action<float3> callback) :2084
void Marshal__Float3Enum__ctor__fn(Marshal__Float3Enum* __this, uObject* obj, uDelegate* callback)
{
    __this->ctor_(obj, callback);
}

// private void Convert(float4 v) :2090
void Marshal__Float3Enum__Convert_fn(Marshal__Float3Enum* __this, ::g::Uno::Float4* v)
{
    __this->Convert(*v);
}

// public Float3Enum New(object obj, Uno.Action<float3> callback) :2084
void Marshal__Float3Enum__New1_fn(uObject* obj, uDelegate* callback, Marshal__Float3Enum** __retval)
{
    *__retval = Marshal__Float3Enum::New1(obj, callback);
}

// public Float3Enum(object obj, Uno.Action<float3> callback) [instance] :2084
void Marshal__Float3Enum::ctor_(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float3Enum", ".ctor(object,Uno.Action<float3>)");
    _callback = callback;
    ::g::Fuse::Reactive::Marshal::ToFloat4(obj, uDelegate::New(::TYPES[59/*Uno.Action<float4>*/], (void*)Marshal__Float3Enum__Convert_fn, this));
}

// private void Convert(float4 v) [instance] :2090
void Marshal__Float3Enum::Convert(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float3Enum", "Convert(float4)");
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float3__New2(v.X, v.Y, v.Z)));
}

// public Float3Enum New(object obj, Uno.Action<float3> callback) [static] :2084
Marshal__Float3Enum* Marshal__Float3Enum::New1(uObject* obj, uDelegate* callback)
{
    Marshal__Float3Enum* obj1 = (Marshal__Float3Enum*)uNew(Marshal__Float3Enum_typeof());
    obj1->ctor_(obj, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1353)
// --------------------------------------------------------------

// public abstract interface IAsyncArray :1353
// {
uInterfaceType* IAsyncArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IAsyncArray", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Enum", NULL, NULL, offsetof(IAsyncArray, fp_Enum), false, uVoid_typeof(), 2, ::g::Fuse::Reactive::Dispatcher_typeof(), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array())));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1358)
// --------------------------------------------------------------

// public abstract interface IAsyncFunction :1358
// {
uInterfaceType* IAsyncFunction_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IAsyncFunction", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Call", NULL, NULL, offsetof(IAsyncFunction, fp_Call), false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ScriptEventArgs_typeof()),
        new uFunction("Call", NULL, NULL, offsetof(IAsyncFunction, fp_Call1), false, uVoid_typeof(), 1, uObject_typeof()->Array()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2529)
// --------------------------------------------------------------

// internal sealed class InternalPathSubscription :2529
// {
InternalPathSubscription_type* InternalPathSubscription_typeof()
{
    static uSStrong<InternalPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InternalPathSubscription);
    options.TypeSize = sizeof(InternalPathSubscription_type);
    type = (InternalPathSubscription_type*)uClassType::New("Fuse.Reactive.InternalPathSubscription", options);
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))InternalPathSubscription__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))InternalPathSubscription__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))InternalPathSubscription__OnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))InternalPathSubscription__OnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))InternalPathSubscription__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))InternalPathSubscription__Dispose_fn;
    ::STRINGS[32] = uString::Const(".");
    ::STRINGS[33] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[34] = uString::Const("Data binding to '");
    ::STRINGS[35] = uString::Const("': expected single value, got array");
    ::STRINGS[36] = uString::Const("': expected single value, got array of length ");
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(InternalPathSubscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InternalPathSubscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _b), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _failCallback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _key), 0,
        InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _unhandledPath), 0);
    return type;
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :2551
void InternalPathSubscription__ctor__fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    __this->ctor_(b, path, failCallback);
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) :2537
void InternalPathSubscription__ctor_1_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    __this->ctor_1(b, failCallback);
}

// private static string CombineKeyAndPath(string key, string path) :2611
void InternalPathSubscription__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = InternalPathSubscription::CombineKeyAndPath(key, path);
}

// public void Dispose() :2689
void InternalPathSubscription__Dispose_fn(InternalPathSubscription* __this)
{
    __this->Dispose();
}

// private void HandleNewDataContext(object val) :2560
void InternalPathSubscription__HandleNewDataContext_fn(InternalPathSubscription* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Reactive.AsyncObject obj) :2566
void InternalPathSubscription__HandleObject_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::AsyncObject* obj)
{
    __this->HandleObject(obj);
}

// private void HandleObjectCallback(object val) :2571
void InternalPathSubscription__HandleObjectCallback_fn(InternalPathSubscription* __this, uObject* val)
{
    __this->HandleObjectCallback(val);
}

// private void HandlePath(object dc, string path) :2580
void InternalPathSubscription__HandlePath_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :2543
void InternalPathSubscription__Init_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :2551
void InternalPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New1(b, path, failCallback);
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) :2537
void InternalPathSubscription__New2_fn(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New2(b, failCallback);
}

// public void OnAdd(object addedValue) :2644
void InternalPathSubscription__OnAdd_fn(InternalPathSubscription* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :2631
void InternalPathSubscription__OnFailed_fn(InternalPathSubscription* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :2658
void InternalPathSubscription__OnInsertAt_fn(InternalPathSubscription* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(int length) :2617
void InternalPathSubscription__OnNewAll_fn(InternalPathSubscription* __this, int* length)
{
    __this->OnNewAll(*length);
}

// public void OnNewAt(int index, object newValue) :2625
void InternalPathSubscription__OnNewAt_fn(InternalPathSubscription* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemove(object value, int index) :2651
void InternalPathSubscription__OnRemove_fn(InternalPathSubscription* __this, uObject* value, int* index)
{
    __this->OnRemove(value, *index);
}

// public void OnSet(object value) :2637
void InternalPathSubscription__OnSet_fn(InternalPathSubscription* __this, uObject* value)
{
    __this->OnSet(value);
}

// private static string TakeKeyFromPath(string& path) :2666
void InternalPathSubscription__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = InternalPathSubscription::TakeKeyFromPath(path);
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [instance] :2551
void InternalPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,string,Uno.Action)");
    _b = b;
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
    _failCallback = failCallback;
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) [instance] :2537
void InternalPathSubscription::ctor_1(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,Uno.Action)");
    _b = b;
    _failCallback = failCallback;
}

// public void Dispose() [instance] :2689
void InternalPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[33/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[9/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void HandleNewDataContext(object val) [instance] :2560
void InternalPathSubscription::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Reactive.AsyncObject obj) [instance] :2566
void InternalPathSubscription::HandleObject(::g::Fuse::Reactive::AsyncObject* obj)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleObject(Fuse.Reactive.AsyncObject)");
    uPtr(obj)->Tell(_key, ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[56/*Uno.Action<object>*/], (void*)InternalPathSubscription__HandleObjectCallback_fn, this), _failCallback);
}

// private void HandleObjectCallback(object val) [instance] :2571
void InternalPathSubscription::HandleObjectCallback(uObject* val)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleObjectCallback(object)");

    if (_next == NULL)
        return;

    uPtr(_next)->HandleNewDataContext(val);
    uObject* disp = uAs<uObject*>(val, ::TYPES[9/*Uno.IDisposable*/]);

    if (disp != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[9/*Uno.IDisposable*/]));
}

// private void HandlePath(object dc, string path) [instance] :2580
void InternalPathSubscription::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        uObject* obs = uAs<uObject*>(dc, ::TYPES[29/*Fuse.Reactive.IObservable*/]);

        if (obs != NULL)
        {
            _next = InternalPathSubscription::New1(_b, InternalPathSubscription::CombineKeyAndPath(_key, path), _failCallback);

            if (_subscription != NULL)
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[9/*Uno.IDisposable*/]));

            _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[29/*Fuse.Reactive.IObservable*/]), (uObject*)this);
        }
        else if (uIs(dc, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]))
        {
            _next = InternalPathSubscription::New1(_b, path, _failCallback);
            HandleObject(uCast< ::g::Fuse::Reactive::AsyncObject*>(dc, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]));
        }
        else
        {
            uPtr(_failCallback)->InvokeVoid();
            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :2543
void InternalPathSubscription::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Init(object,string)");
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :2644
void InternalPathSubscription::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnFailed(string message) [instance] :2631
void InternalPathSubscription::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :2658
void InternalPathSubscription::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnNewAll(int length) [instance] :2617
void InternalPathSubscription::OnNewAll(int length)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAll(int)");

    if (_isDisposed)
        return;

    if (length > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[36/*"': expected...*/]), uBox<int>(::TYPES[22/*int*/], length))));
}

// public void OnNewAt(int index, object newValue) [instance] :2625
void InternalPathSubscription::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnRemove(object value, int index) [instance] :2651
void InternalPathSubscription::OnRemove(uObject* value, int index)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnRemove(object,int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :2637
void InternalPathSubscription::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private static string CombineKeyAndPath(string key, string path) [static] :2611
uString* InternalPathSubscription::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[32/*"."*/]), path);
    else
        return key;
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [static] :2551
InternalPathSubscription* InternalPathSubscription::New1(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    InternalPathSubscription* obj2 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj2->ctor_(b, path, failCallback);
    return obj2;
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) [static] :2537
InternalPathSubscription* InternalPathSubscription::New2(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    InternalPathSubscription* obj1 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj1->ctor_1(b, failCallback);
    return obj1;
}

// private static string TakeKeyFromPath(string& path) [static] :2666
uString* InternalPathSubscription::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1369)
// --------------------------------------------------------------

// public abstract interface IObservable :1369
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Subscribe", NULL, NULL, offsetof(IObservable, fp_Subscribe), false, ::g::Fuse::Reactive::ISubscription_typeof(), 1, ::g::Fuse::Reactive::IObserver_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1374)
// --------------------------------------------------------------

// public abstract interface IObserver :1374
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("OnAdd", NULL, NULL, offsetof(IObserver, fp_OnAdd), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("OnFailed", NULL, NULL, offsetof(IObserver, fp_OnFailed), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnInsertAt", NULL, NULL, offsetof(IObserver, fp_OnInsertAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnNewAll", NULL, NULL, offsetof(IObserver, fp_OnNewAll), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("OnNewAt", NULL, NULL, offsetof(IObserver, fp_OnNewAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnRemove", NULL, NULL, offsetof(IObserver, fp_OnRemove), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnSet", NULL, NULL, offsetof(IObserver, fp_OnSet), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1364)
// --------------------------------------------------------------

// public abstract interface ISubscription :1364
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("SetExclusive", NULL, NULL, offsetof(ISubscription, fp_SetExclusive), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1397)
// --------------------------------------------------------------

// public partial sealed class JavaScript :1397
// {
// static JavaScript() :1397
static void JavaScript__cctor__fn(uType* __type)
{
    JavaScript::_rootedScripts_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[63/*Uno.Collections.List<Fuse.Reactive.JavaScript>*/]));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)JavaScript__New1_fn;
    type->fp_cctor_ = JavaScript__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))JavaScript__FuseScriptingIModuleEvaluate_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))JavaScript__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))JavaScript__get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))JavaScript__get_FileName_fn;
    ::STRINGS[37] = uString::Const("(no filename)");
    ::TYPES[63] = ::g::Uno::Collections::List_typeof()->MakeType(JavaScript_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[64] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[65] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[66] = ::g::Uno::Delegate_typeof();
    ::TYPES[67] = ::g::Uno::EventHandler_typeof();
    ::TYPES[68] = ::g::Uno::EventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[69] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(JavaScript_typeof());
    ::TYPES[58] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[70] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(JavaScript_type, interface0));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _anyRooted), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _code), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _dataContext), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _evaluatingDataContext), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _file), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _lineNumber), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _ready), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, Unrooted2), 0,
        ::g::Fuse::Reactive::CrossThreadExceptionHandler_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_exceptionHandler_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(JavaScript_typeof()), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_rootedScripts_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New1_fn, 0, true, JavaScript_typeof(), 0),
        new uFunction("add_Unrooted", NULL, (void*)JavaScript__add_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Unrooted", NULL, (void*)JavaScript__remove_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// public generated JavaScript() :1397
void JavaScript__ctor_1_fn(JavaScript* __this)
{
    __this->ctor_1();
}

// public string get_Code() :1504
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1510
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1436
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void EvaluateDataContext() :1471
void JavaScript__EvaluateDataContext_fn(JavaScript* __this)
{
    __this->EvaluateDataContext();
}

// public Uno.UX.FileSource get_File() :1538
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1539
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1578
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1583
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Scripting.IModule.Evaluate(string id, Fuse.Scripting.Context context) :1569
void JavaScript__FuseScriptingIModuleEvaluate_fn(JavaScript* __this, uString* id, ::g::Fuse::Scripting::Context* context, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModule.Evaluate(string,Fuse.Scripting.Context)");
    return *__retval = uPtr(context)->Evaluate((uObject*)__this, id), void();
}

// private int Fuse.Scripting.IModule.get_LineNumberOffset() :1559
void JavaScript__FuseScriptingIModuleget_LineNumberOffset_fn(JavaScript* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModule.get_LineNumberOffset()");

    if (::g::Uno::String::op_Inequality(__this->_code, NULL))
        return *__retval = __this->LineNumber(), void();

    return *__retval = 0, void();
}

// private static void GlobalKeyChanged(string key) :1406
void JavaScript__GlobalKeyChanged_fn(uString* key)
{
    JavaScript::GlobalKeyChanged(key);
}

// private static void HandleWorkerException() :1655
void JavaScript__HandleWorkerException_fn()
{
    JavaScript::HandleWorkerException();
}

// private void Invalidate() :1445
void JavaScript__Invalidate_fn(JavaScript* __this)
{
    __this->Invalidate();
}

// public int get_LineNumber() :1524
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1525
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public generated JavaScript New() :1397
void JavaScript__New1_fn(JavaScript** __retval)
{
    *__retval = JavaScript::New1();
}

// private void OnFileChanged(object sender, Uno.EventArgs args) :1552
void JavaScript__OnFileChanged_fn(JavaScript* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFileChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1418
void JavaScript__OnRooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (!__this->_anyRooted)
    {
        __this->_anyRooted = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[65/*Uno.Action<string>*/], (void*)JavaScript__GlobalKeyChanged_fn));
    }

    JavaScript::StartWorker();
    __this->_ready = true;
    __this->DispatchEvaluate();
    ::g::Uno::Collections::List__Add_fn(uPtr(JavaScript::_rootedScripts()), __this);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1489
void JavaScript__OnUnrooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted(Fuse.Node)");
    bool ret3;

    if (::g::Uno::Delegate::op_Inequality(__this->Unrooted2, NULL))
        uPtr(__this->Unrooted2)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    __this->_ready = false;
    ::g::Uno::Collections::List__Remove_fn(uPtr(JavaScript::_rootedScripts()), __this, &ret3);
    uPtr(__this->ParentNode())->DataContext(NULL);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ResetModuleAndRootedScripts() :1461
void JavaScript__ResetModuleAndRootedScripts_fn(JavaScript* __this)
{
    __this->ResetModuleAndRootedScripts();
}

// private static void ResetRootedScripts() :1401
void JavaScript__ResetRootedScripts_fn()
{
    JavaScript::ResetRootedScripts();
}

// private void SetParentDataContext() :1481
void JavaScript__SetParentDataContext_fn(JavaScript* __this)
{
    __this->SetParentDataContext();
}

// private static void StartWorker() :1643
void JavaScript__StartWorker_fn()
{
    JavaScript::StartWorker();
}

// public generated new void add_Unrooted(Uno.EventHandler value) :1487
void JavaScript__add_Unrooted_fn(JavaScript* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// public generated new void remove_Unrooted(Uno.EventHandler value) :1487
void JavaScript__remove_Unrooted_fn(JavaScript* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

uSStrong< ::g::Fuse::Reactive::CrossThreadExceptionHandler*> JavaScript::_exceptionHandler_;
uSStrong< ::g::Uno::Collections::List*> JavaScript::_rootedScripts_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;

// public generated JavaScript() [instance] :1397
void JavaScript::ctor_1()
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor()");
    _fileName = ::STRINGS[37/*"(no filename)"*/];
    ctor_();
}

// public string get_Code() [instance] :1504
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");

    if (::g::Uno::String::op_Inequality(_code, NULL))
        return _code;

    if (_file != NULL)
        return uPtr(_file)->ReadAllText();

    return NULL;
}

// public void set_Code(string value) [instance] :1510
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(_code, value))
    {
        _code = value;
        Invalidate();
    }
}

// private void DispatchEvaluate() [instance] :1436
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if ((JavaScript::_worker() != NULL) && !_evaluatingDataContext)
    {
        _evaluatingDataContext = true;
        uPtr(JavaScript::_worker())->Dispatch(1, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext_fn, this));
    }
}

// private void EvaluateDataContext() [instance] :1471
void JavaScript::EvaluateDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateDataContext()");
    _evaluatingDataContext = false;

    if (_ready)
    {
        _dataContext = uPtr(JavaScript::_worker())->Wrap(uPtr(uPtr(JavaScript::_worker())->Context())->Evaluate((uObject*)this, _fileName));
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)JavaScript__SetParentDataContext_fn, this));
    }
}

// public Uno.UX.FileSource get_File() [instance] :1538
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :1539
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");

    if (_file != value)
    {
        if (_file != NULL)
            uPtr(_file)->remove_DataChanged(uDelegate::New(::TYPES[70/*Uno.EventHandler<Uno.EventArgs>*/], (void*)JavaScript__OnFileChanged_fn, this));

        _file = value;

        if (_file != NULL)
            uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[70/*Uno.EventHandler<Uno.EventArgs>*/], (void*)JavaScript__OnFileChanged_fn, this));

        Invalidate();
    }
}

// public string get_FileName() [instance] :1578
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");

    if (_file != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :1583
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    _fileName = value;
}

// private void Invalidate() [instance] :1445
void JavaScript::Invalidate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Invalidate()");

    if (IsRooted())
        DispatchEvaluate();
    else
    {
        uString* key = ::g::Uno::UX::Resource::GetGlobalKey(this);

        if (::g::Uno::String::op_Inequality(key, NULL) && (JavaScript::_worker() != NULL))
            uPtr(JavaScript::_worker())->Dispatch(1, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)JavaScript__ResetModuleAndRootedScripts_fn, this));
    }
}

// public int get_LineNumber() [instance] :1524
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return _lineNumber;
}

// public void set_LineNumber(int value) [instance] :1525
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");

    if (_lineNumber != value)
    {
        _lineNumber = value;
        Invalidate();
    }
}

// private void OnFileChanged(object sender, Uno.EventArgs args) [instance] :1552
void JavaScript::OnFileChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnFileChanged(object,Uno.EventArgs)");
    Invalidate();
}

// private void ResetModuleAndRootedScripts() [instance] :1461
void JavaScript::ResetModuleAndRootedScripts()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "ResetModuleAndRootedScripts()");
    uString* key = ::g::Uno::UX::Resource::GetGlobalKey(this);

    if (uPtr(uPtr(JavaScript::_worker())->Context())->ResetModule(key))
        JavaScript::ResetRootedScripts();
}

// private void SetParentDataContext() [instance] :1481
void JavaScript::SetParentDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetParentDataContext()");

    if (_ready)
        uPtr(ParentNode())->DataContext(_dataContext);
}

// public generated new void add_Unrooted(Uno.EventHandler value) [instance] :1487
void JavaScript::add_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "add_Unrooted(Uno.EventHandler)");
    Unrooted2 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Unrooted2, value), ::TYPES[67/*Uno.EventHandler*/]);
}

// public generated new void remove_Unrooted(Uno.EventHandler value) [instance] :1487
void JavaScript::remove_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "remove_Unrooted(Uno.EventHandler)");
    Unrooted2 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Unrooted2, value), ::TYPES[67/*Uno.EventHandler*/]);
}

// private static void GlobalKeyChanged(string key) [static] :1406
void JavaScript::GlobalKeyChanged(uString* key)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "GlobalKeyChanged(string)");
    JavaScript_typeof()->Init();

    if ((::g::Uno::String::op_Inequality(key, NULL) && (JavaScript::_worker() != NULL)) && (uPtr(JavaScript::_worker())->Context() != NULL))
    {
        uPtr(uPtr(JavaScript::_worker())->Context())->ResetModule(key);
        JavaScript::ResetRootedScripts();
    }
}

// private static void HandleWorkerException() [static] :1655
void JavaScript::HandleWorkerException()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "HandleWorkerException()");
    JavaScript_typeof()->Init();

    if (JavaScript::_exceptionHandler() != NULL)
        uPtr(JavaScript::_exceptionHandler())->CheckAndThrow();
}

// public generated JavaScript New() [static] :1397
JavaScript* JavaScript::New1()
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_1();
    return obj2;
}

// private static void ResetRootedScripts() [static] :1401
void JavaScript::ResetRootedScripts()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "ResetRootedScripts()");
    JavaScript_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<JavaScript*> > ret4;

    for (::g::Uno::Collections::List__Enumerator<uStrong<JavaScript*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(JavaScript::_rootedScripts()), &ret4), ret4); enum1.MoveNext(::TYPES[69/*Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator*/]); )
    {
        JavaScript* s = enum1.Current(::TYPES[69/*Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator*/]);
        uPtr(s)->Invalidate();
    }
}

// private static void StartWorker() [static] :1643
void JavaScript::StartWorker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "StartWorker()");
    JavaScript_typeof()->Init();

    if (JavaScript::_worker() == NULL)
    {
        if (JavaScript::_exceptionHandler() == NULL)
            ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)JavaScript__HandleWorkerException_fn), 0);

        JavaScript::_exceptionHandler() = ::g::Fuse::Reactive::CrossThreadExceptionHandler::New1();
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1(JavaScript::_exceptionHandler());
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1984)
// --------------------------------------------------------------

// internal sealed class JSFileSource :1984
// {
::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Reactive.JSFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JSFileSource, _path), 0);
    return type;
}

// public JSFileSource(string path) :1988
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :1988
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :1993
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Reactive.JSFileSource", "OpenRead()");
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :1988
void JSFileSource::ctor_1(uString* path)
{
    uStackFrame __("Fuse.Reactive.JSFileSource", ".ctor(string)");
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :1988
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1999)
// --------------------------------------------------------------

// internal static class Marshal :1999
// {
uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Marshal", options);
    ::STRINGS[38] = uString::Const("Unable to convert ");
    ::STRINGS[39] = uString::Const(" to bool");
    ::STRINGS[40] = uString::Const("Expected number was ");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno");
    ::STRINGS[41] = uString::Const(" to a FileSource");
    ::STRINGS[42] = uString::Const("#");
    ::STRINGS[43] = uString::Const(" to float4");
    ::STRINGS[44] = uString::Const("Marshal.ToType(): Unable to convert ");
    ::STRINGS[45] = uString::Const(" to type ");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[71] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::Float_typeof();
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[57] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[58] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[1] = ::g::Uno::Action1_typeof();
    ::TYPES[61] = ::g::Uno::Float4_typeof();
    ::TYPES[72] = ::g::Uno::Float3_typeof();
    ::TYPES[62] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[73] = ::g::Uno::Float2_typeof();
    ::TYPES[60] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[74] = ::g::Uno::Type_typeof();
    return type;
}

// public static bool ToBool(object obj) :2119
void Marshal__ToBool_fn(uObject* obj, bool* __retval)
{
    *__retval = Marshal::ToBool(obj);
}

// public static Fuse.Drawing.Brush ToBrush(object o) :2112
void Marshal__ToBrush_fn(uObject* o, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Marshal::ToBrush(o);
}

// public static double ToDouble(object o) :2001
void Marshal__ToDouble_fn(uObject* o, double* __retval)
{
    *__retval = Marshal::ToDouble(o);
}

// public static void ToFileSource(object obj, Uno.Action<Uno.UX.FileSource> callback) :2018
void Marshal__ToFileSource_fn(uObject* obj, uDelegate* callback)
{
    Marshal::ToFileSource(obj, callback);
}

// public static float ToFloat(object o) :2033
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static void ToFloat4(object o, Uno.Action<float4> callback) :2058
void Marshal__ToFloat4_fn(uObject* o, uDelegate* callback)
{
    Marshal::ToFloat4(o, callback);
}

// public static int ToInt(object o) :2028
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static void ToType<T>(object o, Uno.Action<T> callback) :2135
void Marshal__ToType_fn(uType* __type, uObject* o, uDelegate* callback)
{
    Marshal::ToType(__type, o, callback);
}

// public static bool ToBool(object obj) [static] :2119
bool Marshal::ToBool(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToBool(object)");

    if (uIs(obj, ::TYPES[17/*bool*/]))
        return uUnbox<bool>(::TYPES[17/*bool*/], obj);
    else if (uIs(obj, ::TYPES[21/*string*/]))
        return ::g::Uno::Bool::Parse(uCast<uString*>(obj, ::TYPES[21/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[38/*"Unable to c...*/], obj), ::STRINGS[39/*" to bool"*/])));
}

// public static Fuse.Drawing.Brush ToBrush(object o) [static] :2112
::g::Fuse::Drawing::Brush* Marshal::ToBrush(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToBrush(object)");
    ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New1();
    Marshal::ToFloat4(o, uDelegate::New(::TYPES[59/*Uno.Action<float4>*/], (void*)::g::Fuse::Drawing::SolidColor__SetColor_fn, b));
    return b;
}

// public static double ToDouble(object o) [static] :2001
double Marshal::ToDouble(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToDouble(object)");

    if (uIs(o, ::TYPES[12/*double*/]))
        return uUnbox<double>(::TYPES[12/*double*/], o);
    else if (uIs(o, ::TYPES[23/*float*/]))
        return (double)uUnbox<float>(::TYPES[23/*float*/], o);
    else if (uIs(o, ::TYPES[22/*int*/]))
        return (double)uUnbox<int>(::TYPES[22/*int*/], o);
    else if (o == NULL)
        return 0.0;
    else if (uIs(o, ::TYPES[21/*string*/]))
        return ::g::Uno::Double::Parse(uCast<uString*>(o, ::TYPES[21/*string*/]));
    else
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::STRINGS[40/*"Expected nu...*/], ::g::Uno::Object::GetType(uPtr(o))), 1, ::STRINGS[13/*"/usr/local/...*/], 2013);
        return 0.0;
    }
}

// public static void ToFileSource(object obj, Uno.Action<Uno.UX.FileSource> callback) [static] :2018
void Marshal::ToFileSource(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFileSource(object,Uno.Action<Uno.UX.FileSource>)");

    if (uIs(obj, ::TYPES[21/*string*/]))
        uPtr(callback)->InvokeVoid(::g::Fuse::Reactive::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[21/*string*/])));
    else if (uIs(obj, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]))
        ::g::Fuse::Reactive::FileSourceTell::New1(uCast< ::g::Fuse::Reactive::AsyncObject*>(obj, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]), callback);
    else
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[38/*"Unable to c...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[41/*" to a FileS...*/]), 1, ::STRINGS[13/*"/usr/local/...*/], 2024);
}

// public static float ToFloat(object o) [static] :2033
float Marshal::ToFloat(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFloat(object)");
    return (float)Marshal::ToDouble(o);
}

// public static void ToFloat4(object o, Uno.Action<float4> callback) [static] :2058
void Marshal::ToFloat4(uObject* o, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFloat4(object,Uno.Action<float4>)");
    uObject* aa = uAs<uObject*>(o, ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]);

    if (aa != NULL)
    {
        ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(aa), ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[51/*Uno.Action<object[]>*/], (void*)Marshal__VectorEnum__Enum_fn, Marshal__VectorEnum::New1(callback)));
        return;
    }

    if (uIs(o, ::TYPES[21/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[21/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), ::STRINGS[42/*"#"*/]))
            uPtr(callback)->InvokeVoid(uCRef(::g::Uno::Color::FromHex(s)));

        return;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[38/*"Unable to c...*/], o), ::STRINGS[43/*" to float4"*/])));
}

// public static int ToInt(object o) [static] :2028
int Marshal::ToInt(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToInt(object)");
    return (int)Marshal::ToDouble(o);
}

// public static void ToType<T>(object o, Uno.Action<T> callback) [static] :2135
void Marshal::ToType(uType* __type, uObject* o, uDelegate* callback)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[1/*Uno.Action`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Reactive.Marshal", "ToType`1(object,Uno.Action<T>)");
    uType* t = __types[0];

    if (o == NULL)
        uPtr(callback)->InvokeVoid(uT(__types[0], U_ALLOCA(__types[0]->ValueSize)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*bool*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[17/*bool*/], Marshal::ToBool(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*float*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[23/*float*/], Marshal::ToFloat(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[12/*double*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[12/*double*/], Marshal::ToDouble(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[22/*int*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox<int>(::TYPES[22/*int*/], Marshal::ToInt(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[21/*string*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], ::g::Uno::Object::ToString(uPtr(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[61/*float4*/]))
        Marshal::ToFloat4(o, uCast<uDelegate*>(callback, ::TYPES[59/*Uno.Action<float4>*/]));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[72/*float3*/]))
        Marshal__Float3Enum::New1(o, uCast<uDelegate*>(callback, ::TYPES[62/*Uno.Action<float3>*/]));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[73/*float2*/]))
        Marshal__Float2Enum::New1(o, uCast<uDelegate*>(callback, ::TYPES[60/*Uno.Action<float2>*/]));
    else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[21/*string*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[21/*string*/]))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[71/*Fuse.Drawing.Brush*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], Marshal::ToBrush(o)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[58/*Uno.UX.FileSource*/]))
        Marshal::ToFileSource(o, uCast<uDelegate*>(callback, ::TYPES[57/*Uno.Action<Uno.UX.FileSource>*/]));
    else
    {
        if (!uIs(o, ::TYPES[21/*string*/]))
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[44/*"Marshal.ToT...*/], o), ::STRINGS[45/*" to type "*/]), __types[0])));
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(1676)
// --------------------------------------------------------------

// public sealed class Match :1676
// {
Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Match__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Match__FuseReactiveIObserverOnRemove_fn;
    ::STRINGS[22] = uString::Const("Not handled: OnAdd");
    ::STRINGS[46] = uString::Const("Not handled: InsertAt");
    ::STRINGS[47] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[26] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[48] = uString::Const("Case already has a Match");
    ::STRINGS[49] = uString::Const("Match can only be used on IObjectContainer (e.g. Panel)");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno");
    ::TYPES[44] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[75] = ::g::Fuse::Reactive::Case_typeof();
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[41] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[47] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[42] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[76] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[77] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[78] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[79] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Match_type, interface0));
    type->SetFields(3,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Match, _container), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New1_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Match() :1676
void Match__ctor_1_fn(Match* __this)
{
    __this->ctor_1();
}

// private void AddElements(Fuse.Reactive.Case c) :1865
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1800
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1801
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1683
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1708
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1723
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1718
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :1728
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;

    if (length_ == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1713
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1740
void Match__FuseReactiveIObserverOnRemove_fn(Match* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1702
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// public int get_Integer() :1794
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1795
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1831
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1676
void Match__New1_fn(Match** __retval)
{
    *__retval = Match::New1();
}

// public double get_Number() :1788
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1789
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1689
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1696
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1806
void Match__OnRooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[47/*Fuse.IObjectContainer*/]);

    if (__this->_container == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[49/*"Match can o...*/], 1, ::STRINGS[13/*"/usr/local/...*/], 1813);

    __this->Invalidate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1819
void Match__OnUnrooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted(Fuse.Node)");
    __this->RemoveElements();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveElements() :1855
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1844
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1782
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1783
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1751
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1752
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1676
void Match::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[44/*Uno.Collections.List<Fuse.IDataContext>*/]));
    ctor_();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1865
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Uno::UX::Factory* ret6;

    if (c != NULL)

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[46/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[45/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret6), ret6);
            uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[41/*Fuse.IDataContext*/]);

            if (elm != NULL)
            {
                ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(_container), ::TYPES[47/*Fuse.IObjectContainer*/]), elm);
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1800
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs(Value(), ::TYPES[17/*bool*/]) ? uUnbox<bool>(::TYPES[17/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1801
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[17/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1683
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind4 = _cases;
    return (ind4 != NULL) ? ind4 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[78/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1794
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs(Value(), ::TYPES[22/*int*/]) ? uUnbox<int>(::TYPES[22/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1795
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[22/*int*/], value));
}

// internal void Invalidate() [instance] :1831
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (_container == NULL)
        return;

    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();
        AddElements(newCase);
    }
}

// public double get_Number() [instance] :1788
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs(Value(), ::TYPES[12/*double*/]) ? uUnbox<double>(::TYPES[12/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1789
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[12/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1689
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[48/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1696
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1855
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret7;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[42/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(_container), ::TYPES[47/*Fuse.IObjectContainer*/]), e);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1844
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret8;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[75/*Fuse.Reactive.Case*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[76/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret8), ret8);

        if (::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1782
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[21/*string*/]);
}

// public void set_String(string value) [instance] :1783
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1751
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1752
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[9/*Uno.IDisposable*/]));
            _subscription = NULL;
        }

        if (uIs(_value, ::TYPES[29/*Fuse.Reactive.IObservable*/]))
        {
            uObject* obs = (uObject*)_value;
            _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[29/*Fuse.Reactive.IObservable*/]), (uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1676
Match* Match::New1()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_1();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2225)
// --------------------------------------------------------------

// internal sealed class Observable :2225
// {
Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Observable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Observable__GetHashCode_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__Subscribe_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Dispose_fn;
    type->interface2.fp_Enum = (void(*)(uObject*, ::g::Fuse::Reactive::Dispatcher*, uDelegate*))Observable__Enum_fn;
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[80] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IAsyncArray_typeof(), offsetof(Observable_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::Observable, Object), 0,
        ::g::Fuse::Reactive::Dispatcher_typeof(), offsetof(::g::Fuse::Reactive::Observable, Thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::Observable, Worker), 0);
    return type;
}

// public Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.Dispatcher thread) :2231
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread)
{
    __this->ctor_(worker, obj, thread);
}

// public void Dispose() :2255
void Observable__Dispose_fn(Observable* __this)
{
    __this->Dispose();
}

// public void Enum(Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) :2260
void Observable__Enum_fn(Observable* __this, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    __this->Enum(thread, callback);
}

// public override sealed bool Equals(object obj) :2243
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "Equals(object)");
    Observable* obs = uAs<Observable*>(obj, Observable_typeof());

    if (obs == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->Object)->Equals2(uPtr(obs)->Object), void();
}

// public override sealed int GetHashCode() :2250
void Observable__GetHashCode_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "GetHashCode()");
    return *__retval = uPtr(__this->Object)->GetHashCode(), void();
}

// public Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.Dispatcher thread) :2231
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, thread);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :2238
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.Dispatcher thread) [instance] :2231
void Observable::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Fuse.Reactive.Dispatcher)");
    Worker = worker;
    Object = obj;
    Thread = thread;
}

// public void Dispose() [instance] :2255
void Observable::Dispose()
{
}

// public void Enum(Fuse.Reactive.Dispatcher thread, Uno.Action<object[]> callback) [instance] :2260
void Observable::Enum(::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Observable", "Enum(Fuse.Reactive.Dispatcher,Uno.Action<object[]>)");
    uPtr(Worker)->Dispatch(1, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::EnumObservable__Run_fn, ::g::Fuse::Reactive::EnumObservable::New1(Worker, Object, Thread, callback)));
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :2238
uObject* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return (uObject*)::g::Fuse::Reactive::ObservableSubscription::New1(Worker, Object, observer, Thread);
}

// public Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.Dispatcher thread) [static] :2231
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::Dispatcher* thread)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_(worker, obj, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2283)
// --------------------------------------------------------------

// internal sealed class ObservableSubscription :2283
// {
ObservableSubscription_type* ObservableSubscription_typeof()
{
    static uSStrong<ObservableSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableSubscription);
    options.TypeSize = sizeof(ObservableSubscription_type);
    type = (ObservableSubscription_type*)uClassType::New("Fuse.Reactive.ObservableSubscription", options);
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))ObservableSubscription__SetExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ObservableSubscription__Dispose_fn;
    ::STRINGS[50] = uString::Const("set");
    ::STRINGS[51] = uString::Const("newAt");
    ::STRINGS[52] = uString::Const("newAll");
    ::STRINGS[53] = uString::Const("add");
    ::STRINGS[54] = uString::Const("remove");
    ::STRINGS[55] = uString::Const("insertAt");
    ::STRINGS[56] = uString::Const("failed");
    ::STRINGS[57] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[58] = uString::Const("dispose");
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[81] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[82] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(2, ::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[83] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[84] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[85] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[86] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(2, uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[87] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[88] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[65] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[11] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(ObservableSubscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ObservableSubscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _callback), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observable), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observer), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _subscriberProxy), 0,
        ::g::Fuse::Reactive::Dispatcher_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _worker), 0);
    return type;
}

// public ObservableSubscription(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Fuse.Reactive.Dispatcher thread) :2294
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread)
{
    __this->ctor_(worker, obj, observer, thread);
}

// public void Dispose() :2349
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this)
{
    __this->Dispose();
}

// public ObservableSubscription New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Fuse.Reactive.Dispatcher thread) :2294
void ObservableSubscription__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread, ObservableSubscription** __retval)
{
    *__retval = ObservableSubscription::New1(worker, obj, observer, thread);
}

// private object ObserveChange(object[] args) :2314
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// internal Fuse.Scripting.Object get_Proxy() :2292
void ObservableSubscription__get_Proxy_fn(ObservableSubscription* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Proxy();
}

// public void SetExclusive(object newValue) :2304
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// private void Subscribe() :2309
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :2354
void ObservableSubscription__Unsubscribe_fn(ObservableSubscription* __this)
{
    __this->Unsubscribe();
}

// public ObservableSubscription(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Fuse.Reactive.Dispatcher thread) [instance] :2294
void ObservableSubscription::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Fuse.Reactive.IObserver,Fuse.Reactive.Dispatcher)");
    _worker = worker;
    _observable = obj;
    _observer = observer;
    _thread = thread;
    _callback = uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)ObservableSubscription__ObserveChange_fn, this);
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)ObservableSubscription__Subscribe_fn, this));
}

// public void Dispose() [instance] :2349
void ObservableSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Dispose()");
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)ObservableSubscription__Unsubscribe_fn, this));
}

// private object ObserveChange(object[] args) [instance] :2314
uObject* ObservableSubscription::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "ObserveChange(object[])");
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[21/*string*/]);
    uObject* arg = uPtr(_worker)->Wrap(args->Strong<uObject*>(2));

    if (!uPtr(_worker)->IsOnWorkerThread())
    {
        if (::g::Uno::String::op_Equality(op, ::STRINGS[50/*"set"*/]))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), arg);
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[51/*"newAt"*/]))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), ::g::Fuse::Reactive::Marshal::ToInt(arg), uPtr(_worker)->Wrap(uPtr(args)->Strong<uObject*>(3)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[52/*"newAll"*/]))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), ::g::Fuse::Reactive::Marshal::ToInt(arg));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[53/*"add"*/]))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), arg);
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[54/*"remove"*/]))
            ::g::Fuse::Reactive::IObserver::OnRemove(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), arg, ::g::Fuse::Reactive::Marshal::ToInt(args->Strong<uObject*>(3)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[55/*"insertAt"*/]))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), ::g::Fuse::Reactive::Marshal::ToInt(arg), uPtr(_worker)->Wrap(args->Strong<uObject*>(3)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[56/*"failed"*/]))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[21/*string*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[57/*"Unhandled o...*/], op)));
    }
    else
    {
        if (::g::Uno::String::op_Equality(op, ::STRINGS[50/*"set"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[81/*Fuse.Reactive.Dispatcher.Dispatch1<object>*/], uDelegate::New(::TYPES[56/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnSet)), arg);
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[51/*"newAt"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch2_fn(uPtr(_thread), ::TYPES[82/*Fuse.Reactive.Dispatcher.Dispatch2<int, object>*/], uDelegate::New(::TYPES[83/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAt)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)), uPtr(_worker)->Wrap(uPtr(args)->Strong<uObject*>(3)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[52/*"newAll"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[84/*Fuse.Reactive.Dispatcher.Dispatch1<int>*/], uDelegate::New(::TYPES[85/*Uno.Action<int>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAll)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[53/*"add"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[81/*Fuse.Reactive.Dispatcher.Dispatch1<object>*/], uDelegate::New(::TYPES[56/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnAdd)), arg);
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[54/*"remove"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch2_fn(uPtr(_thread), ::TYPES[86/*Fuse.Reactive.Dispatcher.Dispatch2<object, int>*/], uDelegate::New(::TYPES[87/*Uno.Action<object, int>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnRemove)), arg, uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(args->Strong<uObject*>(3))));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[55/*"insertAt"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch2_fn(uPtr(_thread), ::TYPES[82/*Fuse.Reactive.Dispatcher.Dispatch2<int, object>*/], uDelegate::New(::TYPES[83/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnInsertAt)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)), uPtr(_worker)->Wrap(args->Strong<uObject*>(3)));
        else if (::g::Uno::String::op_Equality(op, ::STRINGS[56/*"failed"*/]))
            ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[88/*Fuse.Reactive.Dispatcher.Dispatch1<string>*/], uDelegate::New(::TYPES[65/*Uno.Action<string>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnFailed)), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[21/*string*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[57/*"Unhandled o...*/], op)));
    }

    return NULL;
}

// internal Fuse.Scripting.Object get_Proxy() [instance] :2292
::g::Fuse::Scripting::Object* ObservableSubscription::Proxy()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "get_Proxy()");
    return _subscriberProxy;
}

// public void SetExclusive(object newValue) [instance] :2304
void ObservableSubscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "SetExclusive(object)");
    uPtr(_worker)->Dispatch(0, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Reactive::SubscriptionSetExclusive__Run_fn, ::g::Fuse::Reactive::SubscriptionSetExclusive::New1(this, uPtr(_worker)->Unwrap(newValue))));
}

// private void Subscribe() [instance] :2309
void ObservableSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Subscribe()");
    _subscriberProxy = uAs< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(_worker)->SubscriberProxy())->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, (::g::Fuse::Scripting::Object*)_observable, (uDelegate*)_callback)), ::TYPES[4/*Fuse.Scripting.Object*/]);
}

// private void Unsubscribe() [instance] :2354
void ObservableSubscription::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Unsubscribe()");
    uPtr(_subscriberProxy)->CallMethod(::STRINGS[58/*"dispose"*/], uArray::New(::TYPES[16/*object[]*/], 0));
}

// public ObservableSubscription New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Fuse.Reactive.Dispatcher thread) [static] :2294
ObservableSubscription* ObservableSubscription::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, ::g::Fuse::Reactive::Dispatcher* thread)
{
    ObservableSubscription* obj1 = (ObservableSubscription*)uNew(ObservableSubscription_typeof());
    obj1->ctor_(worker, obj, observer, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2716)
// --------------------------------------------------------------

// public sealed class ScriptEventArgs :2716
// {
uType* ScriptEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ScriptEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ScriptEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, _Args), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, _IsHandled), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, _Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, _Sender), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Args", NULL, (void*)ScriptEventArgs__get_Args_fn, 0, false, ::g::Fuse::Scripting::IScriptEvent_typeof(), 0),
        new uFunction("get_IsHandled", NULL, (void*)ScriptEventArgs__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)ScriptEventArgs__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Name", NULL, (void*)ScriptEventArgs__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ScriptEventArgs__New2_fn, 0, true, ScriptEventArgs_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Scripting::IScriptEvent_typeof()),
        new uFunction("get_Sender", NULL, (void*)ScriptEventArgs__get_Sender_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :2723
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this, ::g::Fuse::Node* sender, uString* name, uObject* args)
{
    __this->ctor_1(sender, name, args);
}

// public generated Fuse.Scripting.IScriptEvent get_Args() :2721
void ScriptEventArgs__get_Args_fn(ScriptEventArgs* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Fuse.Scripting.IScriptEvent value) :2721
void ScriptEventArgs__set_Args_fn(ScriptEventArgs* __this, uObject* value)
{
    __this->Args(value);
}

// public generated bool get_IsHandled() :2718
void ScriptEventArgs__get_IsHandled_fn(ScriptEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :2718
void ScriptEventArgs__set_IsHandled_fn(ScriptEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public generated string get_Name() :2720
void ScriptEventArgs__get_Name_fn(ScriptEventArgs* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :2720
void ScriptEventArgs__set_Name_fn(ScriptEventArgs* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :2723
void ScriptEventArgs__New2_fn(::g::Fuse::Node* sender, uString* name, uObject* args, ScriptEventArgs** __retval)
{
    *__retval = ScriptEventArgs::New2(sender, name, args);
}

// public generated Fuse.Node get_Sender() :2719
void ScriptEventArgs__get_Sender_fn(ScriptEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Sender();
}

// private generated void set_Sender(Fuse.Node value) :2719
void ScriptEventArgs__set_Sender_fn(ScriptEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Sender(value);
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [instance] :2723
void ScriptEventArgs::ctor_1(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", ".ctor(Fuse.Node,string,Fuse.Scripting.IScriptEvent)");
    ctor_();
    IsHandled(false);
    Sender(sender);
    Name(name);
    Args(args);
}

// public generated Fuse.Scripting.IScriptEvent get_Args() [instance] :2721
uObject* ScriptEventArgs::Args()
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "get_Args()");
    return _Args;
}

// private generated void set_Args(Fuse.Scripting.IScriptEvent value) [instance] :2721
void ScriptEventArgs::Args(uObject* value)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "set_Args(Fuse.Scripting.IScriptEvent)");
    _Args = value;
}

// public generated bool get_IsHandled() [instance] :2718
bool ScriptEventArgs::IsHandled()
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "get_IsHandled()");
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :2718
void ScriptEventArgs::IsHandled(bool value)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "set_IsHandled(bool)");
    _IsHandled = value;
}

// public generated string get_Name() [instance] :2720
uString* ScriptEventArgs::Name()
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "get_Name()");
    return _Name;
}

// private generated void set_Name(string value) [instance] :2720
void ScriptEventArgs::Name(uString* value)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "set_Name(string)");
    _Name = value;
}

// public generated Fuse.Node get_Sender() [instance] :2719
::g::Fuse::Node* ScriptEventArgs::Sender()
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "get_Sender()");
    return _Sender;
}

// private generated void set_Sender(Fuse.Node value) [instance] :2719
void ScriptEventArgs::Sender(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", "set_Sender(Fuse.Node)");
    _Sender = value;
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [static] :2723
ScriptEventArgs* ScriptEventArgs::New2(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    ScriptEventArgs* obj1 = (ScriptEventArgs*)uNew(ScriptEventArgs_typeof());
    obj1->ctor_1(sender, name, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2165)
// --------------------------------------------------------------

// public sealed class Select :2165
// {
::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Select__New1_fn;
    type->fp_OnNodeAdded = (void(*)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*))Select__OnNodeAdded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Select__OnRooted_fn;
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[89] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[90] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    type->SetFields(15,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Select, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)Select__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Select__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Select__New1_fn, 0, true, Select_typeof(), 0));
    return type;
}

// public generated Select() :2165
void Select__ctor_2_fn(Select* __this)
{
    __this->ctor_2();
}

// public object get_Data() :2170
void Select__get_Data_fn(Select* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :2171
void Select__set_Data_fn(Select* __this, uObject* value)
{
    __this->Data(value);
}

// private bool get_IsOn() :2199
void Select__get_IsOn_fn(Select* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated Select New() :2165
void Select__New1_fn(Select** __retval)
{
    *__retval = Select::New1();
}

// private void OnChanged() :2181
void Select__OnChanged_fn(Select* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNodeAdded(Fuse.Node n) :2209
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Select", "OnNodeAdded(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnNodeAdded_fn(__this, n);
    __this->OnChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2201
void Select__OnRooted_fn(Select* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Select", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->UpdateNodes();

    if (__this->IsOn())
        __this->BypassActivate();
}

// private void UpdateNodes() :2193
void Select__UpdateNodes_fn(Select* __this)
{
    __this->UpdateNodes();
}

// public generated Select() [instance] :2165
void Select::ctor_2()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_1();
}

// public object get_Data() [instance] :2170
uObject* Select::Data()
{
    uStackFrame __("Fuse.Reactive.Select", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :2171
void Select::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Select", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private bool get_IsOn() [instance] :2199
bool Select::IsOn()
{
    uStackFrame __("Fuse.Reactive.Select", "get_IsOn()");
    return _data != NULL;
}

// private void OnChanged() [instance] :2181
void Select::OnChanged()
{
    uStackFrame __("Fuse.Reactive.Select", "OnChanged()");
    UpdateNodes();

    if (IsRooted())
    {
        if (IsOn())
            Activate(NULL);
        else
            Deactivate();
    }
}

// private void UpdateNodes() [instance] :2193
void Select::UpdateNodes()
{
    uStackFrame __("Fuse.Reactive.Select", "UpdateNodes()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[90/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->DataContext(_data);
    }
}

// public generated Select New() [static] :2165
Select* Select::New1()
{
    Select* obj2 = (Select*)uNew(Select_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2266)
// --------------------------------------------------------------

// internal sealed class SubscriptionSetExclusive :2266
// {
uType* SubscriptionSetExclusive_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SubscriptionSetExclusive);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.SubscriptionSetExclusive", options);
    ::STRINGS[59] = uString::Const("setExclusive");
    ::TYPES[91] = ::g::Fuse::Reactive::ObservableSubscription_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::SubscriptionSetExclusive, _newValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::SubscriptionSetExclusive, _subscription), 0);
    return type;
}

// public SubscriptionSetExclusive(Fuse.Reactive.ObservableSubscription subscription, object newValue) :2271
void SubscriptionSetExclusive__ctor__fn(SubscriptionSetExclusive* __this, ::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue)
{
    __this->ctor_(subscription, newValue);
}

// public SubscriptionSetExclusive New(Fuse.Reactive.ObservableSubscription subscription, object newValue) :2271
void SubscriptionSetExclusive__New1_fn(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue, SubscriptionSetExclusive** __retval)
{
    *__retval = SubscriptionSetExclusive::New1(subscription, newValue);
}

// public void Run() :2277
void SubscriptionSetExclusive__Run_fn(SubscriptionSetExclusive* __this)
{
    __this->Run();
}

// public SubscriptionSetExclusive(Fuse.Reactive.ObservableSubscription subscription, object newValue) [instance] :2271
void SubscriptionSetExclusive::ctor_(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.SubscriptionSetExclusive", ".ctor(Fuse.Reactive.ObservableSubscription,object)");
    _subscription = subscription;
    _newValue = newValue;
}

// public void Run() [instance] :2277
void SubscriptionSetExclusive::Run()
{
    uStackFrame __("Fuse.Reactive.SubscriptionSetExclusive", "Run()");
    uPtr(uPtr(_subscription)->Proxy())->CallMethod(::STRINGS[59/*"setExclusive"*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uObject*)_newValue));
}

// public SubscriptionSetExclusive New(Fuse.Reactive.ObservableSubscription subscription, object newValue) [static] :2271
SubscriptionSetExclusive* SubscriptionSetExclusive::New1(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue)
{
    SubscriptionSetExclusive* obj1 = (SubscriptionSetExclusive*)uNew(SubscriptionSetExclusive_typeof());
    obj1->ctor_(subscription, newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(332)
// -------------------------------------------------------------

// internal sealed class TellObject :332
// {
uType* TellObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TellObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.TellObject", options);
    ::TYPES[13] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[81] = ::g::Fuse::Reactive::Dispatcher_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[66] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Reactive::TellObject, _callback), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _failCallback), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _key), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _object), 0,
        ::g::Fuse::Reactive::Dispatcher_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _worker), 0);
    return type;
}

// public TellObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :341
void TellObject__ctor__fn(TellObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback)
{
    __this->ctor_(worker, obj, key, thread, callback, failCallback);
}

// public TellObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :341
void TellObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback, TellObject** __retval)
{
    *__retval = TellObject::New1(worker, obj, key, thread, callback, failCallback);
}

// public void Run() :351
void TellObject__Run_fn(TellObject* __this)
{
    __this->Run();
}

// public TellObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [instance] :341
void TellObject::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.TellObject", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,string,Fuse.Reactive.Dispatcher,Uno.Action<object>,Uno.Action)");
    _worker = worker;
    _object = obj;
    _key = key;
    _thread = thread;
    _callback = callback;
    _failCallback = failCallback;
}

// public void Run() [instance] :351
void TellObject::Run()
{
    uStackFrame __("Fuse.Reactive.TellObject", "Run()");
    ::g::Fuse::Scripting::Object* ind1 = _object;
    ::g::Fuse::Scripting::Object* obj = (ind1 != NULL) ? ind1 : (::g::Fuse::Scripting::Object*)uPtr(_worker)->GlobalObject();

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* res = uPtr(obj)->Item(_key);
        uObject* wrap = uPtr(_worker)->Wrap(res);

        if (!uPtr(_worker)->IsOnWorkerThread())
            uPtr(_callback)->InvokeVoid(wrap);
        else
            ::g::Fuse::Reactive::Dispatcher__Dispatch1_fn(uPtr(_thread), ::TYPES[81/*Fuse.Reactive.Dispatcher.Dispatch1<object>*/], _callback, wrap);
    }
    else if (::g::Uno::Delegate::op_Inequality(_failCallback, NULL))
    {
        if (!uPtr(_worker)->IsOnWorkerThread())
            uPtr(_failCallback)->InvokeVoid();
        else
            uPtr(_thread)->Dispatch(_failCallback);
    }
}

// public TellObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Fuse.Reactive.Dispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [static] :341
TellObject* TellObject::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback)
{
    TellObject* obj2 = (TellObject*)uNew(TellObject_typeof());
    obj2->ctor_(worker, obj, key, thread, callback, failCallback);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2743)
// --------------------------------------------------------------

// internal sealed class ThreadWorker :2743
// {
// static ThreadWorker() :2846
static void ThreadWorker__cctor__fn(uType* __type)
{
    ThreadWorker::Register(::STRINGS[60/*"FuseJS/Envi...*/], (uObject*)::g::Fuse::Reactive::FuseJS::Environment::New2());
    ThreadWorker::Register(::STRINGS[61/*"FuseJS/Timer"*/], (uObject*)::g::Fuse::Reactive::FuseJS::TimerModule::New2());
    ThreadWorker::Register(::STRINGS[62/*"FuseJS/Base64"*/], (uObject*)::g::Fuse::Reactive::FuseJS::Base64::New2());
    ThreadWorker::Register(::STRINGS[63/*"FuseJS/Vibr...*/], ::g::Fuse::Reactive::FuseJS::Vibration::CreateModule());
    ThreadWorker::Register(::STRINGS[64/*"FuseJS/Email"*/], ::g::Fuse::Reactive::FuseJS::Email::CreateModule());
    ThreadWorker::Register(::STRINGS[65/*"FuseJS/Maps"*/], ::g::Fuse::Reactive::FuseJS::Maps::CreateModule());
    ThreadWorker::Register(::STRINGS[66/*"FuseJS/Life...*/], ::g::Fuse::Reactive::FuseJS::Lifecycle::CreateModule());
    ThreadWorker::Register(::STRINGS[67/*"FuseJS/Inte...*/], ::g::Fuse::Reactive::FuseJS::InterApp::CreateModule());
    ThreadWorker::Register(::STRINGS[68/*"FuseJS/Phone"*/], ::g::Fuse::Reactive::FuseJS::Phone::CreateModule());
    ThreadWorker::Register(::STRINGS[69/*"FuseJS/File...*/], ::g::Fuse::Reactive::FuseJS::FileReaderImpl::CreateModule());
    ThreadWorker::Register(::STRINGS[70/*"FuseJS/Subs...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::SubscriberProxy3e27580a())));
    ThreadWorker::Register(::STRINGS[71/*"FuseJS/Obse...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Observablea31dc8d3())));
    ThreadWorker::Register(::STRINGS[72/*"FuseJS/Fetch"*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Fetchd3f04bf6())));
    ThreadWorker::Register(::STRINGS[73/*"FuseJS/Fetc...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::FetchJson6e722c6e())));
    ThreadWorker::Register(::STRINGS[74/*"FuseJS/Camera"*/], ::g::Fuse::Reactive::FuseJS::Camera::CreateModule());
    ThreadWorker::Register(::STRINGS[75/*"FuseJS/Stor...*/], ::g::Fuse::Reactive::FuseJS::Storage::CreateModule());
    ThreadWorker::Register(::STRINGS[76/*"FuseJS/Glob...*/], ::g::Fuse::Reactive::FuseJS::Globals::CreateModule());
    ThreadWorker::Register(::STRINGS[77/*"FuseJS/User...*/], ::g::Fuse::Reactive::FuseJS::UserEvents::CreateModule());
    ThreadWorker::Register(::STRINGS[78/*"FuseJS"*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::FuseJSc231c1cc())));
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Dispatch = (void(*)(uObject*, int*, uDelegate*))ThreadWorker__Dispatch_fn;
    type->interface2.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    ::STRINGS[60] = uString::Const("FuseJS/Environment");
    ::STRINGS[61] = uString::Const("FuseJS/Timer");
    ::STRINGS[62] = uString::Const("FuseJS/Base64");
    ::STRINGS[63] = uString::Const("FuseJS/Vibration");
    ::STRINGS[64] = uString::Const("FuseJS/Email");
    ::STRINGS[65] = uString::Const("FuseJS/Maps");
    ::STRINGS[66] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[67] = uString::Const("FuseJS/InterApp");
    ::STRINGS[68] = uString::Const("FuseJS/Phone");
    ::STRINGS[69] = uString::Const("FuseJS/FileReaderImpl");
    ::STRINGS[70] = uString::Const("FuseJS/SubscriberProxy");
    ::STRINGS[71] = uString::Const("FuseJS/Observable");
    ::STRINGS[72] = uString::Const("FuseJS/Fetch");
    ::STRINGS[73] = uString::Const("FuseJS/FetchJson");
    ::STRINGS[74] = uString::Const("FuseJS/Camera");
    ::STRINGS[75] = uString::Const("FuseJS/Storage");
    ::STRINGS[76] = uString::Const("FuseJS/Globals");
    ::STRINGS[77] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[78] = uString::Const("FuseJS");
    ::STRINGS[79] = uString::Const("browser-Window");
    ::STRINGS[80] = uString::Const("window-Timers");
    ::STRINGS[81] = uString::Const("window-EventTarget");
    ::STRINGS[82] = uString::Const("window-Base64");
    ::STRINGS[83] = uString::Const("window-File");
    ::STRINGS[84] = uString::Const("window-XMLHttpRequest");
    ::STRINGS[85] = uString::Const("window-fetch");
    ::STRINGS[86] = uString::Const("window-localStorage");
    ::STRINGS[87] = uString::Const("es6-promise");
    ::STRINGS[88] = uString::Const("require");
    ::STRINGS[89] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[90] = uString::Const("Could not create script context");
    ::STRINGS[91] = uString::Const("Unhandled type in ThreadWorker.Unwrap: ");
    ::STRINGS[92] = uString::Const("Unhandled type in ThreadWorker.Wrap: ");
    ::TYPES[64] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[92] = ::g::FuseReactive_bundle_typeof();
    ::TYPES[93] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[94] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[95] = ::g::Uno::Application_typeof();
    ::TYPES[67] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[96] = ::g::Fuse::Scripting::IDispatcher_typeof();
    ::TYPES[66] = ::g::Uno::Delegate_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[97] = ::g::Fuse::Reactive::AsyncArray_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::Float_typeof();
    ::TYPES[98] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[99] = ::g::Uno::UInt_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Fuse::Scripting::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Reactive::CrossThreadExceptionHandler_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _jsContextReady), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _mutex), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _suspendCount), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _suspendMutex), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _working), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::Function_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_observable_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::Function_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_subscriberProxy_, uFieldFlagsStatic);
    return type;
}

// public ThreadWorker(Fuse.Reactive.CrossThreadExceptionHandler exceptionHandler) :2755
void ThreadWorker__ctor__fn(ThreadWorker* __this, ::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler)
{
    __this->ctor_(exceptionHandler);
}

// private bool AttemptSuspend() :2781
void ThreadWorker__AttemptSuspend_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->AttemptSuspend();
}

// private static void BeginThread(Uno.Action a) :3099
void ThreadWorker__BeginThread_fn(uDelegate* a)
{
    ThreadWorker::BeginThread(a);
}

// public Fuse.Scripting.Context get_Context() :2836
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IDispatcher ownerThread) :2747
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(ownerThread);
}

// private Uno.Action Dequeue() :3084
void ThreadWorker__Dequeue_fn(ThreadWorker* __this, uDelegate** __retval)
{
    *__retval = __this->Dequeue();
}

// public void Dispatch(Fuse.Scripting.TaskPriority priority, Uno.Action action) :3048
void ThreadWorker__Dispatch_fn(ThreadWorker* __this, int* priority, uDelegate* action)
{
    __this->Dispatch(*priority, action);
}

// public void Dispose() :2827
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// public void ForceSuspend() :2799
void ThreadWorker__ForceSuspend_fn(ThreadWorker* __this)
{
    __this->ForceSuspend();
}

// public Fuse.Scripting.Object get_GlobalObject() :2837
void ThreadWorker__get_GlobalObject_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GlobalObject();
}

// private void InitBrowserPolyfill() :2891
void ThreadWorker__InitBrowserPolyfill_fn(ThreadWorker* __this)
{
    __this->InitBrowserPolyfill();
}

// private void InitBuiltInObjects() :2869
void ThreadWorker__InitBuiltInObjects_fn(ThreadWorker* __this)
{
    __this->InitBuiltInObjects();
}

// private void InitFuseJS() :2883
void ThreadWorker__InitFuseJS_fn(ThreadWorker* __this)
{
    __this->InitFuseJS();
}

// public void Invoke(Uno.Action action) :3043
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// internal bool get_IsOnWorkerThread() :2771
void ThreadWorker__get_IsOnWorkerThread_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->IsOnWorkerThread();
}

// public ThreadWorker New(Fuse.Reactive.CrossThreadExceptionHandler exceptionHandler) :2755
void ThreadWorker__New1_fn(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler, ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1(exceptionHandler);
}

// private void OnClosing(object sender, Uno.EventArgs args) :2822
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private static void Register(string moduleId, Fuse.Scripting.IModule module) :2764
void ThreadWorker__Register_fn(uString* moduleId, uObject* module)
{
    ThreadWorker::Register(moduleId, module);
}

// private object Require(object[] args) :2877
void ThreadWorker__Require_fn(ThreadWorker* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public void Resume() :2814
void ThreadWorker__Resume_fn(ThreadWorker* __this)
{
    __this->Resume();
}

// private void Run() :2904
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// public Fuse.Scripting.Function get_SubscriberProxy() :2842
void ThreadWorker__get_SubscriberProxy_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->SubscriberProxy();
}

// internal object Unwrap(object dc) :2995
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// internal object Wrap(object obj) :2962
void ThreadWorker__Wrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Wrap(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Scripting::Function*> ThreadWorker::_observable_;
uSStrong< ::g::Fuse::Scripting::Function*> ThreadWorker::_subscriberProxy_;

// public ThreadWorker(Fuse.Reactive.CrossThreadExceptionHandler exceptionHandler) [instance] :2755
void ThreadWorker::ctor_(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor(Fuse.Reactive.CrossThreadExceptionHandler)");
    _suspendMutex = ::g::Uno::Threading::Mutex::Create();
    _working = true;
    _mutex = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[93/*Uno.Collections.List<Uno.Action>*/]));
    _exceptionHandler = exceptionHandler;
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[67/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    ThreadWorker::BeginThread(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
}

// private bool AttemptSuspend() [instance] :2781
bool ThreadWorker::AttemptSuspend()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "AttemptSuspend()");
    uPtr(_suspendMutex)->Lock();

    if (_jsContextReady && !_working)
    {
        _suspendCount++;
        uPtr(_suspendMutex)->Unlock();
        return true;
    }
    else
    {
        uPtr(_suspendMutex)->Unlock();
        return false;
    }
}

// public Fuse.Scripting.Context get_Context() [instance] :2836
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context();
}

// private Uno.Action Dequeue() [instance] :3084
uDelegate* ThreadWorker::Dequeue()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dequeue()");
    uDelegate* ret2;
    uPtr(_mutex)->Lock();

    if (uPtr(_queue)->Count() == 0)
    {
        uPtr(_mutex)->Unlock();
        return NULL;
    }

    uDelegate* res = (::g::Uno::Collections::List__get_Item_fn(uPtr(_queue), uCRef<int>(0), &ret2), ret2);
    uPtr(_queue)->RemoveAt(0);
    uPtr(_mutex)->Unlock();
    return res;
}

// public void Dispatch(Fuse.Scripting.TaskPriority priority, Uno.Action action) [instance] :3048
void ThreadWorker::Dispatch(int priority, uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispatch(Fuse.Scripting.TaskPriority,Uno.Action)");

    if (priority == 2)
    {
        ForceSuspend();

        try
        {
            uPtr(action)->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            Resume();
            throw __t;
        }
        // finally
        Resume();
        return;
    }
    else if (priority == 1)
    {
        if (AttemptSuspend())
        {
            try
            {
                uPtr(action)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                Resume();
                throw __t;
            }
            // finally
            Resume();
            return;
        }
    }

    uPtr(_mutex)->Lock();
    ::g::Uno::Collections::List__Add_fn(uPtr(_queue), action);
    uPtr(_mutex)->Unlock();
}

// public void Dispose() [instance] :2827
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[67/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public void ForceSuspend() [instance] :2799
void ThreadWorker::ForceSuspend()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ForceSuspend()");

    while (true)
    {
        uPtr(_suspendMutex)->Lock();

        if (_jsContextReady && !_working)
        {
            _suspendCount++;
            uPtr(_suspendMutex)->Unlock();
            return;
        }

        uPtr(_suspendMutex)->Unlock();
    }
}

// public Fuse.Scripting.Object get_GlobalObject() [instance] :2837
::g::Fuse::Scripting::Object* ThreadWorker::GlobalObject()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_GlobalObject()");
    return uPtr(ThreadWorker::_context())->GlobalObject();
}

// private void InitBrowserPolyfill() [instance] :2891
void ThreadWorker::InitBrowserPolyfill()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "InitBrowserPolyfill()");
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[79/*"browser-Win...*/], uPtr(::g::FuseReactive_bundle::Windowfa915858())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[80/*"window-Timers"*/], uPtr(::g::FuseReactive_bundle::WindowTimers7900efea())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[81/*"window-Even...*/], uPtr(::g::FuseReactive_bundle::EventTarget7d6f5df3())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[82/*"window-Base64"*/], uPtr(::g::FuseReactive_bundle::WindowBase640722f8c9())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[83/*"window-File"*/], uPtr(::g::FuseReactive_bundle::File4d45d88c())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[84/*"window-XMLH...*/], uPtr(::g::FuseReactive_bundle::XMLHttpRequest8fe592f8())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[85/*"window-fetch"*/], uPtr(::g::FuseReactive_bundle::fetch5ebf15c4())->ReadAllText());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[86/*"window-loca...*/], uPtr(::g::FuseReactive_bundle::localStorageac5a7c18())->ReadAllText());
}

// private void InitBuiltInObjects() [instance] :2869
void ThreadWorker::InitBuiltInObjects()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "InitBuiltInObjects()");
    ::g::Fuse::Reactive::DebugLog::Init(ThreadWorker::_context());
    ::g::Fuse::Reactive::Console::Init(ThreadWorker::_context());
    uPtr(ThreadWorker::_context())->Evaluate1(::STRINGS[87/*"es6-promise"*/], uPtr(::g::FuseReactive_bundle::es6promise1eed3b03())->ReadAllText());
    uPtr(uPtr(ThreadWorker::_context())->GlobalObject())->Item(::STRINGS[88/*"require"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__Require_fn, this));
}

// private void InitFuseJS() [instance] :2883
void ThreadWorker::InitFuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "InitFuseJS()");
    ThreadWorker::_subscriberProxy() = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context())->Require1(::STRINGS[70/*"FuseJS/Subs...*/]), ::TYPES[14/*Fuse.Scripting.Function*/]);
    ThreadWorker::_observable() = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context())->Require1(::STRINGS[71/*"FuseJS/Obse...*/]), ::TYPES[14/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Reactive::FuseJS::Http::New1(Context());
    ThreadWorker::Register(::STRINGS[89/*"FuseJS/GeoL...*/], (uObject*)::g::Fuse::Reactive::FuseJS::GeoLocation::New2());
}

// public void Invoke(Uno.Action action) [instance] :3043
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    Dispatch(0, action);
}

// internal bool get_IsOnWorkerThread() [instance] :2771
bool ThreadWorker::IsOnWorkerThread()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_IsOnWorkerThread()");
    return _working;
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2822
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// private object Require(object[] args) [instance] :2877
uObject* ThreadWorker::Require(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Require(object[])");
    uString* path = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[21/*string*/]);
    return uPtr(ThreadWorker::_context())->Require1(path);
}

// public void Resume() [instance] :2814
void ThreadWorker::Resume()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Resume()");
    uPtr(_suspendMutex)->Lock();
    _suspendCount--;
    uPtr(_suspendMutex)->Unlock();
}

// private void Run() [instance] :2904
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");

    if (ThreadWorker::_context() == NULL)
    {
        ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

        if (ThreadWorker::_context() == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[90/*"Could not c...*/]));

        InitBuiltInObjects();
        InitFuseJS();
        InitBrowserPolyfill();
    }

    _jsContextReady = true;

    while (!_terminate)
    {
        ::uAutoReleasePool ____pool;
        uPtr(_suspendMutex)->Lock();

        if (_suspendCount == 0)
            _working = true;

        uPtr(_suspendMutex)->Unlock();

        if (_working)
        {
            uDelegate* action = Dequeue();

            if (::g::Uno::Delegate::op_Inequality(action, NULL))
            {
                try
                {
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    uPtr(_exceptionHandler)->SetException(e);
                }
            }

            _working = false;

            if (::g::Uno::Delegate::op_Inequality(action, NULL))
                continue;
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }

    if (ThreadWorker::_context() != NULL)
        ;
}

// public Fuse.Scripting.Function get_SubscriberProxy() [instance] :2842
::g::Fuse::Scripting::Function* ThreadWorker::SubscriberProxy()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_SubscriberProxy()");
    return ThreadWorker::_subscriberProxy();
}

// internal object Unwrap(object dc) [instance] :2995
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Unwrap(object)");
    ::g::Fuse::Reactive::AsyncObject* ao = uAs< ::g::Fuse::Reactive::AsyncObject*>(dc, ::TYPES[43/*Fuse.Reactive.AsyncObject*/]);

    if (ao != NULL)
        return uPtr(ao)->Object();
    else
    {
        ::g::Fuse::Reactive::AsyncArray* aa = uAs< ::g::Fuse::Reactive::AsyncArray*>(dc, ::TYPES[97/*Fuse.Reactive.AsyncArray*/]);

        if (aa != NULL)
            return uPtr(aa)->Array();
        else if ((((uIs(dc, ::TYPES[21/*string*/]) || uIs(dc, ::TYPES[17/*bool*/])) || uIs(dc, ::TYPES[12/*double*/])) || uIs(dc, ::TYPES[22/*int*/])) || uIs(dc, ::TYPES[23/*float*/]))
            return dc;
    }

    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[98/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
        return uPtr(obs)->Object;

    if (dc == this)
        return GlobalObject();

    if (dc == NULL)
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[91/*"Unhandled t...*/], dc)));
}

// internal object Wrap(object obj) [instance] :2962
uObject* ThreadWorker::Wrap(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Wrap(object)");
    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[4/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->InstanceOf(ThreadWorker::_observable()))
            return ::g::Fuse::Reactive::Observable::New1(this, sobj, ::g::Fuse::Reactive::Dispatcher::UIThread());
        else
            return ::g::Fuse::Reactive::AsyncObject::New1(this, sobj);
    }

    ::g::Fuse::Scripting::Array* sarr = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[25/*Fuse.Scripting.Array*/]);

    if (sarr != NULL)
        return ::g::Fuse::Reactive::AsyncArray::New1(this, sarr);

    ::g::Fuse::Scripting::Function* sfunc = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[14/*Fuse.Scripting.Function*/]);

    if (sfunc != NULL)
        return ::g::Fuse::Reactive::AsyncFunction::New1(this, sfunc);

    if (uIs(obj, ::TYPES[21/*string*/]))
        return obj;

    if (uIs(obj, ::TYPES[17/*bool*/]))
        return obj;

    if (uIs(obj, ::TYPES[12/*double*/]))
        return uBox(::TYPES[12/*double*/], uUnbox<double>(::TYPES[12/*double*/], obj));

    if (uIs(obj, ::TYPES[23/*float*/]))
        return uBox(::TYPES[12/*double*/], (double)uUnbox<float>(::TYPES[23/*float*/], obj));

    if (uIs(obj, ::TYPES[22/*int*/]))
        return uBox(::TYPES[12/*double*/], (double)uUnbox<int>(::TYPES[22/*int*/], obj));

    if (uIs(obj, ::TYPES[99/*uint*/]))
        return uBox(::TYPES[12/*double*/], (double)uUnbox<uint32_t>(::TYPES[99/*uint*/], obj));

    if (obj == NULL)
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[92/*"Unhandled t...*/], obj)));
}

// private static void BeginThread(Uno.Action a) [static] :3099
void ThreadWorker::BeginThread(uDelegate* a)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "BeginThread(Uno.Action)");
    ThreadWorker_typeof()->Init();
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(a);
    uPtr(thread)->Start();
}

// private static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IDispatcher ownerThread) [static] :2747
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* ownerThread)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Fuse.Scripting.IDispatcher)");
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Context::New1(ownerThread);
}

// public ThreadWorker New(Fuse.Reactive.CrossThreadExceptionHandler exceptionHandler) [static] :2755
ThreadWorker* ThreadWorker::New1(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler)
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_(exceptionHandler);
    return obj1;
}

// private static void Register(string moduleId, Fuse.Scripting.IModule module) [static] :2764
void ThreadWorker::Register(uString* moduleId, uObject* module)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Register(string,Fuse.Scripting.IModule)");
    ThreadWorker_typeof()->Init();
    ::g::Uno::UX::Resource::SetGlobalKey(module, moduleId);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(912)
// -------------------------------------------------------------

// private sealed class Dispatcher.UIThreadDispatcher :912
// {
::g::Fuse::Reactive::Dispatcher_type* Dispatcher__UIThreadDispatcher_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Dispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Dispatcher__UIThreadDispatcher);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Dispatcher_type);
    type = (::g::Fuse::Reactive::Dispatcher_type*)uClassType::New("Fuse.Reactive.Dispatcher.UIThreadDispatcher", options);
    type->SetBase(::g::Fuse::Reactive::Dispatcher_typeof());
    type->fp_ctor_ = (void*)Dispatcher__UIThreadDispatcher__New1_fn;
    type->fp_Dispatch = (void(*)(::g::Fuse::Reactive::Dispatcher*, uDelegate*))Dispatcher__UIThreadDispatcher__Dispatch_fn;
    ::TYPES[93] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[100] = ::g::Uno::Action_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::Dispatcher__UIThreadDispatcher, _actions), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher__UIThreadDispatcher, _mutex), 0);
    return type;
}

// public UIThreadDispatcher() :917
void Dispatcher__UIThreadDispatcher__ctor_1_fn(Dispatcher__UIThreadDispatcher* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispatch(Uno.Action action) :940
void Dispatcher__UIThreadDispatcher__Dispatch_fn(Dispatcher__UIThreadDispatcher* __this, uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", "Dispatch(Uno.Action)");
    uPtr(__this->_mutex)->Lock();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_actions), action);
    uPtr(__this->_mutex)->Unlock();
}

// public UIThreadDispatcher New() :917
void Dispatcher__UIThreadDispatcher__New1_fn(Dispatcher__UIThreadDispatcher** __retval)
{
    *__retval = Dispatcher__UIThreadDispatcher::New1();
}

// private void Run() :922
void Dispatcher__UIThreadDispatcher__Run_fn(Dispatcher__UIThreadDispatcher* __this)
{
    __this->Run();
}

// public UIThreadDispatcher() [instance] :917
void Dispatcher__UIThreadDispatcher::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", ".ctor()");
    _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[93/*Uno.Collections.List<Uno.Action>*/]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Dispatcher__UIThreadDispatcher__Run_fn, this), 0);
}

// private void Run() [instance] :922
void Dispatcher__UIThreadDispatcher::Run()
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", "Run()");
    uPtr(_mutex)->Lock();

    if (uPtr(_actions)->Count() == 0)
    {
        uPtr(_mutex)->Unlock();
        return;
    }

    uArray* list = (uArray*)uPtr(_actions)->ToArray();
    uPtr(_actions)->Clear();
    uPtr(_mutex)->Unlock();

    for (int index2 = 0, length3 = uPtr(list)->Length(); index2 < length3; ++index2)
    {
        uDelegate* a = uPtr(list)->Strong<uDelegate*>(index2);
        uPtr(a)->InvokeVoid();
    }
}

// public UIThreadDispatcher New() [static] :917
Dispatcher__UIThreadDispatcher* Dispatcher__UIThreadDispatcher::New1()
{
    Dispatcher__UIThreadDispatcher* obj4 = (Dispatcher__UIThreadDispatcher*)uNew(Dispatcher__UIThreadDispatcher_typeof());
    obj4->ctor_1();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(2038)
// --------------------------------------------------------------

// private sealed class Marshal.VectorEnum :2038
// {
uType* Marshal__VectorEnum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__VectorEnum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.VectorEnum", options);
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Reactive::Marshal__VectorEnum, _callback), 0);
    return type;
}

// public VectorEnum(Uno.Action<float4> callback) :2042
void Marshal__VectorEnum__ctor__fn(Marshal__VectorEnum* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public void Enum(object[] values) :2047
void Marshal__VectorEnum__Enum_fn(Marshal__VectorEnum* __this, uArray* values)
{
    __this->Enum(values);
}

// public VectorEnum New(Uno.Action<float4> callback) :2042
void Marshal__VectorEnum__New1_fn(uDelegate* callback, Marshal__VectorEnum** __retval)
{
    *__retval = Marshal__VectorEnum::New1(callback);
}

// public VectorEnum(Uno.Action<float4> callback) [instance] :2042
void Marshal__VectorEnum::ctor_(uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.VectorEnum", ".ctor(Uno.Action<float4>)");
    _callback = callback;
}

// public void Enum(object[] values) [instance] :2047
void Marshal__VectorEnum::Enum(uArray* values)
{
    uStackFrame __("Fuse.Reactive.Marshal.VectorEnum", "Enum(object[])");
    float r = (uPtr(values)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToFloat(uPtr(values)->Strong<uObject*>(0)) : 0.0f;
    float g = (values->Length() > 1) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(1)) : r;
    float b = (values->Length() > 2) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(2)) : r;
    float a = (values->Length() > 3) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(3)) : 1.0f;
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float4__New2(r, g, b, a)));
}

// public VectorEnum New(Uno.Action<float4> callback) [static] :2042
Marshal__VectorEnum* Marshal__VectorEnum::New1(uDelegate* callback)
{
    Marshal__VectorEnum* obj1 = (Marshal__VectorEnum*)uNew(Marshal__VectorEnum_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(3131)
// --------------------------------------------------------------

// public class WhileCount :3131
// {
WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileCount__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[29] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[49] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface0));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New1_fn, 0, true, WhileCount_typeof(), 0));
    return type;
}

// public generated WhileCount() :3131
void WhileCount__ctor_2_fn(WhileCount* __this)
{
    __this->ctor_2();
}

// private void Assess(int count) :3210
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :3256
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :3257
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :3274
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :3270
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :3287
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :3292
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;
    __this->Assess(length_);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :3283
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :3278
void WhileCount__FuseReactiveIObserverOnRemove_fn(WhileCount* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :3266
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :3244
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :3245
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :3159
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :3160
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :3232
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :3233
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :3131
void WhileCount__New1_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New1();
}

// private void OnItemsChanged() :3171
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :3134
void WhileCount__OnRooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :3142
void WhileCount__OnUnrooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[9/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void Reassess() :3185
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// private void ReplaceAll(object[] arr) :3205
void WhileCount__ReplaceAll_fn(WhileCount* __this, uArray* arr)
{
    __this->ReplaceAll(arr);
}

// public generated WhileCount() [instance] :3131
void WhileCount::ctor_2()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_1();
}

// private void Assess(int count) [instance] :3210
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
    {
        if (_isRooting)
            BypassActivate();
        else
            Activate(NULL);
    }
    else
        Deactivate();
}

// public int get_EqualTo() [instance] :3256
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :3257
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :3244
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :3245
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :3159
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :3160
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :3232
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :3233
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :3171
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    uObject* obs = uAs<uObject*>(_items, ::TYPES[29/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[9/*Uno.IDisposable*/]));

        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[29/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Reassess();
}

// private void Reassess() [instance] :3185
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[16/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]);

        if (a != NULL)
            ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(a), ::TYPES[49/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[51/*Uno.Action<object[]>*/], (void*)WhileCount__ReplaceAll_fn, this));
    }
}

// private void ReplaceAll(object[] arr) [instance] :3205
void WhileCount::ReplaceAll(uArray* arr)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "ReplaceAll(object[])");
    Assess(uPtr(arr)->Length());
}

// public generated WhileCount New() [static] :3131
WhileCount* WhileCount::New1()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno(3311)
// --------------------------------------------------------------

// public sealed class WhileEmpty :3311
// {
::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_ctor_ = (void*)WhileEmpty__New2_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[101] = ::g::Fuse::Reactive::WhileCount_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0));
    type->SetFields(25);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New2_fn, 0, true, WhileEmpty_typeof(), 0));
    return type;
}

// public WhileEmpty() :3313
void WhileEmpty__ctor_3_fn(WhileEmpty* __this)
{
    __this->ctor_3();
}

// public WhileEmpty New() :3313
void WhileEmpty__New2_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New2();
}

// public WhileEmpty() [instance] :3313
void WhileEmpty::ctor_3()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_2();
    EqualTo(0);
}

// public WhileEmpty New() [static] :3313
WhileEmpty* WhileEmpty::New2()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
