// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/outsideTheBox.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseElementsElement_float_Opacity_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class outsideTheBox_FuseElementsElement_float_Opacity_Property :31
// {
::g::Uno::UX::Property_type* outsideTheBox_FuseElementsElement_float_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(outsideTheBox_FuseElementsElement_float_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("outsideTheBox_FuseElementsElement_float_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))outsideTheBox_FuseElementsElement_float_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))outsideTheBox_FuseElementsElement_float_Opacity_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::outsideTheBox_FuseElementsElement_float_Opacity_Property, _obj), 0);
    return type;
}

// public outsideTheBox_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) :34
void outsideTheBox_FuseElementsElement_float_Opacity_Property__ctor_1_fn(outsideTheBox_FuseElementsElement_float_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public outsideTheBox_FuseElementsElement_float_Opacity_Property New(Fuse.Elements.Element obj) :34
void outsideTheBox_FuseElementsElement_float_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, outsideTheBox_FuseElementsElement_float_Opacity_Property** __retval)
{
    *__retval = outsideTheBox_FuseElementsElement_float_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :35
void outsideTheBox_FuseElementsElement_float_Opacity_Property__OnGet_fn(outsideTheBox_FuseElementsElement_float_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("outsideTheBox_FuseElementsElement_float_Opacity_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :36
void outsideTheBox_FuseElementsElement_float_Opacity_Property__OnSet_fn(outsideTheBox_FuseElementsElement_float_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("outsideTheBox_FuseElementsElement_float_Opacity_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public outsideTheBox_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) [instance] :34
void outsideTheBox_FuseElementsElement_float_Opacity_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    uStackFrame __("outsideTheBox_FuseElementsElement_float_Opacity_Property", ".ctor(Fuse.Elements.Element)");
    ctor_();
    _obj = obj;
}

// public outsideTheBox_FuseElementsElement_float_Opacity_Property New(Fuse.Elements.Element obj) [static] :34
outsideTheBox_FuseElementsElement_float_Opacity_Property* outsideTheBox_FuseElementsElement_float_Opacity_Property::New1(::g::Fuse::Elements::Element* obj)
{
    outsideTheBox_FuseElementsElement_float_Opacity_Property* obj1 = (outsideTheBox_FuseElementsElement_float_Opacity_Property*)uNew(outsideTheBox_FuseElementsElement_float_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
