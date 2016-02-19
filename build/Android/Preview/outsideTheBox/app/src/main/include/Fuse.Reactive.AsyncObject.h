// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AsyncObject;}}}
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class AsyncObject :268
// {
struct AsyncObject_type : uType
{
    ::g::Uno::IDisposable interface0;
};

AsyncObject_type* AsyncObject_typeof();
void AsyncObject__ctor__fn(AsyncObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
void AsyncObject__Dispose_fn(AsyncObject* __this);
void AsyncObject__DoDispose_fn(AsyncObject* __this);
void AsyncObject__Equals_fn(AsyncObject* __this, uObject* obj, bool* __retval);
void AsyncObject__GetHashCode_fn(AsyncObject* __this, int* __retval);
void AsyncObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, AsyncObject** __retval);
void AsyncObject__get_Object_fn(AsyncObject* __this, ::g::Fuse::Scripting::Object** __retval);
void AsyncObject__Tell_fn(AsyncObject* __this, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback);
void AsyncObject__TryTellSync_fn(AsyncObject* __this, uString* key, uObject** result, bool* __retval);

struct AsyncObject : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
    void Dispose();
    void DoDispose();
    ::g::Fuse::Scripting::Object* Object();
    void Tell(uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback);
    bool TryTellSync(uString* key, uObject** result);
    static AsyncObject* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
