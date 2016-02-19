// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/outsideTheBox.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{

// public static generated class outsideTheBox_bundle :0
// {
// static outsideTheBox_bundle() :0
static void outsideTheBox_bundle__cctor__fn(uType* __type)
{
    outsideTheBox_bundle::cloudf6cd2dfe_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"cloud-532c8...*/]);
    outsideTheBox_bundle::MainViewc5d19fb7_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"mainview-49...*/]);
    outsideTheBox_bundle::raindrop6ed649c8_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"raindrop-5e...*/]);
    outsideTheBox_bundle::sun5ab94b15_ = ::g::Uno::BundleFile::New1(::STRINGS[3/*"sun-a0c89d1...*/]);
}

uClassType* outsideTheBox_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("outsideTheBox_bundle", options);
    type->fp_cctor_ = outsideTheBox_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("cloud-532c8b84.png");
    ::STRINGS[1] = uString::Const("mainview-49bb4919.js");
    ::STRINGS[2] = uString::Const("raindrop-5e33c52a.png");
    ::STRINGS[3] = uString::Const("sun-a0c89d1b.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::outsideTheBox_bundle::cloudf6cd2dfe_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::outsideTheBox_bundle::MainViewc5d19fb7_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::outsideTheBox_bundle::raindrop6ed649c8_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::outsideTheBox_bundle::sun5ab94b15_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("cloudf6cd2dfe", 0),
        new uField("MainViewc5d19fb7", 1),
        new uField("raindrop6ed649c8", 2),
        new uField("sun5ab94b15", 3));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> outsideTheBox_bundle::cloudf6cd2dfe_;
uSStrong< ::g::Uno::BundleFile*> outsideTheBox_bundle::MainViewc5d19fb7_;
uSStrong< ::g::Uno::BundleFile*> outsideTheBox_bundle::raindrop6ed649c8_;
uSStrong< ::g::Uno::BundleFile*> outsideTheBox_bundle::sun5ab94b15_;
// }

} // ::g
