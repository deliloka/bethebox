// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.23.2/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct HitTestHelpers;}}}
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public static class HitTestHelpers :506
// {
uClassType* HitTestHelpers_typeof();
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Node* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval);

struct HitTestHelpers : uObject
{
    static ::g::Fuse::HitTestResult* HitTestNearest(::g::Fuse::Node* root, ::g::Uno::Float2 point);
};
// }

}}} // ::g::Fuse::Input
