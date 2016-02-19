// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/outsideTheBox.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseControlsImage_string_Url_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class outsideTheBox_FuseControlsImage_string_Url_Property :10
// {
::g::Uno::UX::Property_type* outsideTheBox_FuseControlsImage_string_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(outsideTheBox_FuseControlsImage_string_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("outsideTheBox_FuseControlsImage_string_Url_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))outsideTheBox_FuseControlsImage_string_Url_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))outsideTheBox_FuseControlsImage_string_Url_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::outsideTheBox_FuseControlsImage_string_Url_Property, _obj), 0);
    return type;
}

// public outsideTheBox_FuseControlsImage_string_Url_Property(Fuse.Controls.Image obj) :13
void outsideTheBox_FuseControlsImage_string_Url_Property__ctor_1_fn(outsideTheBox_FuseControlsImage_string_Url_Property* __this, ::g::Fuse::Controls::Image* obj)
{
    __this->ctor_1(obj);
}

// public outsideTheBox_FuseControlsImage_string_Url_Property New(Fuse.Controls.Image obj) :13
void outsideTheBox_FuseControlsImage_string_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, outsideTheBox_FuseControlsImage_string_Url_Property** __retval)
{
    *__retval = outsideTheBox_FuseControlsImage_string_Url_Property::New1(obj);
}

// protected override sealed string OnGet() :14
void outsideTheBox_FuseControlsImage_string_Url_Property__OnGet_fn(outsideTheBox_FuseControlsImage_string_Url_Property* __this, uString** __retval)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_string_Url_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Url(), void();
}

// protected override sealed void OnSet(string v, object origin) :15
void outsideTheBox_FuseControlsImage_string_Url_Property__OnSet_fn(outsideTheBox_FuseControlsImage_string_Url_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_string_Url_Property", "OnSet(string,object)");
    uPtr(__this->_obj)->Url(v);
}

// public outsideTheBox_FuseControlsImage_string_Url_Property(Fuse.Controls.Image obj) [instance] :13
void outsideTheBox_FuseControlsImage_string_Url_Property::ctor_1(::g::Fuse::Controls::Image* obj)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_string_Url_Property", ".ctor(Fuse.Controls.Image)");
    ctor_();
    _obj = obj;
}

// public outsideTheBox_FuseControlsImage_string_Url_Property New(Fuse.Controls.Image obj) [static] :13
outsideTheBox_FuseControlsImage_string_Url_Property* outsideTheBox_FuseControlsImage_string_Url_Property::New1(::g::Fuse::Controls::Image* obj)
{
    outsideTheBox_FuseControlsImage_string_Url_Property* obj1 = (outsideTheBox_FuseControlsImage_string_Url_Property*)uNew(outsideTheBox_FuseControlsImage_string_Url_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
