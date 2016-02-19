// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.TransformGesture.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct RotateGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal sealed class RotateGesture :1167
// {
::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();
void RotateGesture__ctor_2_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void RotateGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval);
void RotateGesture__OnRooted_fn(RotateGesture* __this, ::g::Fuse::Node* n);
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle);
void RotateGesture__OnStarted_fn(RotateGesture* __this);
void RotateGesture__OnUnrooted_fn(RotateGesture* __this, ::g::Fuse::Node* n);

struct RotateGesture : ::g::Fuse::Gestures::TransformGesture
{
    float _startRotation;

    void ctor_2(::g::Fuse::Elements::InteractiveTransform* target);
    void OnRotated(float angle);
    static RotateGesture* New1(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
