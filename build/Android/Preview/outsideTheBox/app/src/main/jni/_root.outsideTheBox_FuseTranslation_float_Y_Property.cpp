// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/outsideTheBox.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseTranslation_float_Y_Property.h>
#include <Fuse.Translation.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class outsideTheBox_FuseTranslation_float_Y_Property :38
// {
::g::Uno::UX::Property_type* outsideTheBox_FuseTranslation_float_Y_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(outsideTheBox_FuseTranslation_float_Y_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("outsideTheBox_FuseTranslation_float_Y_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))outsideTheBox_FuseTranslation_float_Y_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))outsideTheBox_FuseTranslation_float_Y_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Translation_typeof();
    type->SetFields(2,
        ::g::Fuse::Translation_typeof(), offsetof(::g::outsideTheBox_FuseTranslation_float_Y_Property, _obj), 0);
    return type;
}

// public outsideTheBox_FuseTranslation_float_Y_Property(Fuse.Translation obj) :41
void outsideTheBox_FuseTranslation_float_Y_Property__ctor_1_fn(outsideTheBox_FuseTranslation_float_Y_Property* __this, ::g::Fuse::Translation* obj)
{
    __this->ctor_1(obj);
}

// public outsideTheBox_FuseTranslation_float_Y_Property New(Fuse.Translation obj) :41
void outsideTheBox_FuseTranslation_float_Y_Property__New1_fn(::g::Fuse::Translation* obj, outsideTheBox_FuseTranslation_float_Y_Property** __retval)
{
    *__retval = outsideTheBox_FuseTranslation_float_Y_Property::New1(obj);
}

// protected override sealed float OnGet() :42
void outsideTheBox_FuseTranslation_float_Y_Property__OnGet_fn(outsideTheBox_FuseTranslation_float_Y_Property* __this, float* __retval)
{
    uStackFrame __("outsideTheBox_FuseTranslation_float_Y_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Y(), void();
}

// protected override sealed void OnSet(float v, object origin) :43
void outsideTheBox_FuseTranslation_float_Y_Property__OnSet_fn(outsideTheBox_FuseTranslation_float_Y_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("outsideTheBox_FuseTranslation_float_Y_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Y(v_);
}

// public outsideTheBox_FuseTranslation_float_Y_Property(Fuse.Translation obj) [instance] :41
void outsideTheBox_FuseTranslation_float_Y_Property::ctor_1(::g::Fuse::Translation* obj)
{
    uStackFrame __("outsideTheBox_FuseTranslation_float_Y_Property", ".ctor(Fuse.Translation)");
    ctor_();
    _obj = obj;
}

// public outsideTheBox_FuseTranslation_float_Y_Property New(Fuse.Translation obj) [static] :41
outsideTheBox_FuseTranslation_float_Y_Property* outsideTheBox_FuseTranslation_float_Y_Property::New1(::g::Fuse::Translation* obj)
{
    outsideTheBox_FuseTranslation_float_Y_Property* obj1 = (outsideTheBox_FuseTranslation_float_Y_Property*)uNew(outsideTheBox_FuseTranslation_float_Y_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
