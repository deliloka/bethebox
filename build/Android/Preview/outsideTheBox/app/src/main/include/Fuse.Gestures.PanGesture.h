// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.TransformGesture.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct PanGesture;}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal sealed class PanGesture :1198
// {
::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof();
void PanGesture__ctor_2_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void PanGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval);
void PanGesture__OnRooted_fn(PanGesture* __this, ::g::Fuse::Node* n);
void PanGesture__OnStarted_fn(PanGesture* __this);
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist);
void PanGesture__OnUnrooted_fn(PanGesture* __this, ::g::Fuse::Node* n);

struct PanGesture : ::g::Fuse::Gestures::TransformGesture
{
    ::g::Uno::Float4x4 _invTransform;
    uStrong< ::g::Fuse::FastMatrix*> _startTransform;
    ::g::Uno::Float2 _startTranslation;

    void ctor_2(::g::Fuse::Elements::InteractiveTransform* target);
    void OnTranslated(::g::Uno::Float2 dist);
    static PanGesture* New1(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
