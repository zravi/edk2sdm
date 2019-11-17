#!/bin/bash
set -e
sudo apt update
sudo apt install -y build-essential uuid-dev iasl git nasm gcc-aarch64-linux-gnu bc
curdir="$PWD"
cd "$curdir"
export PACKAGES_PATH=$PWD/edk2:$PWD/edk2-platforms:$PWD/Sdm835
export WORKSPACE=$PWD/workspace
. ./edk2/edksetup.sh
make -C ./edk2/BaseTools
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -p XiaomiMI6Pkg/XiaomiMI6Pkg.dsc
gzip -9nkc < workspace/Build/XiaomiMI6Pkg/DEBUG_GCC5/FV/XIAOMIMI6PKG_UEFI.fd >uefi.img
