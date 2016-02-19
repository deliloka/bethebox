// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct StringVector;}}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class StringVector :1493
// {
struct StringVector_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

StringVector_type* StringVector_typeof();
void StringVector__ctor__fn(StringVector* __this);
void StringVector__Add_fn(StringVector* __this, ::g::Fuse::Scripting::V8::Simple::String* item);
void StringVector__Clear_fn(StringVector* __this);
void StringVector__Contains_fn(StringVector* __this, ::g::Fuse::Scripting::V8::Simple::String* item, bool* __retval);
void StringVector__get_Count_fn(StringVector* __this, int* __retval);
void StringVector__GetEnumerator_fn(StringVector* __this, uObject** __retval);
void StringVector__Insert_fn(StringVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::String* item);
void StringVector__get_Item_fn(StringVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::String** __retval);
void StringVector__New1_fn(StringVector** __retval);
void StringVector__Remove_fn(StringVector* __this, ::g::Fuse::Scripting::V8::Simple::String* item, bool* __retval);
void StringVector__RemoveAt_fn(StringVector* __this, int* index);

struct StringVector : uObject
{
    uStrong< ::g::Uno::Collections::List*> _list;

    void ctor_();
    void Add(::g::Fuse::Scripting::V8::Simple::String* item);
    void Clear();
    bool Contains(::g::Fuse::Scripting::V8::Simple::String* item);
    int Count();
    uObject* GetEnumerator();
    void Insert(int index, ::g::Fuse::Scripting::V8::Simple::String* item);
    ::g::Fuse::Scripting::V8::Simple::String* Item(int index);
    bool Remove(::g::Fuse::Scripting::V8::Simple::String* item);
    void RemoveAt(int index);
    static StringVector* New1();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
