// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{struct MainView;}
namespace g{struct outsideTheBox_FuseControlsImage_string_Url_Property;}
namespace g{struct outsideTheBox_FuseControlsTextControl_string_Value_Property;}
namespace g{struct outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Controls::Text*> locationNameText;
    uStrong< ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property*> locationNameText_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::outsideTheBox_FuseControlsImage_string_Url_Property*> temp_Url_inst;
    uStrong< ::g::outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property*> temp1_Visibility_inst;
    uStrong< ::g::Fuse::Controls::TextInput*> textInputSearch;
    uStrong< ::g::outsideTheBox_FuseControlsTextControl_string_Value_Property*> textInputSearch_Value_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
