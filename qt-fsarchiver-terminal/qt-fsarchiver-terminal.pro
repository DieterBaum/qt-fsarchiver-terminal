######################################################################
# Automatically generated by qmake (3.0) So. Sep. 16 15:47:43 2018
######################################################################

TEMPLATE = app
TARGET = bin/qt-fsarchiver-terminal
INCLUDEPATH += .

DEFINES +=  HAVE_CONFIG_H _REENTRANT _FILE_OFFSET_BITS=64 _LARGEFILE64_SOURCE _GNU_SOURCE HAVE_QT5
INCLUDEPATH += . src  /usr/include/blkid /usr/include/uuid /usr/include/ext2fs /usr/include/e2p
LIBS += -L/usr/lib -lQt5Gui -lQt5Core -lpthread -lrt -llzma -lext2fs -lcom_err -le2p -lblkid -luuid -lz -llz4 -lbz2 -llzo2 -lgcrypt -lgpg-error -lzstd
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR = build
CODECFORTR=utf8
CODECFORSRC=utf8

# Input
HEADERS += src/archinfo.h \
           src/archreader.h \
           src/archwriter.h \
           src/common.h \
           src/comp_bzip2.h \
           src/comp_gzip.h \
           src/comp_lz4.h \
           src/comp_lzma.h \
           src/comp_lzo.h \
           src/comp_zstd.h \
           src/config.h \
           src/crypto.h \
           src/datafile.h \
           src/devinfo.h \
           src/dichl.h \
           src/dico.h \
           src/error.h \
           src/filesys.h \
           src/fs_btrfs.h \
           src/fs_ext2.h \
           src/fs_jfs.h \
           src/fs_ntfs.h \
           src/fs_reiser4.h \
           src/fs_reiserfs.h \
           src/fs_vfat.h \
           src/fs_xfs.h \
           src/fsarchiver.h \
           src/logfile.h \
           src/main.h \
           src/oper_probe.h \
           src/oper_restore.h \
           src/oper_save.h \
           src/options.h \
           src/queue.h \
           src/regmulti.h \
           src/strdico.h \
           src/strlist.h \
           src/syncthread.h \
           src/system.h \
           src/thread_archio.h \
           src/thread_comp.h \
           src/types.h \
           src/writebuf.h
FORMS += src/ui/fsarchiverMain.ui
SOURCES += src/archinfo.c \
           src/archreader.c \
           src/archwriter.c \
           src/common.c \
           src/comp_bzip2.c \
           src/comp_gzip.c \
           src/comp_lz4.c \
           src/comp_lzma.c \
           src/comp_lzo.c \
           src/comp_zstd.c \
           src/crypto.c \
           src/datafile.c \
           src/devinfo.c \
           src/dichl.c \
           src/dico.c \
           src/error.c \
           src/filesys.c \
           src/fs_btrfs.c \
           src/fs_ext2.c \
           src/fs_jfs.c \
           src/fs_ntfs.c \
           src/fs_reiser4.c \
           src/fs_reiserfs.c \
           src/fs_vfat.c \
           src/fs_xfs.c \
           src/fsarchiver.c \
           src/logfile.c \
           src/main.cc \
           src/oper_probe.c \
           src/oper_restore.c \
           src/oper_save.c \
           src/options.c \
           src/queue.c \
           src/regmulti.c \
           src/strdico.c \
           src/strlist.c \
           src/syncthread.c \
           src/thread_archio.c \
           src/thread_comp.c \
           src/writebuf.c
# install
 isEmpty(DOC_DIR) {
   DOC_DIR = /usr/share/doc/qt-fsarchiver-terminal
 }

 target.path = /usr/sbin
 doc.files = doc/*
 doc.path = $$DOC_DIR
 INSTALLS = target doc
