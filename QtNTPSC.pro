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
    subwindows.cpp \
    controls/guibase.cpp \
    controls/resistor.cpp \
    controls/resister_pianter.cpp \
    controls/line.cpp \
    controls/pin.cpp \
    controls/res.cpp \
    controls/elmentbase.cpp \
    controls/rect.cpp \
    controls/dcpower.cpp \
    controls/capacitance.cpp \
    controls/circle.cpp \
    controls/rcircle.cpp \
    controls/text.cpp \
    controls/voltmeter.cpp \
    controls/diod.cpp \
    controls/pnp.cpp \
    controls/gro.cpp \
    controls/amp.cpp

HEADERS += \
    mainwindow.h \
    subwindows.h \
    controls/guibase.h \
    controls/resistor.h \
    controls/resister_pianter.h \
    controls/line.h \
    controls/pin.h \
    controls/res.h \
    stable.h \
    datastruct.h \
    controls/elmentbase.h \
    controls/rect.h \
    controls/dcpower.h \
    controls/capacitance.h \
    controls/circle.h \
    controls/rcircle.h \
    controls/text.h \
    controls/voltmeter.h \
    controls/diod.h \
    controls/pnp.h \
    controls/gro.h \
    controls/amp.h \
    ntpsc.h


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
    lib/res.ntp \
    lib/res.txt \
    lib/vol.ntp \
    lib/diod.ntp \
    lib/pnp.ntp \
    lib/gro.ntp \
    lib/amp.ntp

SUBDIRS += \
    QtNTPSC.pro
