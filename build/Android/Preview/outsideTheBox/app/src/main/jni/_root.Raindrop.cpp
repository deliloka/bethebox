// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/Raindrop.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_bundle.h>
#include <_root.outsideTheBox_FuseControlsImage_float4_Color_Property.h>
#include <_root.Raindrop.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Rotation.h>
#include <Fuse.Transform.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[1];
static uType* TYPES[11];

namespace g{

// public partial sealed class Raindrop :1
// {
// static Raindrop() :4
static void Raindrop__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* Raindrop_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Raindrop);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Raindrop", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Raindrop__New2_fn;
    type->fp_cctor_ = Raindrop__cctor_4_fn;
    type->interface7.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChild_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface7.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelGetChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelget_ChildCount_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface7.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface7.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface7.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface7.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface7.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface7.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("dropletcolor");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[4] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[5] = ::g::outsideTheBox_bundle_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Fuse::Transform_typeof();
    ::TYPES[9] = ::g::Fuse::Rotation_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Panel_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8));
    type->SetFields(100,
        ::g::outsideTheBox_FuseControlsImage_float4_Color_Property_typeof(), offsetof(::g::Raindrop, temp_Color_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Raindrop__New2_fn, 0, true, Raindrop_typeof(), 0));
    return type;
}

// public Raindrop() :7
void Raindrop__ctor_4_fn(Raindrop* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :11
void Raindrop__InitializeUX_fn(Raindrop* __this)
{
    __this->InitializeUX();
}

// public Raindrop New() :7
void Raindrop__New2_fn(Raindrop** __retval)
{
    *__retval = Raindrop::New2();
}

// public Raindrop() [instance] :7
void Raindrop::ctor_4()
{
    uStackFrame __("Raindrop", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :11
void Raindrop::InitializeUX()
{
    uStackFrame __("Raindrop", "InitializeUX()");
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New2();
    temp_Color_inst = ::g::outsideTheBox_FuseControlsImage_float4_Color_Property::New1(temp);
    ::g::Fuse::Rotation* temp1 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<float4>*/], temp_Color_inst, ::STRINGS[0/*"dropletcolor"*/]);
    temp->Width(20.0f);
    temp->Height(20.0f);
    temp->Padding(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Opacity(0.8f);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::outsideTheBox_bundle::raindrop6ed649c8()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), temp1);
    temp1->Degrees(-20.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp);
}

// public Raindrop New() [static] :7
Raindrop* Raindrop::New2()
{
    Raindrop* obj1 = (Raindrop*)uNew(Raindrop_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
