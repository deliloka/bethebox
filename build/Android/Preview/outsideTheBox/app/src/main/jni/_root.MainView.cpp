// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CloudWithRain.h>
#include <_root.MainView.h>
#include <_root.outsideTheBox_bundle.h>
#include <_root.outsideTheBox_FuseControlsImage_string_Url_Property.h>
#include <_root.outsideTheBox_FuseControlsTextControl_string_Value_Property.h>
#include <_root.outsideTheBox_FuseElementsElement_FuseElementsVisibility_-fe57d5f5.h>
#include <_root.Sun.h>
#include <_root.SunWithCloud.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Theme.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[11];
static uType* TYPES[22];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :11
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("locationName");
    ::STRINGS[1] = uString::Const("locationImageUrl");
    ::STRINGS[2] = uString::Const("visibility");
    ::STRINGS[3] = uString::Const("searchString");
    ::STRINGS[4] = uString::Const("searchClick");
    ::STRINGS[5] = uString::Const("/Users/n07101/dev/fuseProjects/outsideTheBox/MainView.ux");
    ::STRINGS[6] = uString::Const("3*, 2*, 1*, 1*");
    ::STRINGS[7] = uString::Const("locationNameText");
    ::STRINGS[8] = uString::Const("S\303\270k p\303\245 sted...");
    ::STRINGS[9] = uString::Const("textInputSearch");
    ::STRINGS[10] = uString::Const("S\303\270k");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[5] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = ::g::Fuse::AppBase_typeof();
    ::TYPES[7] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[8] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[9] = ::g::outsideTheBox_bundle_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[11] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Grid_typeof();
    ::TYPES[13] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[14] = ::g::Fuse::Behavior_typeof();
    ::TYPES[15] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[16] = ::g::Fuse::Effects::Blur_typeof();
    ::TYPES[17] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[18] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[20] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[21] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, locationNameText), 0,
        ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, locationNameText_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::outsideTheBox_FuseControlsImage_string_Url_Property_typeof(), offsetof(::g::MainView, temp_Url_inst), 0,
        ::g::outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property_typeof(), offsetof(::g::MainView, temp1_Visibility_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::MainView, textInputSearch), 0,
        ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, textInputSearch_Value_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :14
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :18
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :14
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :14
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :18
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    locationNameText = ::g::Fuse::Controls::Text::New2();
    locationNameText_Value_inst = ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property::New1(locationNameText);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New2();
    temp_Url_inst = ::g::outsideTheBox_FuseControlsImage_string_Url_Property::New1(temp);
    ::g::CloudWithRain* temp1 = ::g::CloudWithRain::New3();
    temp1_Visibility_inst = ::g::outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property::New1(temp1);
    textInputSearch = ::g::Fuse::Controls::TextInput::New3();
    textInputSearch_Value_inst = ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property::New1(textInputSearch);
    ::g::Fuse::Reactive::JavaScript* temp2 = ::g::Fuse::Reactive::JavaScript::New1();
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::Grid* temp4 = ::g::Fuse::Controls::Grid::New2();
    ::g::Fuse::Effects::DropShadow* temp5 = ::g::Fuse::Effects::DropShadow::New1();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], locationNameText_Value_inst, ::STRINGS[0/*"locationName"*/]);
    ::g::Fuse::Effects::Blur* temp7 = ::g::Fuse::Effects::Blur::New1();
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp_Url_inst, ::STRINGS[1/*"locationIma...*/]);
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp1_Visibility_inst, ::STRINGS[2/*"visibility"*/]);
    ::g::Sun* temp10 = ::g::Sun::New3();
    ::g::SunWithCloud* temp11 = ::g::SunWithCloud::New2();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], textInputSearch_Value_inst, ::STRINGS[3/*"searchString"*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"searchString"*/]);
    ::g::Fuse::Controls::Button* temp14 = ::g::Fuse::Controls::Button::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[4/*"searchClick"*/]);
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp2->LineNumber(2);
    temp2->FileName(::STRINGS[5/*"/Users/n071...*/]);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::outsideTheBox_bundle::MainViewc5d19fb7()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp4);
    temp4->Rows(::STRINGS[6/*"3*, 2*, 1*,...*/]);
    temp4->ColumnCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), locationNameText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), temp14);
    uPtr(locationNameText)->TextWrapping(1);
    uPtr(locationNameText)->FontSize(48.0f);
    uPtr(locationNameText)->TextAlignment(1);
    uPtr(locationNameText)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(locationNameText)->Alignment(8);
    uPtr(locationNameText)->Name(::STRINGS[7/*"locationNam...*/]);
    ::g::Fuse::Controls::Grid::SetRow(locationNameText, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(locationNameText)->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Effects.Effect*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(locationNameText)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp6);
    temp->StretchMode(6);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Effects.Effect*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp8);
    temp7->Radius(2.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp9);
    temp10->Visibility(2);
    ::g::Fuse::Controls::Grid::SetRow(temp10, 1);
    temp11->Visibility(0);
    ::g::Fuse::Controls::Grid::SetRow(temp11, 1);
    ::g::Fuse::Controls::Grid::SetRow(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Node*/])), textInputSearch);
    uPtr(textInputSearch)->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(textInputSearch)->PlaceholderText(::STRINGS[8/*"Søk på sted...*/]);
    uPtr(textInputSearch)->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    uPtr(textInputSearch)->FontSize(22.0f);
    uPtr(textInputSearch)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(textInputSearch)->Alignment(12);
    uPtr(textInputSearch)->Name(::STRINGS[9/*"textInputSe...*/]);
    uPtr(textInputSearch)->add_ValueChanged(uDelegate::New(::TYPES[18/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textInputSearch)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textInputSearch)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb0);
    temp14->Text(::STRINGS[10/*"Søk"*/]);
    temp14->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp14, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp14, uDelegate::New(::TYPES[20/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb1);
    RootNode(temp3);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp2);
}

// public MainView New() [static] :14
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
