# Automatically generated by configure - do not modify
# Configured with: '/root/xen-4.13.0/tools/../tools/qemu-xen-traditional/configure' '--disable-gfx-check' '--disable-curses' '--disable-slirp' '--extra-cflags=-D__XEN_TOOLS__ ' '--cpu=x86_64' '--prefix=/usr/local'
prefix=/usr/local
bindir=${prefix}/bin
mandir=${prefix}/share/man
datadir=${prefix}/share/qemu
docdir=${prefix}/share/doc/qemu
MAKE=make
INSTALL=install
INSTALL_PROG=install -m 0755
CC=gcc
HOST_CC=gcc
AR=ar
STRIP=strip -s -R .comment -R .note
OS_CFLAGS=
OS_LDFLAGS=
ARCH_CFLAGS=-m64
ARCH_LDFLAGS=-m64
CFLAGS=-D__XEN_TOOLS__  -O2 -g -fno-strict-aliasing -Wall -Wundef -Wendif-labels -Wwrite-strings -Wmissing-prototypes -Wstrict-prototypes -Wredundant-decls
LDFLAGS= -g -Wl,--warn-common
EXESUF=
AIOLIBS=-lpthread -lrt
ARCH=x86_64
CONFIG_AUDIO=yes
CONFIG_AC97=yes
CONFIG_ES1370=yes
CONFIG_SB16=yes
CONFIG_OSS=yes
CONFIG_OSS_LIB=
VERSION=0.10.2
SRC_PATH=/root/xen-4.13.0/tools/qemu-xen-traditional
VPATH=/root/xen-4.13.0/tools/qemu-xen-traditional
TARGET_DIRS=i386-softmmu x86_64-softmmu arm-softmmu cris-softmmu m68k-softmmu mips-softmmu mipsel-softmmu mips64-softmmu mips64el-softmmu ppc-softmmu ppcemb-softmmu ppc64-softmmu sh4-softmmu sh4eb-softmmu sparc-softmmu i386-linux-user x86_64-linux-user alpha-linux-user arm-linux-user armeb-linux-user cris-linux-user m68k-linux-user mips-linux-user mipsel-linux-user ppc-linux-user ppc64-linux-user ppc64abi32-linux-user sh4-linux-user sh4eb-linux-user sparc-linux-user sparc64-linux-user sparc32plus-linux-user 
CONFIG_AIO=yes
INSTALL_BLOBS=yes
HOST_USB=linux
TOOLS=qemu-nbd$(EXESUF) qemu-img$(EXESUF) 
XEN_ROOT=/root/xen-4.13.0/tools/..
QEMU_ROOT ?= .
XEN_ROOT ?= $(QEMU_ROOT)/../xen-unstable.hg
include $(XEN_ROOT)/tools/Rules.mk

ifdef CONFIG_STUBDOM
export TARGET_DIRS=i386-stubdom
else
export TARGET_DIRS=i386-dm
endif

SUBDIR_RULES=subdir-$(TARGET_DIRS)
subdir-$(TARGET_DIRS): libqemu_common.a

include $(QEMU_ROOT)/xen-hooks.mak
