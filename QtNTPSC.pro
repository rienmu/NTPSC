#-------------------------------------------------
#
# Project created by QtCreator 2022-11-07T06:19:12
#
#-------------------------------------------------

QT       += core gui
PRECOMPILED_HEADER = stable.h
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtNTPSC
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    controls/line.cpp \
    controls/pin.cpp \
    controls/rect.cpp \
    controls/circle.cpp \
    controls/rcircle.cpp \
    controls/text.cpp \
    controls/userdef.cpp \
    controls/elmentbase.cpp \
    subwindow.cpp \
    guibackground.cpp \
    controls/drawthread.cpp \
    controls/guiitem.cpp \
    controls/guibase.cpp \
    controls/arc.cpp


HEADERS += \
    mainwindow.h \
    controls/line.h \
    controls/pin.h \
    stable.h \
    datastruct.h \
    controls/elmentbase.h \
    controls/rect.h \
    controls/text.h \
    ntpsc.h \
    controls/userdef.h \
    controls/circle.h \
    controls/pin.h \
    controls/rcircle.h \
    controls/rect.h \
    controls/userdef.h \
    subwindow.h \
    guibackground.h \
    controls/drawthread.h \
    controls/guiitem.h \
    controls/guibase.h \
    controls/arc.h


FORMS += \
        mainwindow.ui \
    subwindows.ui \


DISTFILES += \
    src/img/res.bmp \
    src/img/res.jpeg \
    src/img/res.png \
    lib/res.ntp \
    lib/res.txt \
    lib/power.ntp \
    lib/cap.ntp \
    lib/power.ntp \
    lib/vol.ntp \
    lib/diod.ntp \
    lib/pnp.ntp \
    lib/gro.ntp \
    lib/amp.ntp \
    src/img/res.png \
    format.clang-format \
    src/img/res.png \
    lib/amm.ntp \
    lib/inductance.ntp \
    lib/landing.ntp
    lib/li.ntp \
    lib/amp.ntp \
    lib/arc.ntp


SUBDIRS += \
    QtNTPSC.pro

RESOURCES += \
    src/img/iconimg.qrc

