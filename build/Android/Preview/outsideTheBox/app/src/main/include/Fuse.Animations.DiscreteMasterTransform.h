// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.MasterTransform.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteMasterTransform;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteMasterTransform :831
// {
::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof();
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterTransform__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval);
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this);

struct DiscreteMasterTransform : ::g::Fuse::Animations::MasterTransform
{
    void ctor_2(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase);
    static DiscreteMasterTransform* New1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase);
};
// }

}}} // ::g::Fuse::Animations
