#-------------------------------------------------
#
# Project created by QtCreator 2011-06-25T12:27:54
#
#-------------------------------------------------

QT       += core gui network opengl

TARGET = qwinff
TEMPLATE = app

debug:DESTDIR = debug
release:DESTDIR = release

SOURCES += main.cpp \
    ui/progressbar.cpp \
    ui/mainwindow.cpp \
    ui/convertlist.cpp \
    ui/conversionparameterdialog.cpp \
    ui/addtaskwizard.cpp \
    ui/aboutffmpegdialog.cpp \
    ui/optionsdialog.cpp \
    ui/aboutdialog.cpp \
    ui/rangeselector.cpp \
    ui/timerangeedit.cpp \
    converter/presets.cpp \
    converter/mediaprobe.cpp \
    converter/mediaconverter.cpp \
    converter/ffmpeginterface.cpp \
    converter/converterinterface.cpp \
    converter/conversionparameters.cpp \
    services/paths.cpp \
    services/extensions.cpp \
    services/filepathoperations.cpp \
    services/notification.cpp \
    services/notificationservice.cpp \
    services/notificationservice-qt.cpp \
    services/notificationservice-notifysend.cpp \
    converter/audiofilter.cpp \
    converter/exepath.cpp \
    services/versioncompare.cpp \
    services/updatechecker.cpp \
    services/httpdownloader.cpp \
    services/updateinfoparser.cpp \
    services/constants.cpp \
    services/xmllookuptable.cpp \
    ui/updatedialog.cpp \
    services/settingtimer.cpp \
    services/ffplaypreviewer.cpp \
    services/abstractpreviewer.cpp \
    services/mplayerpreviewer.cpp \
    ui/previewdialog.cpp \
    ui/interactivecuttingdialog.cpp \
    ui/myqmpwidget.cpp \
    ui/mediaplayerwidget.cpp \
    ui/rangewidgetbinder.cpp

HEADERS  += \
    ui/progressbar.h \
    ui/mainwindow.h \
    ui/convertlist.h \
    ui/conversionparameterdialog.h \
    ui/addtaskwizard.h \
    ui/aboutffmpegdialog.h \
    ui/optionsdialog.h \
    ui/aboutdialog.h \
    ui/rangeselector.h \
    ui/timerangeedit.h \
    converter/presets.h \
    converter/mediaprobe.h \
    converter/mediaconverter.h \
    converter/ffmpeginterface.h \
    converter/converterinterface.h \
    converter/conversionparameters.h \
    services/paths.h \
    services/extensions.h \
    services/filepathoperations.h \
    version.h \
    services/notification.h \
    services/notificationservice.h \
    services/notificationservice-qt.h \
    services/notificationservice-notifysend.h \
    converter/audiofilter.h \
    converter/exepath.h \
    extra-translations.h \
    services/versioncompare.h \
    services/updatechecker.h \
    services/httpdownloader.h \
    services/updateinfoparser.h \
    services/constants.h \
    services/xmllookuptable.h \
    ui/updatedialog.h \
    services/settingtimer.h \
    services/ffplaypreviewer.h \
    services/abstractpreviewer.h \
    services/mplayerpreviewer.h \
    ui/previewdialog.h \
    ui/interactivecuttingdialog.h \
    ui/mediaplayerwidget.h \
    ui/myqmpwidget.h \
    ui/rangewidgetbinder.h

FORMS    += \
    ui/conversionparameterdialog.ui \
    ui/addtaskwizard.ui \
    ui/mainwindow.ui \
    ui/aboutffmpegdialog.ui \
    ui/optionsdialog.ui \
    ui/aboutdialog.ui \
    ui/updatedialog.ui \
    ui/previewdialog.ui \
    ui/interactivecuttingdialog.ui \
    ui/mediaplayerwidget.ui

RESOURCES += \
    images.qrc

TRANSLATIONS += \
    translations/qwinff_zh_TW.ts \
    translations/qwinff_ja_JP.ts \
    translations/qwinff_it_IT.ts \
    translations/qwinff_cs_CZ.ts \
    translations/qwinff_zh_CN.ts \
    translations/qwinff_ru.ts \
    translations/qwinff_es_ES.ts \
    translations/qwinff_es_GT.ts \
    translations/qwinff_ro_RO.ts \
    translations/qwinff_de.ts \
    translations/qwinff_tr_TR.ts \
    translations/qwinff_ar.ts \
    translations/qwinff_hu_HU.ts \
    translations/qwinff_pl_PL.ts \
    translations/qwinff_pt_BR.ts \
    translations/qwinff_fr.ts

INCLUDEPATH += .

unix {
    # If DATA_PATH is set, QWinFF searches data in DATA_PATH
    # Otherwise, it uses the executable path as data path.
    DEFINES += DATA_PATH=$(DATA_PATH)
    libnotify {
        # Linux desktop notification
        HEADERS += \
            services/notificationservice-libnotify.h
        SOURCES += \
            services/notificationservice-libnotify.cpp
        # pkgconfig
        CONFIG += link_pkgconfig
        PKGCONFIG = libnotify
        DEFINES += USE_LIBNOTIFY
    }
    # Shutdown
    QT += dbus
}

win32 {
    # If TOOLS_IN_DATA_PATH is set, QWinFF searches for FFmpeg executables
    # in <datapath>/tools/ instead of PATH.
    DEFINES += TOOLS_IN_DATA_PATH
    # Application Icon
    RC_FILE = appicon.rc
    # Shutdown
    LIBS += -lpowrprof
    LIBS += -lopengl32

}


# This string is shown in the about box.
DEFINES += VERSION_ID_STRING=$(VERSION_ID_STRING)

# External Short Blocking Operation Timeout
DEFINES += OPERATION_TIMEOUT=30000
DEFINES += DEFAULT_THREAD_COUNT=1

# QMPwidget (embedded mplayer)
SOURCES += qmpwidget/qmpwidget.cpp
HEADERS += qmpwidget/qmpwidget.h
INCLUDEPATH += qmpwidget
#CONFIG += qmpwidget_pipemode
!win32:qmpwidget_pipemode: {
    HEADERS += qmpwidget/qmpyuvreader.h
    DEFINES += QMP_USE_YUVPIPE
}

CONFIG_FILES += \
    $$PWD/config/
DIST_FILES += \
    $$PWD/tools/

# copies the given files to the destination directory
defineTest(copyToDestDir) {
    files = $$1
    dir = $$2
    # replace slashes in destination path for Windows
    win32:dir ~= s,/,\\,g

    for(file, files) {
        # replace slashes in source path for Windows
        win32:file ~= s,/,\\,g

        QMAKE_POST_LINK += $$QMAKE_COPY_DIR $$shell_quote($$file) $$shell_quote($$dir) $$escape_expand(\\n\\t)
    }

    export(QMAKE_POST_LINK)
}

copyToDestDir($$CONFIG_FILES, $$PWD/$$DESTDIR)
copyToDestDir($$DIST_FILES, $$PWD/$$DESTDIR/tools)