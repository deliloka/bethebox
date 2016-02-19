// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger;}}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal abstract class TransformGesture :1104
// {
struct TransformGesture_type : ::g::Fuse::Behavior_type
{
    void(*fp_OnStarted)(::g::Fuse::Gestures::TransformGesture*);
};

TransformGesture_type* TransformGesture_typeof();
void TransformGesture__ctor_1_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void TransformGesture__OnRooted_fn(TransformGesture* __this, ::g::Fuse::Node* n);
void TransformGesture__OnStarted_fn(TransformGesture* __this);
void TransformGesture__OnUnrooted_fn(TransformGesture* __this, ::g::Fuse::Node* n);
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval);
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value);

struct TransformGesture : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Gestures::Internal::TwoFinger*> Impl;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> _Target;

    void ctor_1(::g::Fuse::Elements::InteractiveTransform* target);
    void OnStarted() { (((TransformGesture_type*)__type)->fp_OnStarted)(this); }
    ::g::Fuse::Elements::InteractiveTransform* Target();
    void Target(::g::Fuse::Elements::InteractiveTransform* value);
    static void OnStarted(TransformGesture* __this) { TransformGesture__OnStarted_fn(__this); }
};
// }

}}} // ::g::Fuse::Gestures
