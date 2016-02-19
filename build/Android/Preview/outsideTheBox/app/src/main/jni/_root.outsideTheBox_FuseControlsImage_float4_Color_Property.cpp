// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/outsideTheBox.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseControlsImage_float4_Color_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class outsideTheBox_FuseControlsImage_float4_Color_Property :24
// {
::g::Uno::UX::Property_type* outsideTheBox_FuseControlsImage_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(outsideTheBox_FuseControlsImage_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("outsideTheBox_FuseControlsImage_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))outsideTheBox_FuseControlsImage_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))outsideTheBox_FuseControlsImage_float4_Color_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::outsideTheBox_FuseControlsImage_float4_Color_Property, _obj), 0);
    return type;
}

// public outsideTheBox_FuseControlsImage_float4_Color_Property(Fuse.Controls.Image obj) :27
void outsideTheBox_FuseControlsImage_float4_Color_Property__ctor_1_fn(outsideTheBox_FuseControlsImage_float4_Color_Property* __this, ::g::Fuse::Controls::Image* obj)
{
    __this->ctor_1(obj);
}

// public outsideTheBox_FuseControlsImage_float4_Color_Property New(Fuse.Controls.Image obj) :27
void outsideTheBox_FuseControlsImage_float4_Color_Property__New1_fn(::g::Fuse::Controls::Image* obj, outsideTheBox_FuseControlsImage_float4_Color_Property** __retval)
{
    *__retval = outsideTheBox_FuseControlsImage_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :28
void outsideTheBox_FuseControlsImage_float4_Color_Property__OnGet_fn(outsideTheBox_FuseControlsImage_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_float4_Color_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :29
void outsideTheBox_FuseControlsImage_float4_Color_Property__OnSet_fn(outsideTheBox_FuseControlsImage_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_float4_Color_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public outsideTheBox_FuseControlsImage_float4_Color_Property(Fuse.Controls.Image obj) [instance] :27
void outsideTheBox_FuseControlsImage_float4_Color_Property::ctor_1(::g::Fuse::Controls::Image* obj)
{
    uStackFrame __("outsideTheBox_FuseControlsImage_float4_Color_Property", ".ctor(Fuse.Controls.Image)");
    ctor_();
    _obj = obj;
}

// public outsideTheBox_FuseControlsImage_float4_Color_Property New(Fuse.Controls.Image obj) [static] :27
outsideTheBox_FuseControlsImage_float4_Color_Property* outsideTheBox_FuseControlsImage_float4_Color_Property::New1(::g::Fuse::Controls::Image* obj)
{
    outsideTheBox_FuseControlsImage_float4_Color_Property* obj1 = (outsideTheBox_FuseControlsImage_float4_Color_Property*)uNew(outsideTheBox_FuseControlsImage_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
