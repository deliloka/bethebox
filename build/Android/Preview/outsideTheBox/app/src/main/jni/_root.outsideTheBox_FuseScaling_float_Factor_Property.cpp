// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/outsideTheBox.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseScaling_float_Factor_Property.h>
#include <Fuse.Scaling.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class outsideTheBox_FuseScaling_float_Factor_Property :52
// {
::g::Uno::UX::Property_type* outsideTheBox_FuseScaling_float_Factor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(outsideTheBox_FuseScaling_float_Factor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("outsideTheBox_FuseScaling_float_Factor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))outsideTheBox_FuseScaling_float_Factor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))outsideTheBox_FuseScaling_float_Factor_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Scaling_typeof();
    type->SetFields(2,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::outsideTheBox_FuseScaling_float_Factor_Property, _obj), 0);
    return type;
}

// public outsideTheBox_FuseScaling_float_Factor_Property(Fuse.Scaling obj) :55
void outsideTheBox_FuseScaling_float_Factor_Property__ctor_1_fn(outsideTheBox_FuseScaling_float_Factor_Property* __this, ::g::Fuse::Scaling* obj)
{
    __this->ctor_1(obj);
}

// public outsideTheBox_FuseScaling_float_Factor_Property New(Fuse.Scaling obj) :55
void outsideTheBox_FuseScaling_float_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, outsideTheBox_FuseScaling_float_Factor_Property** __retval)
{
    *__retval = outsideTheBox_FuseScaling_float_Factor_Property::New1(obj);
}

// protected override sealed float OnGet() :56
void outsideTheBox_FuseScaling_float_Factor_Property__OnGet_fn(outsideTheBox_FuseScaling_float_Factor_Property* __this, float* __retval)
{
    uStackFrame __("outsideTheBox_FuseScaling_float_Factor_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Factor(), void();
}

// protected override sealed void OnSet(float v, object origin) :57
void outsideTheBox_FuseScaling_float_Factor_Property__OnSet_fn(outsideTheBox_FuseScaling_float_Factor_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("outsideTheBox_FuseScaling_float_Factor_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Factor(v_);
}

// public outsideTheBox_FuseScaling_float_Factor_Property(Fuse.Scaling obj) [instance] :55
void outsideTheBox_FuseScaling_float_Factor_Property::ctor_1(::g::Fuse::Scaling* obj)
{
    uStackFrame __("outsideTheBox_FuseScaling_float_Factor_Property", ".ctor(Fuse.Scaling)");
    ctor_();
    _obj = obj;
}

// public outsideTheBox_FuseScaling_float_Factor_Property New(Fuse.Scaling obj) [static] :55
outsideTheBox_FuseScaling_float_Factor_Property* outsideTheBox_FuseScaling_float_Factor_Property::New1(::g::Fuse::Scaling* obj)
{
    outsideTheBox_FuseScaling_float_Factor_Property* obj1 = (outsideTheBox_FuseScaling_float_Factor_Property*)uNew(outsideTheBox_FuseScaling_float_Factor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
