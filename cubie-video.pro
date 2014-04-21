#-------------------------------------------------
#
# Project created by QtCreator 2014-04-18T06:41:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cubie-video
TEMPLATE = app


SOURCES += main.cpp \
    processImage.cpp \
    facedetect.cpp

HEADERS  += \
    processImage.h \
    facedetect.h


FORMS    += mainwindow.ui

LIBS += /usr/lib/libopencv_core.so \
        /usr/lib/libopencv_calib3d.so \
        /usr/lib/libopencv_contrib.so \
        /usr/lib/libopencv_highgui.so \
        /usr/lib/libopencv_features2d.so \
        /usr/lib/libopencv_flann.so \
        /usr/lib/libopencv_gpu.so \
        /usr/lib/libopencv_imgproc.so \
        /usr/lib/libopencv_legacy.so \
        /usr/lib/libopencv_ml.so \
        /usr/lib/libopencv_objdetect.so \
        /usr/lib/libopencv_video.so
