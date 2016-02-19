#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.23.4/Targets/CPlusPlus/Android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/outsideTheBox/app/src/main"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.7.0_75.jdk/Contents/Home"
##endif

##if #(Ant.Directory:IsSet)
PATH="/Users/n07101/Library/Application Support/Fusetools/Fuse/Android/Ant/bin:$PATH"
##endif

echo "## 1/2: liboutsideTheBox.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: outsideTheBox.apk"

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not not found." >&2
    exit 1
fi

ant debug

cd "`dirname "$0"`"
ln -sf outsideTheBox/app/src/main/bin/outsideTheBox-debug.apk outsideTheBox.apk
